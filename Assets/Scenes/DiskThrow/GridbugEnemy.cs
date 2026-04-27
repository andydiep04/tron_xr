using UnityEngine;
using System.Collections;

public class GridbugEnemy : MonoBehaviour
{
    public enum BugState { SeekingSurface, SurfaceCrawl, VoidWalk, DropAttacking, Dead }

    [Header("Movement")]
    public float speed = 0.4f;
    public float steerSpeed = 120f;
    public float surfaceDetectDist = 0.25f;
    public float bugRadius = 0.03f;
    [Tooltip("How far ahead to check for intact walls during void walk.")]
    public float wallAvoidDist = 0.35f;

    [Header("Attack")]
    public float dropXZRange = 0.6f;
    public float groundRushFootOffset = 0.9f;
    public float attackContactRange = 0.2f;

    [Header("Debug")]
    public bool showRaycasts = true;

    [Header("VFX")]
    public GameObject deathVFX;

    public System.Action OnDead;

    // SeekingSurface is only used for test-mode fallback spawns.
    // Breach-spawned bugs start directly in VoidWalk via StartInVoid().
    private BugState _state = BugState.SeekingSurface;
    private Rigidbody _rb;
    private Transform _player;
    private bool _dead = false;

    void Awake()
    {
        _rb = GetComponent<Rigidbody>();
        _rb.isKinematic = true;
        _rb.useGravity = false;
        _rb.interpolation = RigidbodyInterpolation.Interpolate;

        // Grow the physics collider so the disc can physically contact the bug.
        // The script's bugRadius (snap-offset) stays small; this is just the hit zone.
        SphereCollider sc = GetComponent<SphereCollider>();
        if (sc != null) sc.radius = 0.1f;
    }

    void Start()
    {
        _player = Camera.main != null ? Camera.main.transform : null;

        // Only seek a surface if spawner didn't set a state (test/fallback path).
        // Breach-spawned bugs are already in VoidWalk before Start() runs.
        if (_state == BugState.SeekingSurface)
            StartCoroutine(SeekSurfaceRoutine());
    }

    /// <summary>
    /// Called by GridbugSpawner for bugs that enter through a breach.
    /// Bug starts in the void, facing inward, and immediately void-walks.
    /// </summary>
    public void StartInVoid(Vector3 faceDirection)
    {
        if (faceDirection.sqrMagnitude > 0.001f)
            transform.rotation = Quaternion.LookRotation(faceDirection.normalized, Vector3.up);
        _state = BugState.VoidWalk;
    }

    void FixedUpdate()
    {
        if (_player == null && Camera.main != null)
            _player = Camera.main.transform;

        switch (_state)
        {
            case BugState.SurfaceCrawl: SurfaceCrawlTick(); break;
            case BugState.VoidWalk:     VoidWalkTick();     break;
        }

        // Weapon kill check every tick — more reliable than OnCollisionEnter for kinematic RBs
        if (_state == BugState.SurfaceCrawl || _state == BugState.VoidWalk)
            CheckWeaponOverlap();
    }

    void CheckWeaponOverlap()
    {
        // Physics.OverlapSphere is unaffected by the layer collision matrix,
        // so this works even if Gridbug × Default collisions are disabled.
        // QueryTriggerInteraction.Collide includes the sword's root trigger collider
        // alongside the non-trigger blade/piece children.
        const float hitRadius = 0.35f;
        Collider[] nearby = Physics.OverlapSphere(transform.position, hitRadius,
            ~0, QueryTriggerInteraction.Collide);

        foreach (var col in nearby)
        {
            // Disc: only lethal when actually moving — prevents a resting disc on
            // the floor from insta-killing any bug that walks near it.
            DiskPhysics disk = col.GetComponentInParent<DiskPhysics>();
            if (disk != null)
            {
                Rigidbody diskRb = disk.GetComponent<Rigidbody>();
                if (diskRb != null && diskRb.linearVelocity.magnitude > 1.5f)
                {
                    _Die(); return;
                }
            }

            // Sword: GetComponentInParent resolves any child collider (blade, pieces)
            // back to the root TronStaffController regardless of which part overlaps.
            if (col.GetComponentInParent<TronStaffController>() != null)
            {
                _Die(); return;
            }
        }
    }

    // ─── Surface Crawl ───────────────────────────────────────────────────────

