using UnityEngine;

public class TronGrenadeLauncher : MonoBehaviour
{
    public GameObject grenadePrefab;
    public Transform holdPoint;
    public float throwBoost = 2.5f; 
    
    [Header("Cooldown & Safety")]
    public float spawnCooldown = 0.75f;    // Min time between new grenades
    public float detonationSafety = 0.3f; // Min time in air before detonation allowed
    
    private GameObject activeGrenade;
    private AresGrenade activeScript;
    private bool isHolding = false;
    private float lastSpawnTime;
    private float throwTime;

    public OVRInput.Controller controller = OVRInput.Controller.RTouch;

    void Update()
    {
        // Get the analog squeeze value
        float gripSqueeze = OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, controller);
        // Get the digital click for spawning/detonating
        bool gripClicked = OVRInput.GetDown(OVRInput.Button.PrimaryHandTrigger, controller);

        // 1. SPAWN / DETONATE
        if (gripClicked)
        {
            if (!isHolding && activeGrenade == null)
            {
                if (Time.time > lastSpawnTime + spawnCooldown)
                {
                    Spawn();
                }
            }
            else if (activeGrenade != null && activeScript != null && activeScript.isThrown)
            {
                if (Time.time > throwTime + detonationSafety)
                {
                    activeScript.Explode();
                    activeGrenade = null; 
                }
            }
        }

        // 2. THE "ANTI-TELEPORT" LOCK
        // While holding, we force the position every frame to bypass physics bugs
        if (isHolding && activeGrenade != null)
        {
            activeGrenade.transform.position = holdPoint.position;
            activeGrenade.transform.rotation = holdPoint.rotation;
        }

        // 3. THROW (On Release)
        if (isHolding && gripSqueeze < 0.1f)
        {
            if (activeGrenade != null)
            {
                Throw();
            }
        }
    }

    void Spawn() {
        lastSpawnTime = Time.time;
        
        // Instantiate at the hand's current position immediately
        activeGrenade = Instantiate(grenadePrefab, holdPoint.position, holdPoint.rotation);
        
        // Standard parenting
        activeGrenade.transform.SetParent(holdPoint, false);
        activeGrenade.transform.localPosition = Vector3.zero;
        activeGrenade.transform.localRotation = Quaternion.identity;

        activeScript = activeGrenade.GetComponent<AresGrenade>();
        activeScript.isThrown = false;
        
        // Physics lockdown
        Rigidbody rb = activeGrenade.GetComponent<Rigidbody>();
        rb.isKinematic = true; 
        rb.useGravity = false;
        
        // Collider safety: Disable so it doesn't "hit" the hand on the first frame
        if (activeGrenade.TryGetComponent<Collider>(out var col)) col.enabled = false;

        isHolding = true;
    }

    void Throw()
    {
        isHolding = false;
        throwTime = Time.time;
        activeGrenade.transform.SetParent(null);
        
        Rigidbody rb = activeGrenade.GetComponent<Rigidbody>();
        rb.isKinematic = false;
        rb.useGravity = true;

        // Re-enable physics contact
        if (activeGrenade.TryGetComponent<Collider>(out var col)) col.enabled = true;

        Vector3 handVel = OVRInput.GetLocalControllerVelocity(controller);
        rb.linearVelocity = handVel * throwBoost;
        
        activeScript.isThrown = true;
    }
}