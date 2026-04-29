using UnityEngine;
using System.Collections;

public class GridbugSpawner : MonoBehaviour
{
    [Header("Prefab")]
    public GameObject gridbugPrefab;

    [Header("References")]
    public DestructibleGlobalMeshManager wallManager;

    [Header("Spawn Limits")]
    public int maxCount = 10;

    [Header("Breach Spawn")]
    [Tooltip("How many bugs emerge from each wall/floor breach.")]
    public int perWallBreak = 2;
    [Tooltip("Distance outside the wall where bugs spawn (in the void).")]
    public float breachSpawnOffset = 0.3f;
    [Range(0f, 1f)]
    [Tooltip("Probability that any bugs spawn at all when a wall breaks.")]
    public float spawnChance = 0.035f;

    [Header("Editor / Test")]
    [Tooltip("Spawns bugs near the player after a delay without needing MRUK. " +
             "Use in the Unity Editor with a floor plane to test bug movement.")]
    public bool testSpawnMode = false;
    public float testSpawnDelay = 3f;
    public int testSpawnCount = 3;

    private int _liveCount = 0;

    void Start()
    {
        if (wallManager == null)
            wallManager = FindFirstObjectByType<DestructibleGlobalMeshManager>();

        if (wallManager != null)
            wallManager.OnSegmentDestroyed += OnWallBroken;
        else
            Debug.LogWarning("[GridbugSpawner] No DestructibleGlobalMeshManager found in scene.");

        if (testSpawnMode)
            StartCoroutine(TestSpawnBatch());
    }

    void OnDestroy()
    {
        if (wallManager != null)
            wallManager.OnSegmentDestroyed -= OnWallBroken;
    }

    // ─── Breach Spawn ─────────────────────────────────────────────────────────

    void OnWallBroken(Vector3 breachPos)
    {
        if (_liveCount >= maxCount) return;
        if (Random.value > spawnChance) return;

        Transform head = Camera.main != null ? Camera.main.transform : null;
        if (head == null) return;

        // Outward direction: from the player, through the breach, into the void outside.
        // Zero out Y — we only want a horizontal offset so bugs spawn at breach height.
        Vector3 outward = breachPos - head.position;
        outward.y = 0f;

        // Floor/ceiling breaks have near-zero XZ delta — skip them, walls only.
        if (outward.sqrMagnitude < 0.5f) return;

        outward = outward.normalized;

        // Only spawn from the lower half of the wall — upper breaks look unnatural.
        if (breachPos.y > head.position.y - 0.5f) return;

        int toSpawn = Mathf.Min(perWallBreak, maxCount - _liveCount);
        for (int i = 0; i < toSpawn; i++)
        {
            // Spread so bugs don't stack exactly on top of each other
            Vector3 spread = new Vector3(
                Random.Range(-0.15f, 0.15f), 0f, Random.Range(-0.15f, 0.15f));
            Vector3 spawnPos = breachPos + outward * breachSpawnOffset + spread;

            // Bug faces inward through the hole (-outward = toward the player)
            SpawnInVoid(spawnPos, -outward);
        }
    }

    // ─── Editor Test Spawn ───────────────────────────────────────────────────

    IEnumerator TestSpawnBatch()
    {
        yield return new WaitForSeconds(testSpawnDelay);
        Debug.Log("[GridbugSpawner] TEST MODE: spawning near player without MRUK.");
        for (int i = 0; i < testSpawnCount; i++)
            SpawnNearPlayer();
    }

    void SpawnNearPlayer()
    {
        if (gridbugPrefab == null || _liveCount >= maxCount) return;

        Transform head = Camera.main != null ? Camera.main.transform : null;
        if (head == null) return;

        for (int attempt = 0; attempt < 10; attempt++)
        {
            Vector2 xz = Random.insideUnitCircle.normalized * Random.Range(1f, 2.5f);
            Vector3 origin = head.position + new Vector3(xz.x, 0f, xz.y);

            RaycastHit hit;
            if (RaycastForSurface(origin + Vector3.up, Vector3.down, 4f, out hit))
            {
                SpawnOnSurface(hit.point + hit.normal * 0.05f);
                return;
            }
        }

        Debug.LogWarning("[GridbugSpawner] Test mode: no surface found near player.");
    }

    // ─── Spawn Helpers ────────────────────────────────────────────────────────

    /// <summary>Spawns a bug in empty space — it will VoidWalk toward the player.</summary>
    void SpawnInVoid(Vector3 pos, Vector3 faceDir)
    {
        if (gridbugPrefab == null || _liveCount >= maxCount) return;

        GameObject go = Instantiate(gridbugPrefab, pos, Quaternion.identity);
        GridbugEnemy bug = go.GetComponent<GridbugEnemy>();
        if (bug == null) { Destroy(go); return; }

        _liveCount++;
        bug.StartInVoid(faceDir);
        bug.OnDead += DecrementCount;
    }

    /// <summary>Spawns a bug on a surface — used by test mode.</summary>
    void SpawnOnSurface(Vector3 pos)
    {
        if (gridbugPrefab == null || _liveCount >= maxCount) return;

        GameObject go = Instantiate(gridbugPrefab, pos, Quaternion.identity);
        GridbugEnemy bug = go.GetComponent<GridbugEnemy>();
        if (bug == null) { Destroy(go); return; }

        _liveCount++;
        // State remains SeekingSurface — Start() will run SeekSurfaceRoutine
        bug.OnDead += DecrementCount;
    }

    static bool RaycastForSurface(Vector3 origin, Vector3 dir, float dist, out RaycastHit result)
    {
        RaycastHit[] hits = Physics.RaycastAll(origin, dir, dist, ~0, QueryTriggerInteraction.Ignore);
        System.Array.Sort(hits, (a, b) => a.distance.CompareTo(b.distance));

        foreach (var h in hits)
        {
            if (GridbugEnemy.IsValidSurface(h.collider))
            {
                result = h;
                return true;
            }
        }

        result = default;
        return false;
    }

    void DecrementCount() => _liveCount = Mathf.Max(0, _liveCount - 1);
}
