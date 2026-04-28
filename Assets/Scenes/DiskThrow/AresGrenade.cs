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
        
        DrawVFXSphere(transform.position);

        // 2. WALL DESTRUCTION LOGIC
        // Find the manager in the scene
        DestructibleGlobalMeshManager wallManager = FindFirstObjectByType<DestructibleGlobalMeshManager>();

        if (wallManager != null) {
            // Find all colliders in the explosion radius
            Collider[] wallHits = Physics.OverlapSphere(transform.position, explosionRadius);
            foreach (var hit in wallHits) {
                // Check if the thing we hit is a segment of the destructible mesh
                // (The manager setup adds MeshColliders to these segments)
                wallManager.DestroyMeshSegment(hit.gameObject, hit.bounds.center);

                // Kill any gridbugs caught in the blast
                GridbugEnemy bug = hit.GetComponent<GridbugEnemy>();
                if (bug != null) bug.Die();

                // Damage recognizers caught in the blast
                RecognizerEnemy rec = hit.GetComponent<RecognizerEnemy>();
                if (rec != null) rec.TakeDamage(1);
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

    public void DrawVFXSphere(Vector3 center) {
        GameObject visuals = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        
        // CRITICAL: Destroy the collider IMMEDIATELY to stop the infinite loop
        if (visuals.TryGetComponent<Collider>(out var col)) {
            Destroy(col); 
        }

        visuals.transform.position = center;
        visuals.transform.localScale = Vector3.one * (explosionRadius * 2);
        
        Renderer rend = visuals.GetComponent<Renderer>();
        // Note: "Lines/Colored Blended" is an internal Unity shader. 
        // If it's still invisible, use Shader.Find("Sprites/Default")
        rend.material = new Material(Shader.Find("Sprites/Default"));
        rend.material.color = new Color(1, 0, 0, 0.2f);
        
        Destroy(visuals, 1.0f); 
    }
}