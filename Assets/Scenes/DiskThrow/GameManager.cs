using UnityEngine;
using UnityEngine.InputSystem;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }

    [Header("Score")]
    public int score = 0;

    [Header("Lives")]
    public int lives = 3;

    [Header("Pause State")]
    public bool isPaused = false;

    [Header("Input - Left Controller Menu Button (Pause Toggle)")]
    public InputActionProperty menuAction;

    [Header("Input - Left Controller Y Button (Reset Game)")]
    public InputActionProperty resetAction;

    [Header("References")]
    public targetSpawn targetSpawner;
    public DestructibleGlobalMeshManager destructibleMeshManager;

    [Header("Sound Effects")]
    public AudioClip pauseToggleSound;
    private AudioSource audioSource;
    public AudioClip resetSound;

    public System.Action<int> OnScoreChanged;
    public System.Action<bool> OnPauseToggled;
    public System.Action<int> OnPlayerHit;  // arg: remaining lives
    public System.Action OnGameOver;
    public System.Action OnGameWin;

    public bool isGameOver = false;
    public bool isGameWon = false;

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

        audioSource = GetComponent<AudioSource>();

        if (audioSource == null)
             audioSource = gameObject.AddComponent<AudioSource>();

             audioSource.playOnAwake = false;

        if (targetSpawner != null)
            targetSpawner.OnAllHit += TriggerWin;
    }

    void Update()
    {
        if ((isGameOver || isGameWon || isPaused) && resetAction.action != null && resetAction.action.WasPressedThisFrame())
            ResetGame();

        if (isGameOver || isGameWon) return;

        if (menuAction.action != null && menuAction.action.WasPressedThisFrame())
            TogglePause();

    }

    public void AddScore(int points = 1)
    {
        score += points;
        OnScoreChanged?.Invoke(score);
    }

    public void PlayerHit()
    {
        if (isGameOver) return;

        lives--;
        Debug.Log($"[GameManager] Player hit! Lives remaining: {lives}");
        OnPlayerHit?.Invoke(lives);

        if (lives <= 0)
            TriggerGameOver();
    }

    void TriggerGameOver()
    {
        isGameOver = true;
        Time.timeScale = 0f;
        OnGameOver?.Invoke();
    }

    void TriggerWin()
    {
        if (isGameOver) return;
        isGameWon = true;
        Time.timeScale = 0f;
        OnGameWin?.Invoke();
    }

    public void TogglePause()
    {
        isPaused = !isPaused;
        Time.timeScale = isPaused ? 0f : 1f;

    if (pauseToggleSound != null && audioSource != null)
        audioSource.PlayOneShot(pauseToggleSound);

        OnPauseToggled?.Invoke(isPaused);
    }

    public void ResetGame()
    {
        //Reset Sound 
        if (resetSound != null && audioSource != null)
                audioSource.PlayOneShot(resetSound);
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

        // Reset lives and game over/win state
        lives = 3;
        isGameOver = false;
        isGameWon = false;
        OnPlayerHit?.Invoke(lives);

        // Destroy all live enemies and projectiles
        foreach (var bug in FindObjectsByType<GridbugEnemy>(FindObjectsSortMode.None))
            Destroy(bug.gameObject);

        foreach (var rec in FindObjectsByType<RecognizerEnemy>(FindObjectsSortMode.None))
            Destroy(rec.gameObject);

        foreach (var proj in FindObjectsByType<RecognizerProjectile>(FindObjectsSortMode.None))
            Destroy(proj.gameObject);
    }
}
