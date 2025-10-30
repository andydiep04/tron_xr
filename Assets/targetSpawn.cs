using UnityEngine;

public class targetSpawn : MonoBehaviour
{
  public GameObject targetGameObject;
  public int count = 20;
  public float radius = 2f;
  public float minDistance = 2.0f;
  public float maxDistance = 3.0f;
  public float verticalJitter = 0.2f;

  void Start()
  {

    // Randomize a distance away from the player
    Transform playerHead = Camera.main.transform;
    Vector3 playerPos = playerHead.position;


    for (int i = 0; i < count; i++)
    {
      Vector3 direction = Random.onUnitSphere;

      float distance = Random.Range(minDistance, maxDistance);

      Vector3 spawnPos = playerPos + direction * distance;
      spawnPos.y += Random.Range(-verticalJitter, verticalJitter);

      Instantiate(targetGameObject, spawnPos, Quaternion.identity);
    }
  }
}
