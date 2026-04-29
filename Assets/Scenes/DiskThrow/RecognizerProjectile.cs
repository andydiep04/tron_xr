using UnityEngine;

public class RecognizerProjectile : MonoBehaviour
{
    public float maxLifetime = 10f;

    public float playerHitRadius = 0.4f;

    private Rigidbody _rb;
    private Transform _player;

    void Awake()
    {
        _rb = GetComponent<Rigidbody>();
    }

    void Start()
    {
        _player = Camera.main != null ? Camera.main.transform : null;
        Destroy(gameObject, maxLifetime);
    }

    public void Launch(Vector3 direction, float speed)
    {
        if (_rb != null)
            _rb.linearVelocity = direction.normalized * speed;
    }

    void FixedUpdate()
    {
        if (_player == null && Camera.main != null)
            _player = Camera.main.transform;

        if (_player != null &&
            Vector3.Distance(transform.position, _player.position) <= playerHitRadius)
        {
            if (GameManager.Instance != null)
                GameManager.Instance.PlayerHit();
            Destroy(gameObject);
            return;
        }

        CheckWeaponOverlap();
    }

    void CheckWeaponOverlap()
    {
        const float hitRadius = 0.1f;
        Collider[] nearby = Physics.OverlapSphere(transform.position, hitRadius,
            ~0, QueryTriggerInteraction.Collide);

        foreach (var col in nearby)
        {
            DiskPhysics disk = col.GetComponentInParent<DiskPhysics>();
            if (disk != null)
            {
                Rigidbody diskRb = disk.GetComponent<Rigidbody>();
                if (diskRb != null && diskRb.linearVelocity.magnitude > 1.5f)
                {
                    Destroy(gameObject);
                    return;
                }
            }

            if (col.GetComponentInParent<TronStaffController>() != null)
            {
                Destroy(gameObject);
                return;
            }
        }
    }

    void OnTriggerEnter(Collider other)
    {
        // Never self-collide with the recognizer that fired this
        if (other.GetComponentInParent<RecognizerEnemy>() != null) return;

        if (other.CompareTag("Player"))
        {
            if (GameManager.Instance != null)
                GameManager.Instance.PlayerHit();
            Destroy(gameObject);
            return;
        }

        // Destroy on contact with room geometry (walls, floor)
        if (GridbugEnemy.IsValidSurface(other))
            Destroy(gameObject);
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.GetComponentInParent<RecognizerEnemy>() != null) return;
        if (GridbugEnemy.IsValidSurface(collision.collider))
            Destroy(gameObject);
    }
}
