using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameUI : MonoBehaviour
{
    [Header("Score HUD")]
    public Canvas scoreCanvas;
    public TextMeshProUGUI scoreText;
    public Vector3 scoreOffset = new Vector3(0f, -0.15f, 0.5f);

    [Header("Score Sound")]
    public AudioClip scoreIncreaseSound;
    private AudioSource audioSource;
    private int currentScore = 0;

    [Header("Pause Menu")]
    public Canvas pauseCanvas;
    public Vector3 pauseMenuOffset = new Vector3(0f, -0.1f, 0.8f);

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

        UpdateScoreDisplay(0);

        if (GameManager.Instance != null)
        {
            GameManager.Instance.OnScoreChanged += UpdateScoreDisplay;
            GameManager.Instance.OnPauseToggled += UpdatePauseMenu;
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
    }

    void UpdateScoreDisplay(int newScore)
    {
        if (scoreText != null)
            scoreText.text = "HITS: " + newScore;

        if (newScore > currentScore && scoreIncreaseSound != null && audioSource != null)
        {
            audioSource.PlayOneShot(scoreIncreaseSound);
        }

        currentScore = newScore;
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
        }
    }
}
