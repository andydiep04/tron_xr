using UnityEngine;

// Changes the target's color when hit by the disk, then reverts after a delay.
// NOW ALSO: Reports hits to GameManager for score tracking.
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
    }

    void OnCollisionEnter(Collision other)
    {
        if (other == null) return;
        if (OtherIsDisk(other.gameObject))
        {
            StopAllCoroutines();
            StartCoroutine(FlashColor());
            ReportHit();  // <-- NEW: report score
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other == null) return;
        if (OtherIsDisk(other.gameObject))
        {
            StopAllCoroutines();
            StartCoroutine(FlashColor());
            ReportHit();  // <-- NEW: report score
        }
    }

    private bool OtherIsDisk(GameObject go)
    {
        if (go == null) return false;
        if (go.GetComponent<DiskPhysics>() != null) return true;
        if (go.CompareTag("Disk")) return true;
        return false;
    }

    /// <summary>
    /// Sends score event to GameManager when a target is hit.
    /// </summary>
    private void ReportHit()
    {
        if (GameManager.Instance != null)
        {
            GameManager.Instance.AddScore(1);
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
