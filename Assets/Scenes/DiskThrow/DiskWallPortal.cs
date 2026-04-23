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
      manager.DestroyMeshSegment(collision.gameObject);
    }
  }

  void OnTriggerEnter(Collider other) {
    if (manager != null) {
      manager.DestroyMeshSegment(other.gameObject);
    }
  }
}
