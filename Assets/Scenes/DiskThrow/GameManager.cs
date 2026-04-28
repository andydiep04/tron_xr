using UnityEngine;
using UnityEngine.InputSystem;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }

    [Header("Score")]
    public int score = 0;

    [Header("Pause State")]
    public bool isPaused = false;

    [Header("Input - Left Controller Menu Button (Pause Toggle)")]
    public InputActionProperty menuAction;

    [Header("Input - Left Controller Y Button (Reset Game)")]
    public InputActionProperty resetAction;

    [Header("References")]
    public targetSpawn targetSpawner;
    public DestructibleGlobalMeshManager destructibleMeshManager;

    public System.Action<int> OnScoreChanged;
    public System.Action<bool> OnPauseToggled;

    void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);
    }

    void Start()
    {
        isPaused = false;
        Time.timeScale = 1f;

        if (menuAction.action != null)
            menuAction.action.Enable();

        if (resetAction.action != null)
            resetAction.action.Enable();
    }

    void Update()
    {
        if (menuAction.action != null && menuAction.action.WasPressedThisFrame())
        {
            TogglePause();
        }

        if (isPaused && resetAction.action != null && resetAction.action.WasPressedThisFrame())
        {
            ResetGame();
        }
    }

    public void AddScore(int points = 1)
    {
        score += points;
        OnScoreChanged?.Invoke(score);
    }

    public void TogglePause()
    {
        isPaused = !isPaused;
        Time.timeScale = isPaused ? 0f : 1f;
        OnPauseToggled?.Invoke(isPaused);
    }

    public void ResetGame()
    {
        // Unpause
        isPaused = false;
        Time.timeScale = 1f;
        OnPauseToggled?.Invoke(false);

        // Reset score
        score = 0;
        OnScoreChanged?.Invoke(score);

        // Respawn targets as red and spiky
        if (targetSpawner != null)
            targetSpawner.ResetTargets();

        // Regenerate walls and floor
        if (destructibleMeshManager != null)
            destructibleMeshManager.ResetMesh();
    }
}