    void SurfaceCrawlTick()
    {
        RaycastHit hit;
        bool onSurface = RaycastSurface(transform.position, -transform.up, surfaceDetectDist, out hit);

        if (showRaycasts)
            Debug.DrawRay(transform.position, -transform.up * surfaceDetectDist,
                onSurface ? Color.green : Color.red);

        if (!onSurface)
        {
            // Fell off a surface edge (e.g. floor broke beneath the bug).
            // Switch to void walk so the bug keeps pursuing the player through the gap.
            _state = BugState.VoidWalk;
            return;
        }

        transform.position = hit.point + hit.normal * bugRadius;
        AlignToNormal(hit.normal);

        if (_player == null) return;

        // Ceiling drop: if upside-down and player is below within range
        bool onCeiling = Vector3.Dot(transform.up, Vector3.down) > 0.8f;
        if (onCeiling)
        {
            Vector3 delta = _player.position - transform.position;
            float xzDist = new Vector2(delta.x, delta.z).magnitude;
            if (delta.y < 0f && xzDist <= dropXZRange)
            {
                StartDropAttack();
                return;
            }
        }

        // Contact
        if (Vector3.Distance(transform.position, _player.position) <= attackContactRange)
        {
            Debug.Log("[Gridbug] Surface contact with player.");
            _Die();
            return;
        }

        // Steer toward player projected onto current surface
        Vector3 targetPos = IsOnFloor()
            ? _player.position - Vector3.up * groundRushFootOffset
            : _player.position;

        Vector3 projDir = Vector3.ProjectOnPlane(targetPos - transform.position, transform.up).normalized;
        if (projDir.sqrMagnitude > 0.001f)
        {
            Quaternion targetRot = Quaternion.LookRotation(projDir, transform.up);
            transform.rotation = Quaternion.RotateTowards(transform.rotation, targetRot,
                steerSpeed * Time.fixedDeltaTime);
        }

        transform.Translate(Vector3.forward * speed * Time.fixedDeltaTime, Space.Self);

        // Re-snap after movement
        if (RaycastSurface(transform.position, -transform.up, surfaceDetectDist * 2f, out hit))
        {
            transform.position = hit.point + hit.normal * bugRadius;
            AlignToNormal(hit.normal);
        }
    }

    // ─── Void Walk ───────────────────────────────────────────────────────────

    void VoidWalkTick()
    {
        if (_player == null) return;

        if (showRaycasts)
            Debug.DrawRay(transform.position, Vector3.down * surfaceDetectDist, Color.cyan);

        // Snap to floor if one appears below
        RaycastHit groundHit;
        if (RaycastSurface(transform.position, Vector3.down, surfaceDetectDist, out groundHit))
        {
            transform.position = groundHit.point + groundHit.normal * bugRadius;
            AlignToNormal(groundHit.normal);
            _state = BugState.SurfaceCrawl;
            return;
        }

        // Snap to ceiling if one is immediately above
        RaycastHit ceilHit;
        if (RaycastSurface(transform.position, Vector3.up, surfaceDetectDist, out ceilHit))
        {
            transform.position = ceilHit.point + ceilHit.normal * bugRadius;
            AlignToNormal(ceilHit.normal); // ceiling normal points down → bug is inverted
            _state = BugState.SurfaceCrawl;
            return;
        }

        // Contact
        if (Vector3.Distance(transform.position, _player.position) <= attackContactRange)
        {
            Debug.Log("[Gridbug] Void contact with player.");
            _Die();
            return;
        }

        // Move XZ toward player, maintain Y (crawl across the void)
        Vector3 toPlayer = _player.position - transform.position;
        Vector3 desiredDir = new Vector3(toPlayer.x, 0f, toPlayer.z).normalized;

        // Avoid intact walls — breaches have no collider so the path stays clear automatically
        desiredDir = AvoidWalls(desiredDir);

        // Gently drift Y toward ankle height so bugs don't bundle above the player's head.
        // Ankle ≈ player head Y minus a standing-height estimate.
        float ankleY = _player.position.y - 1.4f;
        float yDrift = Mathf.Clamp((ankleY - transform.position.y) * 2f, -speed, speed);

        transform.position += (desiredDir * speed + Vector3.up * yDrift) * Time.fixedDeltaTime;

        if (desiredDir.sqrMagnitude > 0.001f)
        {
            Quaternion targetRot = Quaternion.LookRotation(desiredDir, Vector3.up);
            transform.rotation = Quaternion.RotateTowards(transform.rotation, targetRot,
                steerSpeed * Time.fixedDeltaTime);
        }
    }

    /// <summary>
    /// Returns a steering direction that avoids intact room geometry.
    /// Breaches (empty space) have no collider, so they register as clear.
    /// </summary>
    Vector3 AvoidWalls(Vector3 desiredDir)
    {
        if (!RaycastSurface(transform.position, desiredDir, wallAvoidDist, out _))
            return desiredDir; // path clear — void or breach ahead

        // Try graduated angles on both sides until a clear path is found
        float[] angles = { 45f, 90f, 135f };
        foreach (float ang in angles)
        {
            Vector3 right = Quaternion.Euler(0f,  ang, 0f) * desiredDir;
            Vector3 left  = Quaternion.Euler(0f, -ang, 0f) * desiredDir;
            bool rightClear = !RaycastSurface(transform.position, right, wallAvoidDist, out _);
            bool leftClear  = !RaycastSurface(transform.position, left,  wallAvoidDist, out _);

            if (rightClear && leftClear)
            {
                // Both clear — pick the side more aligned with the player
                Vector3 toPlayer = _player.position - transform.position; toPlayer.y = 0f;
                Vector3 r = Vector3.Cross(desiredDir, Vector3.up);
                return Vector3.Dot(r, toPlayer) > 0f ? right : left;
            }
            if (rightClear) return right;
            if (leftClear)  return left;
        }

        return Vector3.zero; // fully surrounded — stay put
    }

