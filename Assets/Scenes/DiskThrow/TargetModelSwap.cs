using UnityEngine;

public class TargetModelSwap : MonoBehaviour
{
    public GameObject model1;  // tron_bits (default)
    public GameObject model2;  // tron_bits_2 (second model)

    private bool hasSwapped = false;

    private void OnCollisionEnter(Collision collision)
    {
        if (hasSwapped) return;

        if (collision.gameObject.CompareTag("Disc") || collision.gameObject.CompareTag("Sword"))
        {
            model1.SetActive(false);
            model2.SetActive(true);
            hasSwapped = true;
        }
    }
}