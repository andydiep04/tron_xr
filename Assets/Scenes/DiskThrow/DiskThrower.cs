using UnityEngine;
using UnityEngine.InputSystem;

public class DiskThrower : MonoBehaviour {

  public GameObject diskPrefab;
  public Transform spawnPoint;
  public InputActionProperty throwAction;

  private GameObject currentDisk;
  private Rigidbody diskRb;

  void Update() {

    if (throwAction.action.ReadValue<float>() > 0) {
      if (currentDisk == null) {
        currentDisk =
            Instantiate(diskPrefab, spawnPoint.position, spawnPoint.rotation);
        diskRb = currentDisk.GetComponent<Rigidbody>();
        diskRb.isKinematic = true;
        Debug.Log("created disk");
      } else {
        currentDisk.transform.position = spawnPoint.position;
        currentDisk.transform.rotation = spawnPoint.rotation;
      }
    } else if (currentDisk != null) {
      diskRb.isKinematic = false;
      diskRb.linearVelocity = spawnPoint.forward * 5f;
      currentDisk = null;
      Debug.Log("Throw disk");
    }
  }
}
