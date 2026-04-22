using UnityEngine;
using System.Collections.Generic;

public class TargetObject
{
	public Vector3 initialPosition;
	public GameObject target;
	public float timingOffset = Random.Range(0, 2f * Mathf.PI);
}

public class targetSpawn : MonoBehaviour
{
	public GameObject targetGameObject;
	public int count = 20;
	public float radius = 2f;
	public float minDistance = 2.0f;
	public float maxDistance = 3.0f;
	public float verticalJitter = 0.2f;

	List<TargetObject> spawnedObjects = new List<TargetObject>();

	void Start()
	{
		SpawnTargets();
	}

	public void SpawnTargets()
	{
		Transform playerHead = Camera.main.transform;
		Vector3 playerPos = playerHead.position;

		for (int i = 0; i < count; i++)
		{
			Vector3 direction = Random.onUnitSphere;
			float distance = Random.Range(minDistance, maxDistance);
			Vector3 spawnPos = playerPos + direction * distance;
			spawnPos.y += Random.Range(-verticalJitter, verticalJitter);

			GameObject targetObject = Instantiate(targetGameObject, spawnPos, Quaternion.identity);

			if (targetObject.GetComponent<TargetModelSwap>() == null)
			{
				targetObject.AddComponent<TargetModelSwap>();
			}

			// Ensure TargetHitColor is on every spawned target
			if (targetObject.GetComponent<TargetHitColor>() == null)
			{
				targetObject.AddComponent<TargetHitColor>();
				Debug.Log("[targetSpawn] Added TargetHitColor to spawned target.");
			}

			spawnedObjects.Add(new TargetObject
			{
				initialPosition = targetObject.transform.position,
				target = targetObject
			});
		}
		Debug.Log("[targetSpawn] Spawned " + count + " targets.");
	}

	public void ResetTargets()
	{
		foreach (var obj in spawnedObjects)
		{
			if (obj.target != null)
				Destroy(obj.target);
		}
		spawnedObjects.Clear();
		SpawnTargets();
	}

	void Update()
	{
		for (int i = 0; i < spawnedObjects.Count; i++)
		{
			TargetObject currTarget = spawnedObjects[i];
			if (currTarget == null || currTarget.target == null) continue;

			Vector3 currTargetPos = currTarget.initialPosition;
			float currBaseY = currTargetPos.y;
			float floatSpeed = 0.5f;
			float floatDuration = 0.1f;
			float floatTimingOffset = currTarget.timingOffset;

			currTargetPos.y = currBaseY + Mathf.Sin(Time.time * floatSpeed + floatTimingOffset) * floatDuration;
			currTarget.target.transform.position = currTargetPos;
		}
	}
}
