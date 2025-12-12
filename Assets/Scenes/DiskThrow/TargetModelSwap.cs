using UnityEngine;

public class TargetModelSwap : MonoBehaviour
{
    public GameObject model1;  // tron_bits (default)
    public GameObject model2;  // tron_bits_2 (second model)

    private bool hasSwapped = false;

    private void OnCollisionEnter(Collision collision)
    {
        if (hasSwapped) return;  // Prevent double-swaps

        if (collision.gameObject.CompareTag("Disc"))
        {
            model1.SetActive(false);
            model2.SetActive(true);

            hasSwapped = true;
        }
    }
}