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
	private int _hitCount = 0;
	public System.Action OnAllHit;

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

			if (targetObject.GetComponent<TargetHitColor>() == null)
			{
				targetObject.AddComponent<TargetHitColor>();
			}

			// Force each new target to start as red/spiky (model1 on, model2 off)
			TargetModelSwap swap = targetObject.GetComponent<TargetModelSwap>();
			if (swap != null)
			{
				if (swap.model1 != null) swap.model1.SetActive(true);
				if (swap.model2 != null) swap.model2.SetActive(false);
			}

			spawnedObjects.Add(new TargetObject
			{
				initialPosition = targetObject.transform.position,
				target = targetObject
			});
		}
	}

	public void NotifyHit()
	{
		_hitCount++;
		if (_hitCount >= count)
			OnAllHit?.Invoke();
	}

	public void ResetTargets()
	{
		// Destroy existing targets
		foreach (var obj in spawnedObjects)
		{
			if (obj.target != null)
				Destroy(obj.target);
		}
		spawnedObjects.Clear();

		// Reset the template back to red/spiky in case it was hit during gameplay
		if (targetGameObject != null)
		{
			TargetModelSwap templateSwap = targetGameObject.GetComponent<TargetModelSwap>();
			if (templateSwap != null)
			{
				if (templateSwap.model1 != null) templateSwap.model1.SetActive(true);
				if (templateSwap.model2 != null) templateSwap.model2.SetActive(false);
			}
		}

		_hitCount = 0;

		// Spawn fresh targets
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
