using UnityEngine;

public class TronGrenadeLauncher : MonoBehaviour
{
    public GameObject grenadePrefab;
    public Transform holdPoint;
    public float throwBoost = 2.5f; 
    
    private GameObject activeGrenade;
    private AresGrenade activeScript;
    private bool isHolding = false;

    void Update()
    {
        // SPAWN / DETONATE: Press A
        if (OVRInput.GetDown(OVRInput.Button.One, OVRInput.Controller.RTouch))
        {
            if (!isHolding && activeGrenade == null)
            {
                Spawn();
            }
            else if (activeGrenade != null && activeScript != null && activeScript.isThrown)
            {
                activeScript.Explode();
                // We clear the reference here so the next press spawns a new one
                activeGrenade = null; 
            }
        }

        // THROW: Release A
        if (OVRInput.GetUp(OVRInput.Button.One, OVRInput.Controller.RTouch))
        {
            if (isHolding) Throw();
        }
    }

    void Spawn()
    {
        activeGrenade = Instantiate(grenadePrefab, holdPoint.position, holdPoint.rotation);
        
        // Parent to the holdPoint so it follows hand movement perfectly
        activeGrenade.transform.SetParent(holdPoint);
        
        activeScript = activeGrenade.GetComponent<AresGrenade>();
        activeGrenade.GetComponent<Rigidbody>().isKinematic = true; 
        isHolding = true;
    }

    void Throw()
    {
        isHolding = false;
        activeGrenade.transform.SetParent(null);
        
        Rigidbody rb = activeGrenade.GetComponent<Rigidbody>();
        rb.isKinematic = false;
        rb.useGravity = true;

        // Apply physical arm velocity
        Vector3 handVel = OVRInput.GetLocalControllerVelocity(OVRInput.Controller.RTouch);
        rb.linearVelocity = handVel * throwBoost;
        
        activeScript.isThrown = true;
    }
}