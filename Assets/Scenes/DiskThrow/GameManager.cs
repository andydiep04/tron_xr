using UnityEngine;
using UnityEngine.InputSystem;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }

    [Header("Score")]
    public int score = 0;

    [Header("Pause State")]
    public bool isPaused = false;

    [Header("Input - Assign Left Controller Menu Button")]
    public InputActionProperty menuAction;

    [Header("References - Drag targetSpawn object here")]
    public targetSpawn targetSpawner;

    public System.Action<int> OnScoreChanged;
    public System.Action<bool> OnPauseToggled;

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            Debug.Log("[GameManager] Instance created.");
        }
        else
        {
            Destroy(gameObject);
        }
    }

    void Start()
    {
        // Force start unpaused regardless of Inspector checkbox
        isPaused = false;
        Time.timeScale = 1f;

        // Enable the input action so it actually receives input
        if (menuAction.action != null)
        {
            menuAction.action.Enable();
            Debug.Log("[GameManager] Menu action enabled.");
        }
        else
        {
            Debug.LogError("[GameManager] ERROR: Menu action is NULL! Pause won't work.");
        }

        if (targetSpawner == null)
        {
            Debug.LogError("[GameManager] ERROR: Target Spawner not assigned!");
        }
    }

    void Update()
    {
        if (menuAction.action != null && menuAction.action.WasPressedThisFrame())
        {
            Debug.Log("[GameManager] MENU BUTTON PRESSED - toggling pause");
            TogglePause();
        }
    }

    public void AddScore(int points = 1)
    {
        score += points;
        Debug.Log("[GameManager] HIT! Score is now: " + score);
        OnScoreChanged?.Invoke(score);
    }

    public void TogglePause()
    {
        isPaused = !isPaused;
        Time.timeScale = isPaused ? 0f : 1f;
        Debug.Log("[GameManager] Paused = " + isPaused);
        OnPauseToggled?.Invoke(isPaused);
    }

    public void ResetGame()
    {
        Debug.Log("[GameManager] RESET");
        if (isPaused)
        {
            isPaused = false;
            Time.timeScale = 1f;
            OnPauseToggled?.Invoke(false);
        }

        score = 0;
        OnScoreChanged?.Invoke(score);

        DiskPhysics[] disks = FindObjectsByType<DiskPhysics>(FindObjectsSortMode.None);
        foreach (var disk in disks)
        {
            Destroy(disk.gameObject);
        }

        if (targetSpawner != null)
        {
            targetSpawner.ResetTargets();
        }
    }
}
