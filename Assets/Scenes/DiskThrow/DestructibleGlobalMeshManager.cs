using UnityEngine;
using Meta.XR.MRUtilityKit;
using System.Collections;
using System.Collections.Generic;

public class DestructibleGlobalMeshManager : MonoBehaviour {
    public DestructibleGlobalMeshSpawner meshSpawner;
    private List<GameObject> segments = new List<GameObject>();
    private DestructibleMeshComponent currentComponent;

    void Start() {
        meshSpawner.OnDestructibleMeshCreated.AddListener(SetupDestructibleComponents);
    }

    public void SetupDestructibleComponents(DestructibleMeshComponent component) {
        currentComponent = component;
        component.GetDestructibleMeshSegments(segments);
        foreach (var item in segments) {
            item.AddComponent<MeshCollider>();
        }
    }

    public void DestroyMeshSegment(GameObject segment) {
        if (segments.Contains(segment) && currentComponent.ReservedSegment != segment) {
            Debug.Log("Destroyed Segment");
            currentComponent.DestroySegment(segment);
        }
    }

    /// <summary>
    /// Regenerates the destructible mesh (walls and floor) by toggling the spawner
    /// with a frame delay so Unity properly processes the deactivation/reactivation.
    /// </summary>
    public void ResetMesh() {
        StartCoroutine(ResetMeshCoroutine());
    }

    private IEnumerator ResetMeshCoroutine() {
        // Clear old tracking data
        segments.Clear();
        currentComponent = null;

        if (meshSpawner != null) {
            // Destroy all generated mesh objects under the spawner
            for (int i = meshSpawner.transform.childCount - 1; i >= 0; i--) {
                Destroy(meshSpawner.transform.GetChild(i).gameObject);
            }

            // Also destroy any generated mesh under this manager object
            for (int i = transform.childCount - 1; i >= 0; i--) {
                Destroy(transform.GetChild(i).gameObject);
            }

            // Wait a frame for destruction to process
            yield return null;

            // Toggle spawner off then on to re-trigger mesh creation
            meshSpawner.gameObject.SetActive(false);

            // Wait a frame for deactivation to process
            yield return null;

            // Re-enable - this should trigger the spawner to recreate the mesh
            meshSpawner.gameObject.SetActive(true);
        }
    }
}