    bool IsOnFloor() => Vector3.Dot(transform.up, Vector3.up) > 0.7f;

    void AlignToNormal(Vector3 normal)
    {
        Vector3 projFwd = Vector3.ProjectOnPlane(transform.forward, normal).normalized;
        if (projFwd.sqrMagnitude < 0.001f)
            projFwd = Vector3.ProjectOnPlane(Vector3.forward, normal).normalized;
        if (projFwd.sqrMagnitude < 0.001f)
            projFwd = Vector3.ProjectOnPlane(Vector3.right, normal).normalized;
        if (projFwd.sqrMagnitude > 0.001f)
            transform.rotation = Quaternion.LookRotation(projFwd, normal);
    }

    // ─── Surface Seek (test / fallback only) ─────────────────────────────────

    IEnumerator SeekSurfaceRoutine()
    {
        Vector3[] dirs = {
            Vector3.down, Vector3.up,
            Vector3.left, Vector3.right,
            Vector3.forward, Vector3.back
        };

        float bestDist = float.MaxValue;
        bool found = false;
        RaycastHit bestHit = default;

        foreach (var dir in dirs)
        {
            RaycastHit h;
            if (RaycastSurface(transform.position, dir, 2f, out h) && h.distance < bestDist)
            {
                bestDist = h.distance;
                bestHit = h;
                found = true;
            }
        }

        if (found)
        {
            if (showRaycasts)
                Debug.Log($"[Gridbug] Seek: {bestHit.collider.name} " +
                          $"layer={LayerMask.LayerToName(bestHit.collider.gameObject.layer)} " +
                          $"dist={bestHit.distance:F2}");

            transform.position = bestHit.point + bestHit.normal * bugRadius;
            AlignToNormal(bestHit.normal);
            yield return new WaitForSeconds(0.15f);
            _state = BugState.SurfaceCrawl;
        }
        else
        {
            if (showRaycasts)
                Debug.LogWarning($"[Gridbug] No surface found from {transform.position}. Void walking.");
            yield return new WaitForSeconds(0.2f);
            if (!_dead) _state = BugState.VoidWalk;
        }
    }

    // ─── Raycast Helpers ─────────────────────────────────────────────────────

    /// <summary>
    /// Closest hit that is actual room geometry — excludes bugs, bit targets, and weapons.
    /// Uses ~0 mask so MRUK geometry on layer 2 ("Ignore Raycast") is always included.
    /// </summary>
    public static bool RaycastSurface(Vector3 origin, Vector3 dir, float dist, out RaycastHit result)
    {
        RaycastHit[] hits = Physics.RaycastAll(origin, dir, dist, ~0, QueryTriggerInteraction.Ignore);
        System.Array.Sort(hits, (a, b) => a.distance.CompareTo(b.distance));

        foreach (var h in hits)
        {
            if (IsValidSurface(h.collider))
            {
                result = h;
                return true;
            }
        }

        result = default;
        return false;
    }

    public static bool IsValidSurface(Collider col)
    {
        if (col.CompareTag("Gridbug")) return false;
        if (col.GetComponentInParent<TargetModelSwap>() != null) return false;
        if (col.GetComponentInParent<DiskPhysics>() != null) return false;
        if (col.GetComponentInParent<AresGrenade>() != null) return false;
        if (col.GetComponentInParent<TronStaffController>() != null) return false;
        if (col.GetComponentInParent<HandAnimationController>() != null) return false;
        return true;
    }

    // ─── Drop Attack ─────────────────────────────────────────────────────────

    void StartDropAttack()
    {
        _state = BugState.DropAttacking;
        _rb.isKinematic = false;
        _rb.useGravity = true;
    }

    // ─── Collision ───────────────────────────────────────────────────────────

    void OnCollisionEnter(Collision collision)
    {
        if (_dead) return;
        if (!IsValidSurface(collision.collider)) return;

        string tag = collision.gameObject.tag;
        if (tag == "Disc" || tag == "Sword")
        {
            _Die();
            return;
        }

        if (_state == BugState.DropAttacking)
        {
            Debug.Log($"[Gridbug] Drop landed on: {collision.gameObject.name}");
            _Die();
        }
    }

    // ─── Death ───────────────────────────────────────────────────────────────

    public void Die() => _Die();

    void _Die()
    {
        if (_dead) return;
        _dead = true;
        _state = BugState.Dead;

        if (GameManager.Instance != null)
            GameManager.Instance.AddScore(1);

        if (deathVFX != null)
            Instantiate(deathVFX, transform.position, Quaternion.identity);

        OnDead?.Invoke();
        Destroy(gameObject);
    }
}
