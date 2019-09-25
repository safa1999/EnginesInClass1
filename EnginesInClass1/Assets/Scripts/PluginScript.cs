using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
public class PluginScript : MonoBehaviour
{
    const string DLL_NAME = "UnityDLLinclass1";
    [DllImport(DLL_NAME)]
    private static extern int doSomething();
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Z))
        {
            Debug.Log(doSomething());
        }
    }
}
