using UnityEngine;
using UnityEngine.InputSystem;
using System.Collections.Generic;

public class DiskThrower : MonoBehaviour {

  public GameObject diskPrefab;
  public Transform spawnPoint;
  public InputActionProperty throwAction;

  private GameObject currentDisk;
  private Rigidbody diskRb;

  private Vector3 lastPosition;
  private Quaternion lastRotation;
  private Queue<Vector3> recentPositions = new Queue<Vector3>();

  void Update() {

    Vector3 offset = spawnPoint.forward*0.1f;

    if (throwAction.action.ReadValue<float>() > 0) {

      if (currentDisk == null) {

        currentDisk =
            Instantiate(diskPrefab, spawnPoint.position + offset, spawnPoint.rotation);
        diskRb = currentDisk.GetComponent<Rigidbody>();
        diskRb.isKinematic = true;

        recentPositions.Clear();

      } else {
        currentDisk.transform.position = spawnPoint.position + offset;
        currentDisk.transform.rotation = spawnPoint.rotation;


        recentPositions.Enqueue(currentDisk.transform.position);
        if (recentPositions.Count > 5){
          recentPositions.Dequeue();
        }
      }

    } else if (currentDisk != null) {

      diskRb.isKinematic = false;
      diskRb.linearVelocity = (spawnPoint.position + offset - recentPositions.Peek()) / (5*Time.deltaTime);

      Quaternion delta = spawnPoint.rotation * Quaternion.Inverse(lastRotation);
      Vector3 angular = delta.eulerAngles / Time.deltaTime;
      diskRb.angularVelocity = angular * Mathf.Deg2Rad;

      currentDisk = null;
    }
  }
}
