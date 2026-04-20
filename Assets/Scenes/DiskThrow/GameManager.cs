using UnityEngine;
using UnityEngine.InputSystem;

/// <summary>
/// Central game manager handling score, pause, and reset.
/// Attach to an empty GameObject in the scene called "GameManager".
/// </summary>
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

    // Events that the UI listens to
    public System.Action<int> OnScoreChanged;
    public System.Action<bool> OnPauseToggled;

    void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(gameObject);
    }

    void Update()
    {
        // Toggle pause when menu button is pressed
        if (menuAction.action != null && menuAction.action.WasPressedThisFrame())
        {
            TogglePause();
        }
    }

    /// <summary>
    /// Called by TargetHitColor when a disk hits a target.
    /// </summary>
    public void AddScore(int points = 1)
    {
        score += points;
        OnScoreChanged?.Invoke(score);
    }

    /// <summary>
    /// Toggles pause on/off. Freezes all physics and movement via timeScale.
    /// </summary>
    public void TogglePause()
    {
        isPaused = !isPaused;
        Time.timeScale = isPaused ? 0f : 1f;
        OnPauseToggled?.Invoke(isPaused);
    }

    /// <summary>
    /// Resets the entire game session: score, disks, and targets.
    /// Called by the Reset button in the pause menu.
    /// </summary>
    public void ResetGame()
    {
        // Unpause first if paused
        if (isPaused)
        {
            isPaused = false;
            Time.timeScale = 1f;
            OnPauseToggled?.Invoke(false);
        }

        // Reset score
        score = 0;
        OnScoreChanged?.Invoke(score);

        // Destroy all flying disks in the scene
        DiskPhysics[] disks = FindObjectsByType<DiskPhysics>(FindObjectsSortMode.None);
        foreach (var disk in disks)
        {
            Destroy(disk.gameObject);
        }

        // Respawn all targets
        if (targetSpawner != null)
        {
            targetSpawner.ResetTargets();
        }
    }
}
