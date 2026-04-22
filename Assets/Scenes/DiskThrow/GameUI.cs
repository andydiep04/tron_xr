using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameUI : MonoBehaviour
{
    [Header("Score HUD")]
    public Canvas scoreCanvas;
    public TextMeshProUGUI scoreText;
    public Vector3 scoreOffset = new Vector3(0f, -0.15f, 0.5f);

    [Header("Pause Menu")]
    public Canvas pauseCanvas;
    public Button resumeButton;
    public Button resetButton;
    public Vector3 pauseMenuOffset = new Vector3(0f, 0f, 0.8f);

    private Transform playerCamera;

    void Start()
    {
        playerCamera = Camera.main?.transform;

        if (playerCamera == null)
            Debug.LogError("[GameUI] ERROR: Camera.main is null!");
        else
            Debug.Log("[GameUI] Camera found: " + playerCamera.gameObject.name);

        if (pauseCanvas != null)
        {
            pauseCanvas.gameObject.SetActive(false);
            Debug.Log("[GameUI] PauseCanvas hidden at start.");
        }
        else
            Debug.LogError("[GameUI] ERROR: PauseCanvas not assigned!");

        UpdateScoreDisplay(0);

        if (resumeButton != null)
            resumeButton.onClick.AddListener(OnResumePressed);
        if (resetButton != null)
            resetButton.onClick.AddListener(OnResetPressed);

        if (GameManager.Instance != null)
        {
            GameManager.Instance.OnScoreChanged += UpdateScoreDisplay;
            GameManager.Instance.OnPauseToggled += UpdatePauseMenu;
            Debug.Log("[GameUI] Subscribed to GameManager events.");
        }
        else
            Debug.LogError("[GameUI] ERROR: GameManager.Instance is null!");
    }

    void LateUpdate()
    {
        if (playerCamera == null)
        {
            playerCamera = Camera.main?.transform;
            if (playerCamera == null) return;
        }

        // Score HUD follows the player's gaze
        if (scoreCanvas != null && scoreCanvas.gameObject.activeSelf)
        {
            Vector3 scorePos = playerCamera.position
                + playerCamera.forward * scoreOffset.z
                + playerCamera.up * scoreOffset.y
                + playerCamera.right * scoreOffset.x;
            scoreCanvas.transform.position = scorePos;
            // Face TOWARD the camera so text is readable
            scoreCanvas.transform.rotation = Quaternion.LookRotation(
                playerCamera.position - scorePos);
        }

        // Pause menu appears in front of the player
        if (pauseCanvas != null && pauseCanvas.gameObject.activeSelf)
        {
            Vector3 pausePos = playerCamera.position
                + playerCamera.forward * pauseMenuOffset.z
                + playerCamera.up * pauseMenuOffset.y
                + playerCamera.right * pauseMenuOffset.x;
            pauseCanvas.transform.position = pausePos;
            // Face TOWARD the camera so text is readable
            pauseCanvas.transform.rotation = Quaternion.LookRotation(
                playerCamera.position - pausePos);
        }
    }

    void UpdateScoreDisplay(int newScore)
    {
        if (scoreText != null)
        {
            scoreText.text = "HITS: " + newScore;
            Debug.Log("[GameUI] Display updated: HITS: " + newScore);
        }
    }

    void UpdatePauseMenu(bool paused)
    {
        Debug.Log("[GameUI] UpdatePauseMenu called, paused = " + paused);
        if (pauseCanvas != null)
            pauseCanvas.gameObject.SetActive(paused);
    }

    void OnResumePressed()
    {
        Debug.Log("[GameUI] Resume pressed");
        if (GameManager.Instance != null)
            GameManager.Instance.TogglePause();
    }

    void OnResetPressed()
    {
        Debug.Log("[GameUI] Reset pressed");
        if (GameManager.Instance != null)
            GameManager.Instance.ResetGame();
    }

    void OnDestroy()
    {
        if (GameManager.Instance != null)
        {
            GameManager.Instance.OnScoreChanged -= UpdateScoreDisplay;
            GameManager.Instance.OnPauseToggled -= UpdatePauseMenu;
        }
    }
}
