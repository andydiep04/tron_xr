using UnityEngine;
using UnityEngine.InputSystem;
using System.Collections.Generic;

public class DiskThrower : MonoBehaviour {

  public GameObject diskPrefab;
  public Transform spawnPoint;
  public InputActionProperty throwAction;

  [Header("Sound Effects")]
  public AudioClip diskFlySound;

  private GameObject currentDisk;
  private Rigidbody diskRb;
  private AudioSource diskAudioSource;

  public Animator animator;
  private ParticleSystem particleSystem;
  float progress = 0f;
  public float speed = 2f;
  public string animationName;

  private Queue<Vector3> recentPositions = new Queue<Vector3>();

  void Update() {
    if (GameManager.Instance != null && GameManager.Instance.isPaused) {
      return; 
    }

    Vector3 offset = spawnPoint.forward * 0.1f;

    // Vector3 offset = (spawnPoint.forward * -0.05f) + 
    // (spawnPoint.right * -0.05f) + 
    // (spawnPoint.up * -0.03f);

    if (throwAction.action.ReadValue<float>() > 0) {
      progress += Time.deltaTime * speed;
    } else {
      progress -= Time.deltaTime * speed;
    }

    progress = Mathf.Clamp01(progress);
    animator.Play(animationName, 0, progress);

    // Check trigger held
    if (throwAction.action.ReadValue<float>() > 0) {

      if (currentDisk == null) { // Create new disk

        currentDisk = Instantiate(diskPrefab, spawnPoint.position + offset,
                                  spawnPoint.rotation);

        particleSystem = currentDisk.GetComponentInChildren<ParticleSystem>();
        diskRb = currentDisk.GetComponent<Rigidbody>();
        diskRb.isKinematic = true;

        // Add or get AudioSource on disk
        diskAudioSource = currentDisk.GetComponent<AudioSource>();
        if (diskAudioSource == null) {
          diskAudioSource = currentDisk.AddComponent<AudioSource>();
        }

        diskAudioSource.clip = diskFlySound;
        diskAudioSource.playOnAwake = false;
        diskAudioSource.spatialBlend = 1f; // 3D sound
        diskAudioSource.volume = 0.7f;

        recentPositions.Clear();

      } else { // Update disk position

        currentDisk.transform.position = spawnPoint.position + offset;
        currentDisk.transform.rotation = spawnPoint.rotation;

        // Maintain queue of positions
        recentPositions.Enqueue(currentDisk.transform.position);
        if (recentPositions.Count > 5) {
          recentPositions.Dequeue();
        }
      }

    } else if (currentDisk != null) {

      if (particleSystem != null) {
        particleSystem.Play();
      }

      diskRb.isKinematic = false;

      // Calculate velocity based on current position and last 5 position
      diskRb.linearVelocity =
          1.2f * (spawnPoint.position + offset - recentPositions.Peek()) /
          (5 * Time.deltaTime);

      // Apply spin speed based on velocity
      float spinSpeed =
          Mathf.Clamp(diskRb.linearVelocity.magnitude * 2f, 2f, 50f);
      diskRb.angularVelocity = currentDisk.transform.up * spinSpeed;

      // Play flying sound when disk is thrown
      if (diskAudioSource != null && diskFlySound != null) {
        diskAudioSource.Play();
      }

      Destroy(currentDisk, 3f);
      currentDisk = null;
    }
  }
}
