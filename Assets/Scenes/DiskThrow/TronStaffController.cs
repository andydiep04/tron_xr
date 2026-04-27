using System.Collections;
using UnityEngine;

public class TronStaffController : MonoBehaviour
{
    public GameObject staffModel;
    public float growSpeed = 10f;
    public Vector3 fullScale = new Vector3(1f, 1f, 1f);

    [Header("Hand Setup")]
    public OVRInput.Controller controllerHand = OVRInput.Controller.RTouch; 

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
        if (GameManager.Instance != null && GameManager.Instance.isPaused) {
            return; 
        }

        // 1. Detect A (Right) or X (Left) button state
        bool buttonPressed = OVRInput.Get(OVRInput.Button.One, controllerHand);

        // 2. Activate if pressed, deactivate if released
        if (buttonPressed && !isStaffActive)
        {
            StartRez(true);
        }
        else if (!buttonPressed && isStaffActive)
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
        if (appearing && col != null) col.enabled = true;
        if (!appearing) staffModel.SetActive(false);
    }
}