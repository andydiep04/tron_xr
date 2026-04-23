using UnityEngine;

// Changes the target's color when hit by the disk, then reverts after a delay.
public class TargetHitColor : MonoBehaviour
{
    public Color hitColor = Color.red;
    public float duration = 1.0f;

    private Renderer rend;
    private Color originalColor;

    void Awake()
    {
        rend = GetComponentInChildren<Renderer>();
        if (rend != null)
        {
            // Accessing .material ensures this renderer gets its own material instance
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
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other == null) return;
        if (OtherIsDisk(other.gameObject))
        {
            StopAllCoroutines();
            StartCoroutine(FlashColor());
        }
    }

    private bool OtherIsDisk(GameObject go)
    {
        if (go == null) return false;
        // Prefer identifying the disk by component; fallback to tag 'Disk' if set
        if (go.GetComponent<DiskPhysics>() != null) return true;
        if (go.CompareTag("Disk")) return true;
        return false;
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
