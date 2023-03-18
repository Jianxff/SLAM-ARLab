using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.IO;
using System;

public class Visual : MonoBehaviour{
    
    // camera variables
    byte[] image = new byte[640*480*3];
    float[] R = new float[9];
    float[] T = new float[3];
    float[] normal = new float[3];
    float[] center = new float[3];
    
    // render variables
    Texture2D tex;
    Material mat;
    public Shader shader;
    public GameObject test_model;
    public GameObject test_plane;
    int detected = 20;
    bool put = false;
    bool redetect = false;
    bool cxx_debug = false;

    
    // dll import
    [DllImport("locator")]
    private static extern bool init();
    [DllImport("locator")]
    private static extern void set_debug(bool debug);
    [DllImport("locator")]
    private static extern int process(byte[] img, float[] R, float[] T, bool show_indicator);
    [DllImport("locator")]
    private static extern bool detect(float[] normal, float[] center);
    [DllImport("locator")]
    private static extern void release();

    [ImageEffectOpaque]
    void OnRenderImage(RenderTexture src, RenderTexture dest)
    {
        if(shader != null){
            material.SetTexture("tex",tex);
            Graphics.Blit(src, dest,material);
        }else{
            Graphics.Blit(src, dest);
        }
    }


    public Material material
    {
        get
        {
            if (mat == null)
            {
                mat = new Material(shader);
                mat.hideFlags = HideFlags.HideAndDontSave;
            }
            return mat;
        }
    }


    void Start(){
        // init
        init();
        test_model.SetActive(false);
        test_plane.SetActive(false);
        tex = new Texture2D(640,480,TextureFormat.RGB24,false);
        Camera.main.depthTextureMode = DepthTextureMode.Depth;

        if(shader != null && shader.isSupported == false){
            enabled = false;
        }
        
    }

    void Update(){
        int process_res = process(image,R,T,true);

        if(process_res != 0){
            Debug.Log("slam lost");
            test_model.SetActive(false);
            test_plane.SetActive(false);
            detected = 20;
            put = false;
        }else{
            if(detected > 0){
                Debug.Log("detecting...");
                bool detect_res = detect(normal,center);
                if(detect_res == true){
                    detected--;
                }
            }
        }


        Camera.main.transform.position = new Vector3(T[0], -T[1], T[2]);
        Camera.main.transform.rotation = Quaternion.LookRotation(new Vector3(R[2], -R[5], R[8]), - new Vector3(R[1], -R[4], R[7]));

        if(redetect == true){
            Debug.Log("re-detecting...");
            detected = 20;
            redetect = false;
        }

        if(detected == 0){
            Debug.Log("detected!");
            normal[1] = - normal[1];
            if(normal[1] < 0){
                normal[1] = -normal[1];
                normal[0] = -normal[0];
                normal[2] = -normal[2];
            }
            Vector3 p_normal = new Vector3(normal[0],normal[1],normal[2]);

            test_plane.transform.position = new Vector3(center[0],-center[1],center[2]);
            test_plane.transform.eulerAngles = Quaternion.FromToRotation(new Vector3(0,1,0), p_normal).eulerAngles;

            test_model.transform.position = new Vector3(center[0],-center[1],center[2]);
            // test_model.transform.eulerAngles = Quaternion.FromToRotation(new Vector3(0,1,0), p_normal).eulerAngles;

            // look to camera
            Vector3 cam_model = new Vector3(T[0],-T[1],T[2]) - test_model.transform.position;
            float dist = Vector3.Cross(cam_model,p_normal).magnitude / p_normal.magnitude;
            float t = (float) Math.Sqrt(cam_model.magnitude * cam_model.magnitude - dist * dist);
            Vector3 p_normal_ext = p_normal.normalized * t;
            Vector3 look = cam_model - p_normal_ext;
            test_model.transform.rotation = Quaternion.LookRotation(look, p_normal);

            test_model.SetActive(true);
            test_plane.SetActive(true);
            detected = -1;
        }

        tex.LoadRawTextureData(image);
        tex.Apply();

    }


    internal void OnGUI(){
        if(GUILayout.Button("PUT")){
            redetect = true;
        }
        if(GUILayout.Button("DEBUG")){
            cxx_debug = !cxx_debug;
            set_debug(cxx_debug);
        }
    }

}