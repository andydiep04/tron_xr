using UnityEngine;

public class AresGrenade : MonoBehaviour
{
    [Header("Explosion Settings")]
    public float explosionRadius = 1f; // Keep this small for testing
    public GameObject explosionVFX;
    
    [HideInInspector] public bool isThrown = false;

    private void OnCollisionEnter(Collision collision)
    {
        if (!isThrown) return;

        // If we hit a Bit directly, trigger it specifically
        TriggerSwap(collision.gameObject);

        // Then trigger the area blast
        Explode();
    }

    public void Explode()
    {
        // // 1. NORMALIZE THE SCALE FOR DEBUGGING
        // GameObject debugSphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        // debugSphere.transform.position = transform.position;
        
        // // We set the scale to a fixed world size, ignoring parent scaling
        // float visualSize = explosionRadius * 2f;
        // debugSphere.transform.localScale = new Vector3(visualSize, visualSize, visualSize);
        
        // // If the grenade is a child of a Scale 7 hand, we need to un-parent it 
        // // immediately so it doesn't inherit that scale
        // debugSphere.transform.SetParent(null);

        // Renderer debugRent = debugSphere.GetComponent<Renderer>();
        // debugRent.material.color = new Color(1, 0, 0, 0.4f);
        // Destroy(debugSphere.GetComponent<Collider>()); 
        // Destroy(debugSphere, 1.5f);

        if (explosionVFX != null)
        {
            // Un-parent VFX too so it doesn't look stretched by the Scale 7 hand
            GameObject fx = Instantiate(explosionVFX, transform.position, transform.rotation);
            fx.transform.SetParent(null);
            fx.transform.localScale = Vector3.one; 
        }

        // 2. THE PHYSICS FIX
        // Use a very small radius, but we check the specific distance manually
        Collider[] hits = Physics.OverlapSphere(transform.position, explosionRadius);
        foreach (var hit in hits)
        {
            // Only swap if it has the script AND is physically within the world-space radius
            TargetModelSwap swapper = hit.GetComponent<TargetModelSwap>();
            if (swapper != null)
            {
                float actualDist = Vector3.Distance(transform.position, hit.transform.position);
                if (actualDist <= explosionRadius)
                {
                    swapper.ForceModelSwap();
                }
            }
        }
        
        Destroy(gameObject);
    }

    private void TriggerSwap(GameObject target)
    {
        // We look for the script directly on the instance we touched
        TargetModelSwap swapper = target.GetComponent<TargetModelSwap>();
        
        if (swapper != null)
        {
            // We call the function on THIS specific instance only
            swapper.ForceModelSwap();
        }
    }
}