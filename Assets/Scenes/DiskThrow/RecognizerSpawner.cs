using UnityEngine;

public class RecognizerSpawner : MonoBehaviour
{
    [Header("Prefab")]
    public GameObject recognizerPrefab;

    [Header("References")]
    public DestructibleGlobalMeshManager wallManager;

    [Header("Spawn Settings")]
    public int maxCount = 3;
    [Range(0f, 1f)]
    [Tooltip("Probability a recognizer spawns when a lower-wall segment breaks.")]
    public float spawnChance = 0.05f;
    [Tooltip("How far behind the wall (into the void) the recognizer appears.")]
    public float spawnDepth = 4f;

    private int _liveCount = 0;

    void Start()
    {
        if (wallManager == null)
            wallManager = FindFirstObjectByType<DestructibleGlobalMeshManager>();

        if (wallManager != null)
            wallManager.OnSegmentDestroyed += OnWallBroken;
        else
            Debug.LogWarning("[RecognizerSpawner] No DestructibleGlobalMeshManager found.");
    }

    void OnDestroy()
    {
        if (wallManager != null)
            wallManager.OnSegmentDestroyed -= OnWallBroken;
    }

    void OnWallBroken(Vector3 breachPos)
    {
        if (_liveCount >= maxCount) return;
        if (Random.value > spawnChance) return;

        Transform head = Camera.main != null ? Camera.main.transform : null;
        if (head == null) return;

        // Floor/ceiling check — near-zero XZ delta means horizontal surface
        Vector3 outward = breachPos - head.position;
        outward.y = 0f;
        if (outward.sqrMagnitude < 0.5f) return;

        // Upper-wall check — only spawn from lower half
        if (breachPos.y > head.position.y - 0.5f) return;

        outward = outward.normalized;

        // Place recognizer deep in the void behind the wall, at waist height so it looms
        Vector3 spawnPos = breachPos + outward * spawnDepth;
        spawnPos.y = head.position.y - 0.5f;

        Spawn(spawnPos, -outward);
    }

    void Spawn(Vector3 pos, Vector3 faceDir)
    {
        if (recognizerPrefab == null) return;

        Quaternion rot = faceDir.sqrMagnitude > 0.001f
            ? Quaternion.LookRotation(faceDir.normalized, Vector3.up)
            : Quaternion.identity;

        GameObject go = Instantiate(recognizerPrefab, pos, rot);
        RecognizerEnemy rec = go.GetComponent<RecognizerEnemy>();
        if (rec == null) { Destroy(go); return; }

        _liveCount++;
        rec.OnDead += () => _liveCount = Mathf.Max(0, _liveCount - 1);
    }
}
