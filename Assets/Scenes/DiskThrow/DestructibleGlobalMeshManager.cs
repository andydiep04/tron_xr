using UnityEngine;
using Meta.XR.MRUtilityKit;
using System.Collections;
using System.Collections.Generic;

public class DestructibleGlobalMeshManager : MonoBehaviour {
  public DestructibleGlobalMeshSpawner meshSpawner;
  private List<GameObject> segments = new List<GameObject>();
  private DestructibleMeshComponent currentComponent;

  /// <summary>Fired once when the destructible mesh is fully ready.</summary>
  public System.Action OnMeshReady;

  /// <summary>
  /// Fired when a wall/floor segment is destroyed.
  /// Arg: world position of the impact / breach centre.
  /// </summary>
  public System.Action<Vector3> OnSegmentDestroyed;

  /// <summary>
  /// Destroy a mesh segment, firing OnSegmentDestroyed at the given contactPoint
  /// (pass null to fall back to the collider bounds centre or transform position).
  /// </summary>
  public void DestroyMeshSegment(GameObject segment, Vector3? contactPoint = null) {
    if (segments.Contains(segment) &&
        currentComponent.ReservedSegment != segment) {
      // Prefer the actual contact point; fall back to bounds centre; then transform.position.
      Collider col = segment.GetComponent<Collider>();
      Vector3 pos = contactPoint
                    ?? (col != null ? col.bounds.center : (Vector3?)null)
                    ?? segment.transform.position;
      currentComponent.DestroySegment(segment);
      OnSegmentDestroyed?.Invoke(pos);
    }
  }

  void Start() {
    meshSpawner.OnDestructibleMeshCreated.AddListener(
        SetupDestructibleComponents);
  }

  public void SetupDestructibleComponents(DestructibleMeshComponent component) {
    currentComponent = component;
    component.GetDestructibleMeshSegments(segments);
    foreach (var item in segments) {
      // Only add if no collider already exists on this segment
      if (item.GetComponent<Collider>() == null) {
        var mc = item.AddComponent<MeshCollider>();
        // Explicitly wire up the mesh in case there's no MeshFilter on the root
        MeshFilter mf = item.GetComponent<MeshFilter>();
        if (mc.sharedMesh == null && mf != null)
          mc.sharedMesh = mf.sharedMesh;
      }
    }
    OnMeshReady?.Invoke();
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
