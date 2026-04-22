using UnityEngine;

public class TargetHitColor : MonoBehaviour
{
    public Color hitColor = Color.red;
    public float duration = 1.0f;

    private Renderer rend;
    private Color originalColor;
    private bool hasBeenScored = false;

    void Awake()
    {
        rend = GetComponentInChildren<Renderer>();
        if (rend != null)
        {
            originalColor = rend.material.color;
        }
    }

    void OnCollisionEnter(Collision other)
    {
        if (other == null) return;
        if (Time.timeSinceLevelLoad < 1f) return;
        if (OtherIsDisk(other.gameObject))
        {
            Debug.Log("[TargetHitColor] DISK HIT via collision on: " + gameObject.name);
            HandleHit();
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other == null) return;
        if (Time.timeSinceLevelLoad < 1f) return;
        if (OtherIsDisk(other.gameObject))
        {
            Debug.Log("[TargetHitColor] DISK HIT via trigger on: " + gameObject.name);
            HandleHit();
        }
    }

    private void HandleHit()
    {
        StopAllCoroutines();
        StartCoroutine(FlashColor());

        if (!hasBeenScored)
        {
            hasBeenScored = true;
            ReportHit();
        }
        else
        {
            Debug.Log("[TargetHitColor] Already scored this target, no extra point.");
        }
    }

    private bool OtherIsDisk(GameObject go)
    {
        if (go == null) return false;
        if (go.GetComponent<DiskPhysics>() != null) return true;
        if (go.GetComponentInParent<DiskPhysics>() != null) return true;
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
            Debug.LogError("[TargetHitColor] GameManager.Instance is NULL!");
        }
    }

    private System.Collections.IEnumerator FlashColor()
    {
        if (rend != null)
        {
            rend.material.color = hitColor;
        }
        yield return new WaitForSeconds(duration);
        if (rend != null)
        {
            rend.material.color = originalColor;
        }
    }
}
