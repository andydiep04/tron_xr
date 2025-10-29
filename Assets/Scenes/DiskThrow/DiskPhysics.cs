using UnityEngine;

public class DiskPhysics : MonoBehaviour {

  private Rigidbody diskRb;

  void Start() {
    diskRb = GetComponent<Rigidbody>();
    diskRb.isKinematic = true;
  }

  void Update() {

    Vector3 velocity = Vector3.ProjectOnPlane(diskRb.linearVelocity, Vector3.up);
    float speed = velocity.magnitude;

    Vector3 liftDir = Vector3.Cross(velocity.normalized, transform.right).normalized;
    Vector3 lift = 0.1f * speed * speed * liftDir;

    float l = Mathf.Min(lift.magnitude, diskRb.mass * Physics.gravity.magnitude * 0.9f);

    lift = lift.normalized * l;

    diskRb.AddForce(lift);
  }
}
