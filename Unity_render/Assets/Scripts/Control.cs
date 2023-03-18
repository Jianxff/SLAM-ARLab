using UnityEngine;
using System.Collections;
using System.IO;

public class Control : MonoBehaviour {

	float model_scale;
	// Use this for initialization
	void Start () {
		model_scale = 0.5f;

	}
	
	// Update is called once per frame
	void Update () {

		if (Input.GetAxis("Mouse ScrollWheel") < 0)
		{
			model_scale -= 0.1f;
			if (model_scale <= 0.1f) {
				model_scale = 0.1f;
			}
			transform.localScale = new Vector3(model_scale, model_scale, model_scale);
		}
		if (Input.GetAxis("Mouse ScrollWheel") > 0)
		{
			model_scale += 0.1f;
			transform.localScale = new Vector3(model_scale, model_scale, model_scale);
		}
	}
}
