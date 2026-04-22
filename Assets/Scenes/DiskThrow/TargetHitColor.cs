using UnityEngine;

public class TargetHitColor : MonoBehaviour
{
    public Color hitColor = Color.red;
    public float duration = 1.0f;

    private Renderer rend;
    private Color originalColor;
    private bool isFlashing = false;

    void Awake()
    {
        rend = GetComponentInChildren<Renderer>();
        if (rend != null)
        {
            originalColor = rend.material.color;
        }
        Debug.Log("[TargetHitColor] Initialized on: " + gameObject.name);
    }

    void OnCollisionEnter(Collision other)
    {
        if (other == null) return;
        Debug.Log("[TargetHitColor] COLLISION with: " + other.gameObject.name + " | Tag: " + other.gameObject.tag);
        if (OtherIsDisk(other.gameObject))
        {
            Debug.Log("[TargetHitColor] DISK HIT detected via collision!");
            StopAllCoroutines();
            StartCoroutine(FlashColor());
            ReportHit();
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other == null) return;
        Debug.Log("[TargetHitColor] TRIGGER with: " + other.gameObject.name + " | Tag: " + other.gameObject.tag);
        if (OtherIsDisk(other.gameObject))
        {
            Debug.Log("[TargetHitColor] DISK HIT detected via trigger!");
            StopAllCoroutines();
            StartCoroutine(FlashColor());
            ReportHit();
        }
    }

    private bool OtherIsDisk(GameObject go)
    {
        if (go == null) return false;
        // Check by component first (most reliable)
        if (go.GetComponent<DiskPhysics>() != null) return true;
        // Check parent too in case collider is on child
        if (go.GetComponentInParent<DiskPhysics>() != null) return true;
        // Fallback: check both tag spellings
        if (go.CompareTag("Disk") || go.CompareTag("Disc")) return true;
        return false;
    }

    private void ReportHit()
    {
        if (GameManager.Instance != null)
        {
            GameManager.Instance.AddScore(1);
        }
        else
        {
            Debug.LogError("[TargetHitColor] GameManager.Instance is NULL! Score not counted.");
        }
    }

    private System.Collections.IEnumerator FlashColor()
    {
        isFlashing = true;
        if (rend != null)
        {
            rend.material.color = hitColor;
        }
        yield return new WaitForSeconds(duration);
        if (rend != null)
        {
            rend.material.color = originalColor;
        }
        isFlashing = false;
    }
}
