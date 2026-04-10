using UnityEngine;

public class DiskWallPortal : MonoBehaviour {

  public DestructibleGlobalMeshManager manager;

  void OnCollisionEnter(Collision collision) {
    manager.DestroyMeshSegment(collision.gameObject);
  }
}
