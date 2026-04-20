using UnityEngine;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// Manages all in-game UI: score counter HUD and pause menu.
/// Attach to an empty GameObject called "GameUI" in the scene.
/// 
/// UNITY SETUP INSTRUCTIONS:
/// 
/// 1) SCORE HUD (always visible, follows player):
///    - Create: GameObject > UI > Canvas. Rename to "ScoreCanvas"
///    - Set Canvas Render Mode to "World Space"
///    - Set Width=0.4, Height=0.1 in RectTransform
///    - Scale the Canvas to (0.002, 0.002, 0.002) so it's small in world
///    - Add a child: UI > Text - TextMeshPro. Rename to "ScoreText"
///    - Set ScoreText font size ~36, color cyan/light blue, center aligned
///    - Drag ScoreCanvas into this script's "scoreCanvas" field
///    - Drag ScoreText into this script's "scoreText" field
///
/// 2) PAUSE MENU (hidden until menu button pressed):
///    - Create: GameObject > UI > Canvas. Rename to "PauseCanvas"
///    - Set Canvas Render Mode to "World Space"
///    - Set Width=0.5, Height=0.4 in RectTransform
///    - Scale the Canvas to (0.002, 0.002, 0.002)
///    - Add children:
///      a) UI > Text - TextMeshPro: "PAUSED" header, font size ~48
///      b) UI > Button - TextMeshPro: Rename to "ResumeButton", label "RESUME"
///      c) UI > Button - TextMeshPro: Rename to "ResetButton", label "RESET"
///    - Drag PauseCanvas into this script's "pauseCanvas" field
///    - Drag ResumeButton into "resumeButton" field
///    - Drag ResetButton into "resetButton" field
///    - Add a "Tracked Device Graphic Raycaster" component to PauseCanvas 
///      (so VR controllers can interact with the buttons)
///
/// 3) On BOTH canvases, ensure there is an EventSystem in the scene
///    (one should already exist from the XR Rig setup)
/// </summary>
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
        playerCamera = Camera.main.transform;

        // Initialize UI states
        if (pauseCanvas != null)
            pauseCanvas.gameObject.SetActive(false);

        UpdateScoreDisplay(0);

        // Wire up buttons
        if (resumeButton != null)
            resumeButton.onClick.AddListener(OnResumePressed);

        if (resetButton != null)
            resetButton.onClick.AddListener(OnResetPressed);

        // Subscribe to GameManager events
        if (GameManager.Instance != null)
        {
            GameManager.Instance.OnScoreChanged += UpdateScoreDisplay;
            GameManager.Instance.OnPauseToggled += UpdatePauseMenu;
        }
    }

    void LateUpdate()
    {
        if (playerCamera == null) return;

        // Score HUD follows the player's gaze (bottom of view)
        if (scoreCanvas != null && scoreCanvas.gameObject.activeSelf)
        {
            scoreCanvas.transform.position = playerCamera.position
                + playerCamera.forward * scoreOffset.z
                + playerCamera.up * scoreOffset.y
                + playerCamera.right * scoreOffset.x;
            scoreCanvas.transform.rotation = Quaternion.LookRotation(
                scoreCanvas.transform.position - playerCamera.position);
        }

        // Pause menu appears in front of the player when active
        if (pauseCanvas != null && pauseCanvas.gameObject.activeSelf)
        {
            pauseCanvas.transform.position = playerCamera.position
                + playerCamera.forward * pauseMenuOffset.z
                + playerCamera.up * pauseMenuOffset.y
                + playerCamera.right * pauseMenuOffset.x;
            pauseCanvas.transform.rotation = Quaternion.LookRotation(
                pauseCanvas.transform.position - playerCamera.position);
        }
    }

    void UpdateScoreDisplay(int newScore)
    {
        if (scoreText != null)
            scoreText.text = "HITS: " + newScore;
    }

    void UpdatePauseMenu(bool paused)
    {
        if (pauseCanvas != null)
            pauseCanvas.gameObject.SetActive(paused);
    }

    void OnResumePressed()
    {
        if (GameManager.Instance != null)
            GameManager.Instance.TogglePause();
    }

    void OnResetPressed()
    {
        if (GameManager.Instance != null)
            GameManager.Instance.ResetGame();
    }

    void OnDestroy()
    {
        // Unsubscribe to prevent memory leaks
        if (GameManager.Instance != null)
        {
            GameManager.Instance.OnScoreChanged -= UpdateScoreDisplay;
            GameManager.Instance.OnPauseToggled -= UpdatePauseMenu;
        }
    }
}
