using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.IO;
using Random = System.Random;
using System;

public class Visual : MonoBehaviour{
    int width = 480;
    int height = 640;
   

    // camera variables
    byte[]      textureData;
    byte[]      rawImageData;
    Color32[]   rawColorData;
    
    float[] R = new float[9];
    float[] T = new float[3];
    float[] normal = new float[3];
    float[] center = new float[3];
    
    // Camera
    public WebCamTexture    webcamTexture;
    public RawImage         rawImage;
    
    // render variables
    Texture2D   tex;
    Material    mat;
    // public Shader shader;
    public GameObject presetModel;
    public GameObject animateModel;
    public GameObject indicator;

    // int detected = 20;
    bool put_model = false;
    // bool redetect = false;
    bool cxx_debug = false;
    private Random rd = new Random();
    private int randCount = 0;


    
    // dll import
    [DllImport("liblocator.so")]
    private static extern bool slam_init(int width, int height);
    [DllImport("liblocator.so")]
    private static extern void slam_set_debug(bool debug);
    [DllImport("liblocator.so")]
    private static extern int slam_process(byte[] img,byte[] dst, float[] R, float[] T);
    [DllImport("liblocator.so")]
    private static extern bool slam_detect(float[] normal, float[] center);
    [DllImport("liblocator.so")]
    private static extern void slam_release();
    [DllImport("liblocator.so")]
    private static extern void slam_draw_tetra(float scale);

 
    [DllImport("libcvTools.so")]
    private static extern void rotate(byte[] img,int channel,int w,int h, int angle,byte[] dst);
    [DllImport("libcvTools.so")]
    private static extern void flip(byte[] img,int channel,int w,int h, int fcode, byte[] dst);
    [DllImport("libcvTools.so")]
    private static extern void transpose(byte[] img,int channel,int w,int h, byte[] dst);

    // [ImageEffectOpaque]
    // void OnRenderImage(RenderTexture src, RenderTexture dest)
    // {
    //     if(shader != null){
    //         material.SetTexture("tex",tex);
    //         Graphics.Blit(src, dest,material);
    //     }else{
    //         Graphics.Blit(src, dest);
    //     }
    // }


    // public Material material{
    //     get{
    //         if (mat == null){
    //             mat = new Material(shader);
    //             mat.hideFlags = HideFlags.HideAndDontSave;
    //         }
    //         return mat;
    //     }
    // }

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
        slam_init(width,height);

        rawColorData = new Color32[width*height];
        rawImageData = new byte[width*height*4];
        textureData = new byte[width*height*3];

        tex = new Texture2D(width,height,TextureFormat.RGB24,false);

        presetModel.SetActive(false);

        Camera.main.depthTextureMode = DepthTextureMode.Depth;
        webcamTexture = new WebCamTexture(height,width,30); // should be flip
        webcamTexture.Play();

        // if(shader != null && shader.isSupported == false){
        //     enabled = false;
        // }
        Debug.Log("start");
        
    }

    void Update(){
          
        // get image
        rawColorData = webcamTexture.GetPixels32();
        Color32ToByte(rawColorData, rawImageData);
        transpose(rawImageData,4,height,width,rawImageData);

        int process_res = slam_process(rawImageData,textureData,R,T);
        flip(textureData,3,width,height,0,textureData);

        tex.LoadRawTextureData(textureData);
        tex.Apply();
        rawImage.texture = tex;


        if(process_res != 0){
            Debug.Log("slam lost");
            presetModel.SetActive(false);
            indicator.transform.position = new Vector3(0,0,1);
            indicator.transform.rotation = Quaternion.LookRotation(new Vector3(0,0,1));
            indicator.SetActive(false);
            //detected = 20;
            put_model = false;
        }else{
            if(slam_detect(normal,center) == true){
                Vector3 p_normal = new Vector3(normal[0],-normal[1],normal[2]);
                Vector3 p_center = new Vector3(center[0],-center[1],center[2]);
                indicator.transform.position = p_center;
                indicator.transform.eulerAngles = Quaternion.FromToRotation(new Vector3(0,0,1), p_normal).eulerAngles;
                indicator.SetActive(true);
                if(put_model == true){
                    SetModel(p_normal,p_center);
                    put_model = false;
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

    }

    private void SetModel(Vector3 normal, Vector3 center){
        presetModel.transform.position = center;

        // look to camera
        Vector3 cam_model_vec = Camera.main.transform.position - center;
        float dist = Vector3.Cross(cam_model_vec,normal).magnitude / normal.magnitude;
        float t = (float) Math.Sqrt(cam_model_vec.magnitude * cam_model_vec.magnitude - dist * dist);
        Vector3 p_normal_ext = normal.normalized * t;
        Vector3 look = cam_model_vec - p_normal_ext;
        presetModel.transform.rotation = Quaternion.LookRotation(look, normal);

        presetModel.SetActive(true);

    }

    private List<string> animationList = new List<string>{
        "Attack","Bounce","Clicked","Death","Eat","Fear","Fly","Hit",
        "Idle_A", "Idle_B", "Idle_C","Jump","Roll","Run","Sit","Swim","Walk"
    };
    

    public void ChangeAnimation(){
        Animator animator = animateModel.GetComponent<Animator>();
        if(animator != null){
            int index = rd.Next(0,animationList.Count);
            animator.Play(animationList[index]);
        }
    }

    public void ChangeScale(bool up){
        if(up == false){
            if(presetModel.transform.localScale.x <= 0.1f){
                presetModel.transform.localScale = new Vector3(0.1f,0.1f,0.1f);
            }else{
                presetModel.transform.localScale -= new Vector3(0.05f,0.05f,0.05f);
            }
            
        }else{
            if(presetModel.transform.localScale.x >= 5.0f){
                presetModel.transform.localScale = new Vector3(5.0f,5.0f,5.0f);
            }else{
                presetModel.transform.localScale += new Vector3(0.05f,0.05f,0.05f);
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
            slam_set_debug(cxx_debug);
        }
        if(GUI.Button(new Rect(30,130,300,230),"TETRA",fontStyle)){
            slam_draw_tetra((float)0.4);
        }
        if(GUI.Button(new Rect(30,250,300,350),"PUT",fontStyle)){
            // redetect = true;
            put_model = true;
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