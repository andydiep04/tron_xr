using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameUI : MonoBehaviour
{
    [Header("Score HUD")]
    public Canvas scoreCanvas;
    public TextMeshProUGUI scoreText;
    public TextMeshProUGUI livesText;
    public Vector3 scoreOffset = new Vector3(0f, -0.15f, 0.5f);

    [Header("Score Sound")]
    public AudioClip scoreIncreaseSound;
    private AudioSource audioSource;
    private int currentScore = 0;

    [Header("Pause Menu")]
    public Canvas pauseCanvas;
    public Vector3 pauseMenuOffset = new Vector3(0f, -0.1f, 0.8f);

    [Header("Game Over")]
    public Canvas gameOverCanvas;
    public Vector3 gameOverOffset = new Vector3(0f, -0.1f, 0.8f);

    [Header("You Win")]
    public Canvas winCanvas;
    public Vector3 winOffset = new Vector3(0f, -0.1f, 0.8f);

    private Transform playerCamera;

    void Start()
    {
        playerCamera = Camera.main?.transform;

        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
            audioSource = gameObject.AddComponent<AudioSource>();

        audioSource.playOnAwake = false;

        if (pauseCanvas != null)
            pauseCanvas.gameObject.SetActive(false);

        if (gameOverCanvas != null)
            gameOverCanvas.gameObject.SetActive(false);

        if (winCanvas != null)
            winCanvas.gameObject.SetActive(false);

        UpdateScoreDisplay(0);
        UpdateLivesDisplay(GameManager.Instance != null ? GameManager.Instance.lives : 3);

        if (GameManager.Instance != null)
        {
            GameManager.Instance.OnScoreChanged += UpdateScoreDisplay;
            GameManager.Instance.OnPauseToggled += UpdatePauseMenu;
            GameManager.Instance.OnPlayerHit += UpdateLivesDisplay;
            GameManager.Instance.OnGameOver += ShowGameOver;
            GameManager.Instance.OnGameWin += ShowWin;
        }
    }

    void LateUpdate()
    {
        if (playerCamera == null)
        {
            playerCamera = Camera.main?.transform;
            if (playerCamera == null) return;
        }

        if (scoreCanvas != null && scoreCanvas.gameObject.activeSelf)
        {
            Vector3 scorePos = playerCamera.position
                + playerCamera.forward * scoreOffset.z
                + playerCamera.up * scoreOffset.y
                + playerCamera.right * scoreOffset.x;

            scoreCanvas.transform.position = scorePos;
            scoreCanvas.transform.rotation = Quaternion.LookRotation(scorePos - playerCamera.position);
        }

        if (pauseCanvas != null && pauseCanvas.gameObject.activeSelf)
        {
            Vector3 pausePos = playerCamera.position
                + playerCamera.forward * pauseMenuOffset.z
                + playerCamera.up * pauseMenuOffset.y
                + playerCamera.right * pauseMenuOffset.x;

            pauseCanvas.transform.position = pausePos;
            pauseCanvas.transform.rotation = Quaternion.LookRotation(pausePos - playerCamera.position);
        }

        if (gameOverCanvas != null && gameOverCanvas.gameObject.activeSelf)
        {
            Vector3 goPos = playerCamera.position
                + playerCamera.forward * gameOverOffset.z
                + playerCamera.up * gameOverOffset.y
                + playerCamera.right * gameOverOffset.x;

            gameOverCanvas.transform.position = goPos;
            gameOverCanvas.transform.rotation = Quaternion.LookRotation(goPos - playerCamera.position);
        }

        if (winCanvas != null && winCanvas.gameObject.activeSelf)
        {
            Vector3 winPos = playerCamera.position
                + playerCamera.forward * winOffset.z
                + playerCamera.up * winOffset.y
                + playerCamera.right * winOffset.x;

            winCanvas.transform.position = winPos;
            winCanvas.transform.rotation = Quaternion.LookRotation(winPos - playerCamera.position);
        }
    }

    void UpdateScoreDisplay(int newScore)
    {
        if (scoreText != null)
            scoreText.text = "HITS: " + newScore;

        if (newScore > currentScore && scoreIncreaseSound != null && audioSource != null)
            audioSource.PlayOneShot(scoreIncreaseSound);

        // Hide end screens on reset (score resets to 0)
        if (newScore == 0)
        {
            if (gameOverCanvas != null) gameOverCanvas.gameObject.SetActive(false);
            if (winCanvas != null) winCanvas.gameObject.SetActive(false);
        }

        currentScore = newScore;
    }

    void UpdateLivesDisplay(int remaining)
    {
        if (livesText != null)
            livesText.text = "LIVES: " + remaining;
    }

    void ShowGameOver()
    {
        if (gameOverCanvas != null)
            gameOverCanvas.gameObject.SetActive(true);
    }

    void ShowWin()
    {
        if (winCanvas != null)
            winCanvas.gameObject.SetActive(true);
    }

    void UpdatePauseMenu(bool paused)
    {
        if (pauseCanvas != null)
            pauseCanvas.gameObject.SetActive(paused);
    }

    void OnDestroy()
    {
        if (GameManager.Instance != null)
        {
            GameManager.Instance.OnScoreChanged -= UpdateScoreDisplay;
            GameManager.Instance.OnPauseToggled -= UpdatePauseMenu;
            GameManager.Instance.OnPlayerHit -= UpdateLivesDisplay;
            GameManager.Instance.OnGameOver -= ShowGameOver;
            GameManager.Instance.OnGameWin -= ShowWin;
        }
    }
}
