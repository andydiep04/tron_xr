using UnityEngine;

public class TargetModelSwap : MonoBehaviour
{
    public GameObject model1;  
    public GameObject model2;  

    private bool hasSwapped = false;

    void Start()
    {
        // This forces the script to find the specific tron_bits 
        // that are attached to THIS clone, not the master prefab.
        if (model1 == null) model1 = transform.Find("tron_bits").gameObject;
        if (model2 == null) model2 = transform.Find("tron_bits_2").gameObject;
    }

    public void ForceModelSwap()
    {
        if (hasSwapped) return;

        // Log the name to see if all 20 are being called or just one
        Debug.Log($"Swapping instance: {gameObject.name} at {transform.position}");

        if (model1 != null) model1.SetActive(false);
        if (model2 != null) model2.SetActive(true);

        if (GameManager.Instance != null)
        {
            GameManager.Instance.AddScore(1);
        }
        
        hasSwapped = true;
    }

    private void OnCollisionEnter(Collision collision)
    {
        // Cleaned up as requested
        if (collision.gameObject.CompareTag("Disc") || collision.gameObject.CompareTag("Sword"))
        {
            ForceModelSwap();
        }
    }
}