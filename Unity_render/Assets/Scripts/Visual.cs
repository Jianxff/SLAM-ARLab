using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.IO;
using Random = System.Random;
using System;

public class Visual : MonoBehaviour{
    int width = 600;
    int height = 800;
   

    // camera variables
    byte[] imageData;
    byte[] cameraData;
    Color32[] colorData;
    float[] R = new float[9];
    float[] T = new float[3];
    float[] normal = new float[3];
    float[] center = new float[3];
    
    // Camera
    public WebCamTexture webcamTexture;
    public RawImage rawImage;
    
    // render variables
    Texture2D tex;
    Material mat;
    public Shader shader;
    public GameObject test_model;
    //public GameObject test_plane;
    public GameObject animate_model;
    int detected = 20;
    bool put = false;
    bool redetect = false;
    bool cxx_debug = false;
    private Random rd = new Random();
    private int randCount = 0;


    
    // dll import
    [DllImport("liblocator.so")]
    private static extern bool init(int width, int height);
    [DllImport("liblocator.so")]
    private static extern void set_debug(bool debug);
    [DllImport("liblocator.so")]
    private static extern int process(byte[] img, float[] R, float[] T, bool show_indicator);
    [DllImport("liblocator.so")]
    private static extern bool detect(float[] normal, float[] center);
    [DllImport("liblocator.so")]
    private static extern void release();
    [DllImport("liblocator.so")]
    private static extern void draw_tetra(float scale);

 
    [DllImport("libcvTools.so")]
    private static extern void rotate(byte[] img,int w,int h, int angle,byte[] dst);
    [DllImport("libcvTools.so")]
    private static extern void flip(byte[] img,int w,int h, int fcode, byte[] dst);
    [DllImport("libcvTools.so")]
    private static extern void transpose(byte[] img,int w,int h, byte[] dst);

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


    public Material material{
        get{
            if (mat == null){
                mat = new Material(shader);
                mat.hideFlags = HideFlags.HideAndDontSave;
            }
            return mat;
        }
    }

    void Color32ToByte(Color32[] color,byte[] image){
        GCHandle handle = default(GCHandle);
        handle = GCHandle.Alloc(color, GCHandleType.Pinned);
        IntPtr ptr = handle.AddrOfPinnedObject();
        Marshal.Copy(ptr, image, 0, width*height*4);

        if(handle != default(GCHandle)){
            handle.Free();
        }
    }

    void Start(){
        // init
        init(width,height);

        cameraData = new byte[width*height*4];
        imageData = new byte[width*height*4];
        colorData = new Color32[width*height];
        tex = new Texture2D(width,height,TextureFormat.RGBA32,false);

        test_model.SetActive(false);
        //test_plane.SetActive(false);

        Camera.main.depthTextureMode = DepthTextureMode.Depth;
        webcamTexture = new WebCamTexture(height,width,30); // should be flip
        webcamTexture.Play();

        if(shader != null && shader.isSupported == false){
            enabled = false;
        }
        
    }

    void Update(){
          
        // get image
        colorData = webcamTexture.GetPixels32();
        Color32ToByte(colorData, cameraData);
        transpose(cameraData,height,width,imageData);

        int process_res = process(imageData,R,T,true);
        flip(imageData,width,height,0,cameraData);

        tex.LoadRawTextureData(cameraData);
        tex.Apply();
        rawImage.texture = tex;

        if(process_res != 0){
            Debug.Log("slam lost");
            test_model.SetActive(false);
            //test_plane.SetActive(false);
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

        if(randCount == 0){
            ChangeAnimation();
            randCount = rd.Next(30 * 3, 30 * 15);
        }else{
            randCount--;
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

            //test_plane.transform.position = new Vector3(center[0],-center[1],center[2]);
            //test_plane.transform.eulerAngles = Quaternion.FromToRotation(new Vector3(0,1,0), p_normal).eulerAngles;
            test_model.transform.position = new Vector3(center[0],-center[1],center[2]);

            // look to camera
            Vector3 cam_model = Camera.main.transform.position - test_model.transform.position;
            float dist = Vector3.Cross(cam_model,p_normal).magnitude / p_normal.magnitude;
            float t = (float) Math.Sqrt(cam_model.magnitude * cam_model.magnitude - dist * dist);
            Vector3 p_normal_ext = p_normal.normalized * t;
            Vector3 look = cam_model - p_normal_ext;
            test_model.transform.rotation = Quaternion.LookRotation(look, p_normal);

            test_model.SetActive(true);
            //test_plane.SetActive(true);
            detected = -1;
        }
    }

    private List<string> animationList = new List<string>{
        "Attack","Bounce","Clicked","Death","Eat","Fear","Fly","Hit",
        "Idle_A", "Idle_B", "Idle_C","Jump","Roll","Run","Sit","Swim","Walk"
    };
    

    public void ChangeAnimation(){
        Animator animator = animate_model.GetComponent<Animator>();
        if(animator != null){
            int index = rd.Next(0,animationList.Count);
            animator.Play(animationList[index]);
        }
    }

    public void ChangeScale(bool up){
        if(up == false){
            if(test_model.transform.localScale.x <= 0.1f){
                test_model.transform.localScale = new Vector3(0.1f,0.1f,0.1f);
            }else{
                test_model.transform.localScale -= new Vector3(0.1f,0.1f,0.1f);
            }
            
        }else{
            if(test_model.transform.localScale.x >= 5.0f){
                test_model.transform.localScale = new Vector3(5.0f,5.0f,5.0f);
            }else{
                test_model.transform.localScale += new Vector3(0.1f,0.1f,0.1f);
            }
        }
    }


    internal void OnGUI(){
        GUIStyle fontStyle = new GUIStyle();  
        fontStyle.alignment=TextAnchor.MiddleCenter;
        fontStyle.fontSize=40;
        fontStyle.normal.textColor=Color.white;

        if(GUI.Button(new Rect(10,10,300,110),"DEBUG",fontStyle)){
            cxx_debug = !cxx_debug;
            set_debug(cxx_debug);
        }
        if(GUI.Button(new Rect(30,130,300,230),"TETRA",fontStyle)){
            draw_tetra((float)0.4);
        }
        if(GUI.Button(new Rect(30,250,300,350),"PUT",fontStyle)){
            redetect = true;
        }
        if(GUI.Button(new Rect(30,370,300,470),"CHANGE",fontStyle)){
            ChangeAnimation();
        }
        if(GUI.Button(new Rect(30,490,150,590),"SCALE -",fontStyle)){
            ChangeScale(false);
        }
        if(GUI.Button(new Rect(170,490,300,590),"SCALE +",fontStyle)){
            ChangeScale(true);
        }
         
        
    }

}