using UnityEngine;
using Meta.XR.MRUtilityKit;
using System.Collections;
using System.Collections.Generic;

public class DestructibleGlobalMeshManager : MonoBehaviour {
  public DestructibleGlobalMeshSpawner meshSpawner;
  private List<GameObject> segments = new List<GameObject>();
  private DestructibleMeshComponent currentComponent;

  void Start() {
    meshSpawner.OnDestructibleMeshCreated.AddListener(
        SetupDestructibleComponents);
  }

  public void SetupDestructibleComponents(DestructibleMeshComponent component) {
    currentComponent = component;
    component.GetDestructibleMeshSegments(segments);
    foreach (var item in segments) {
      item.AddComponent<MeshCollider>();
    }
  }

  public void DestroyMeshSegment(GameObject segment) {
    if (segments.Contains(segment) &&
        currentComponent.ReservedSegment != segment) {
      currentComponent.DestroySegment(segment);
    }
  }

  /// <summary>
  /// Regenerates the destructible mesh (walls and floor) by toggling the
  /// spawner with a frame delay so Unity properly processes the
  /// deactivation/reactivation.
  /// </summary>
  public void ResetMesh() {

    if (meshSpawner == null || MRUK.Instance == null)
      return;

    MRUKRoom currentRoom = MRUK.Instance.GetCurrentRoom();
    if (currentRoom == null) {
      return;
    }

    // 2. Clear local tracking data
    segments.Clear();
    currentComponent = null;

    // 3. Use the Spawner's built-in cleanup
    // This handles destroying the GO and removing it from the internal
    // Dictionary
    meshSpawner.RemoveDestructibleGlobalMesh(currentRoom);

    // 4. Re-add the mesh for this specific room
    // This triggers the internal CreateDestructibleGlobalMesh logic immediately
    meshSpawner.AddDestructibleGlobalMesh(currentRoom);
  }
}
