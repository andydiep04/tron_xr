using UnityEngine;
using UnityEngine.InputSystem;

public class HandAnimationController : MonoBehaviour
{
    public Animator animator;

    public InputActionProperty gripAction; 
    public InputActionProperty triggerAction; 

    void Update()
    {
        float grip = gripAction.action.ReadValue<float>();
        float trigger = triggerAction.action.ReadValue<float>();

        animator.SetFloat("Grip", grip);
        animator.SetFloat("Trigger", trigger);
    }
}
