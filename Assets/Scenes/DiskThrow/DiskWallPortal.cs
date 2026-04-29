using UnityEngine;

public class DiskWallPortal : MonoBehaviour {

  public DestructibleGlobalMeshManager manager;

  void Start() {
    if (manager == null) {
      manager = Object.FindFirstObjectByType<DestructibleGlobalMeshManager>();
    }
  }

  void OnCollisionEnter(Collision collision) {
    if (manager != null) {
      // Pass the actual impact point so the gridbug spawner uses the right position
      Vector3 contactPoint = collision.contacts.Length > 0
          ? collision.contacts[0].point
          : collision.gameObject.transform.position;
      manager.DestroyMeshSegment(collision.gameObject, contactPoint);
    }
  }

  void OnTriggerEnter(Collider other) {
    if (manager != null) {
      manager.DestroyMeshSegment(other.gameObject);
    }
  }
}
