using UnityEngine;

public class RecognizerEnemy : MonoBehaviour
{
    [Header("Health")]
    public int maxHealth = 3;

    [Header("Shooting")]
    public GameObject projectilePrefab;
    public Transform muzzlePoint;
    public float fireInterval = 3f;
    public float projectileSpeed = 2f;

    [Header("VFX")]
    public GameObject deathVFX;
    public GameObject hitVFX;

    public System.Action OnDead;

    private int _health;
    private bool _dead = false;
    private float _fireTimer = 0f;
    private float _hitCooldown = 0f;
    private Transform _player;

    void Awake()
    {
        _health = maxHealth;

        Rigidbody rb = GetComponent<Rigidbody>();
        if (rb != null)
        {
            rb.isKinematic = true;
            rb.useGravity = false;
        }
    }

    void Start()
    {
        _player = Camera.main != null ? Camera.main.transform : null;
        // Stagger first shot so multiple recognizers don't all fire at once
        _fireTimer = Random.Range(0f, fireInterval);
    }

    void Update()
    {
        if (_dead) return;
        if (_player == null && Camera.main != null)
            _player = Camera.main.transform;

        _fireTimer -= Time.deltaTime;
        if (_fireTimer <= 0f)
        {
            _fireTimer = fireInterval;
            FireProjectile();
        }
    }

    void FixedUpdate()
    {
        if (_dead) return;
        if (_hitCooldown > 0f) _hitCooldown -= Time.fixedDeltaTime;
        CheckSwordOverlap();
    }

    // Disk damage comes through DiskPhysics.OnCollisionEnter → TakeDamage(1).
    // This only handles the sword, which has no OnCollisionEnter path against kinematic RBs.
    void CheckSwordOverlap()
    {
        if (_hitCooldown > 0f) return;

        const float hitRadius = 0.6f;
        Collider[] nearby = Physics.OverlapSphere(transform.position, hitRadius,
            ~0, QueryTriggerInteraction.Collide);

        foreach (var col in nearby)
        {
            if (col.GetComponentInParent<TronStaffController>() != null)
            {
                TakeDamage(1);
                return;
            }
        }
    }

    public void TakeDamage(int amount)
    {
        if (_dead) return;
        if (_hitCooldown > 0f) return;

        _hitCooldown = 0.4f;
        _health -= amount;

        if (hitVFX != null)
            Instantiate(hitVFX, transform.position, Quaternion.identity);

        Debug.Log($"[Recognizer] Hit! Health: {_health}/{maxHealth}");

        if (_health <= 0)
            _Die();
    }

    void FireProjectile()
    {
        if (projectilePrefab == null || _player == null) return;

        Transform origin = muzzlePoint != null ? muzzlePoint : transform;
        Vector3 dir = (_player.position - origin.position).normalized;

        GameObject go = Instantiate(projectilePrefab, origin.position,
            Quaternion.LookRotation(dir));

        RecognizerProjectile proj = go.GetComponent<RecognizerProjectile>();
        if (proj != null)
        {
            proj.Launch(dir, projectileSpeed);
        }
        else
        {
            // Fallback: drive via Rigidbody if script missing
            Rigidbody rb = go.GetComponent<Rigidbody>();
            if (rb != null) rb.linearVelocity = dir * projectileSpeed;
        }
    }

    void _Die()
    {
        if (_dead) return;
        _dead = true;

        if (GameManager.Instance != null)
            GameManager.Instance.AddScore(5);

        if (deathVFX != null)
            Instantiate(deathVFX, transform.position, Quaternion.identity);

        OnDead?.Invoke();
        Destroy(gameObject);
    }
}
