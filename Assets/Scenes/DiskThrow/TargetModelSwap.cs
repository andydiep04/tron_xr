using UnityEngine;

public class TargetModelSwap : MonoBehaviour
{
    public GameObject model1;  
    public GameObject model2;  

    public AudioClip swapSound;
    private AudioSource audioSource;
    private bool hasSwapped = false;

    void Start()
    {
        // This forces the script to find the specific tron_bits 
        // that are attached to THIS clone, not the master prefab.
        if (model1 == null) model1 = transform.Find("tron_bits").gameObject;
        if (model2 == null) model2 = transform.Find("tron_bits_2").gameObject;

        audioSource = GetComponent<AudioSource>();

        if (audioSource == null)
        {
            audioSource = gameObject.AddComponent<AudioSource>();
        }
    }

    public void ForceModelSwap()
    {
        if (hasSwapped) return;

        if (model1 != null) model1.SetActive(false);
        if (model2 != null) model2.SetActive(true);

        audioSource.PlayOneShot(swapSound);

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