using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class boxMove : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.O))
        {
            transform.localPosition = new Vector3(2, 3, 4);
        }
    }
}
