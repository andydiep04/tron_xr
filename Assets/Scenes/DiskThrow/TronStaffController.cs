// using UnityEngine;
// using UnityEngine.InputSystem; // Ensure you have the Input System package

// public class TronStaffController : MonoBehaviour
// {
//     public GameObject staffModel; // Drag your LightStaff object here
//     public InputActionProperty gripButton; // The "Side Trigger" action
    
//     // Optional: Reference to your Disc script to disable disc firing while staff is out
//     // public DiscThrower discThrower; 

//     void Update()
//     {
//         // Check if the side trigger is being held down
//         float gripValue = gripButton.action.ReadValue<float>();

//         if (gripValue > 0.1f) 
//         {
//             if (!staffModel.activeSelf)
//             {
//                 ActivateStaff(true);
//             }
//         }
//         else
//         {
//             if (staffModel.activeSelf)
//             {
//                 ActivateStaff(false);
//             }
//         }
//     }

//     void ActivateStaff(bool state)
//     {
//         staffModel.SetActive(state);
        
//         // Add a "Sfx" or "Haptic pulse" here for extra polish
//         if(state) {
//             Debug.Log("Staff Rezzing In...");
//         }
//     }

//     // This handles hitting the Tron Bits
//     private void OnTriggerEnter(Collider other)
//     {
//         if (other.CompareTag("TronBit"))
//         {
//             // Assuming your Bits have a script to handle destruction
//             IDamageable bit = other.GetComponent<IDamageable>();
//             if (bit != null)
//             {
//                 bit.TakeDamage(50); 
//                 Debug.Log("Bit De-Rezzed by Staff!");
//             }
//         }
//     }
// }

// using UnityEngine;

// public class TronStaffController : MonoBehaviour
// {
//     public GameObject staffModel; 
    
//     void Update()
//     {
//         // This detects the "Grip" (Side Trigger) on Oculus/Meta hardware
//         // If you are using SteamVR or generic OpenXR, let me know!
//         if (OVRInput.Get(OVRInput.Button.PrimaryHandTrigger))
//         {
//             if (staffModel != null && !staffModel.activeSelf)
//             {
//                 staffModel.SetActive(true);
//                 Debug.Log("Staff Active");
//             }
//         }
//         else
//         {
//             if (staffModel != null && staffModel.activeSelf)
//             {
//                 staffModel.SetActive(false);
//                 Debug.Log("Staff Inactive");
//             }
//         }
//     }

//     private void OnTriggerEnter(Collider other)
//     {
//         // Make sure your Tron Bits have the Tag "TronBit" assigned in the Inspector!
//         if (other.CompareTag("TronBit"))
//         {
//             Destroy(other.gameObject); 
//             Debug.Log("Bit De-Rezzed!");
//         }
//     }
// }

// using System.Collections;
// using UnityEngine;

// public class TronStaffController : MonoBehaviour
// {
//     [Header("Settings")]
//     public GameObject staffModel;      // Drag your LightStaff child here
//     public float growSpeed = 5f;       // How fast it rezzes in
//     public Vector3 fullScale = new Vector3(1f, 1f, 1f); // Target scale

//     private Coroutine rezCoroutine;
//     private bool isStaffActive = false;

//     void Start()
//     {
//         // Ensure staff starts at scale 0 and is invisible
//         if (staffModel != null)
//         {
//             staffModel.transform.localScale = Vector3.zero;
//             staffModel.SetActive(false);
//         }
//     }

//     void Update()
//     {
//         // Check if the Side Trigger (Grip) is held
//         // Note: OVRInput.Button.PrimaryHandTrigger works for the hand this script is on
//         bool gripPressed = OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, OVRInput.Controller.RTouch) || 
//                            OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, OVRInput.Controller.LTouch);

//         // If you attached this to specific anchors, it's better to be explicit:
//         // For Right Hand: OVRInput.Get(OVRInput.Button.PrimaryHandTrigger, OVRInput.Controller.RTouch)
        
//         if (gripPressed && !isStaffActive)
//         {
//             StartRez(true);
//         }
//         else if (!gripPressed && isStaffActive)
//         {
//             StartRez(false);
//         }
//     }

//     void StartRez(bool appearing)
//     {
//         isStaffActive = appearing;

//         // Stop any current animation before starting a new one
//         if (rezCoroutine != null) StopCoroutine(rezCoroutine);
        
//         rezCoroutine = StartCoroutine(RezRoutine(appearing));
//     }

//     IEnumerator RezRoutine(bool appearing)
//     {
//         Vector3 targetScale = appearing ? fullScale : Vector3.zero;
        
//         if (appearing) staffModel.SetActive(true);

//         while (Vector3.Distance(staffModel.transform.localScale, targetScale) > 0.01f)
//         {
//             staffModel.transform.localScale = Vector3.Lerp(
//                 staffModel.transform.localScale, 
//                 targetScale, 
//                 Time.deltaTime * growSpeed
//             );
//             yield return null;
//         }

//         staffModel.transform.localScale = targetScale;

//         if (!appearing) staffModel.SetActive(false);
//     }

//     private void OnTriggerEnter(Collider other)
//     {
//         // Ensure your Tron Bits have the Tag "TronBit" and a Rigidbody
//         if (other.CompareTag("TronBit"))
//         {
//             // You can replace this with your specific Bit logic
//             Destroy(other.gameObject); 
//             Debug.Log("Bit De-Rezzed by Staff!");
//         }
//     }
// }

using System.Collections;
using UnityEngine;

public class TronStaffController : MonoBehaviour
{
    public GameObject staffModel;
    public float growSpeed = 10f;
    public Vector3 fullScale = new Vector3(1f, 1f, 1f);

    [Header("Hand Setup")]
    // Set this to R Touch on the Right Anchor, L Touch on the Left Anchor
    public OVRInput.Controller controllerHand; 

    private Coroutine rezCoroutine;
    private bool isStaffActive = false;

    void Start()
    {
        if (staffModel != null)
        {
            staffModel.transform.localScale = Vector3.zero;
            staffModel.SetActive(false);
        }
    }

    void Update()
    {
        // Get the squeeze value of the side trigger (0.0 to 1.0)
        float gripSqueeze = OVRInput.Get(OVRInput.Axis1D.PrimaryHandTrigger, controllerHand);

        // If squeezed more than 10%, activate
        if (gripSqueeze > 0.1f && !isStaffActive)
        {
            StartRez(true);
        }
        else if (gripSqueeze <= 0.1f && isStaffActive)
        {
            StartRez(false);
        }
    }

    void StartRez(bool appearing)
    {
        isStaffActive = appearing;
        if (rezCoroutine != null) StopCoroutine(rezCoroutine);
        rezCoroutine = StartCoroutine(RezRoutine(appearing));
    }

    IEnumerator RezRoutine(bool appearing)
    {
        Vector3 targetScale = appearing ? fullScale : Vector3.zero;
        
        // Disable collider while scaling to prevent the "Blue Glitch"
        if (staffModel.TryGetComponent<CapsuleCollider>(out var col)) col.enabled = false;

        if (appearing) staffModel.SetActive(true);

        while (Vector3.Distance(staffModel.transform.localScale, targetScale) > 0.01f)
        {
            staffModel.transform.localScale = Vector3.Lerp(
                staffModel.transform.localScale, 
                targetScale, 
                Time.deltaTime * growSpeed
            );
            yield return null;
        }

        staffModel.transform.localScale = targetScale;

        // Enable collider ONLY when fully rezzed
        if (appearing && col != null) col.enabled = true;
        
        if (!appearing) staffModel.SetActive(false);
    }
}