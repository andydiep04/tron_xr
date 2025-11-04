using UnityEngine;

public class DiskPhysics : MonoBehaviour {

  private Rigidbody diskRb;

  void Start() { diskRb = GetComponent<Rigidbody>(); }

  void FixedUpdate() {

    // Get velocity of disk projected on the plane (not vertical velocity)
    Vector3 velocity =
        Vector3.ProjectOnPlane(diskRb.linearVelocity, Vector3.up);

    // Scale lift based on the angle of the frisbee (more when its straight up)
    float angle = Vector3.Angle(transform.forward, velocity);
    float liftScale = Mathf.Clamp01(Mathf.Cos(angle * Mathf.Deg2Rad));

    float liftMag = 0.9f * velocity.sqrMagnitude * liftScale;
    Vector3 liftDir =
        Vector3.Cross(velocity.normalized, transform.right).normalized;

    // Clamp the the magnitude so its not greater than 1.1*gravity
    liftMag =
        Mathf.Min(liftMag, diskRb.mass * Physics.gravity.magnitude * 1.1f);

    diskRb.AddForce(liftMag * liftDir);
  }
}
