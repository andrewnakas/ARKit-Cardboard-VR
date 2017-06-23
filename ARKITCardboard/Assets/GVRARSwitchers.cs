using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GVRARSwitchers : MonoBehaviour {
	//make the cameras switch from ar to vr
	public Camera arCam;
	public GameObject Cam1;
	public GameObject bacCam;
	public GameObject gvrMgr;
	public bool camOn;

	//switch between stereoscopic and magic window mode
	public bool stereoCheck;
	public RenderTexture rend;
	public Toggle stereoTog;
	public GameObject quad;
	// Use this for initialization
	void Start () {
		gvrMgr.GetComponent<GvrViewer> ().VRModeEnabled = true;
		StartCoroutine (delayBodge ());
	}
	//this is to fix a weird glitch that occures in 5.6 and gvr.85 when stereo starts up and is true 
	//take out if you want to start straight in cardboard mode
	public IEnumerator delayBodge(){
		yield return new WaitForSeconds (0.25f);
		gvrMgr.GetComponent<GvrViewer> ().VRModeEnabled = false;
		yield return new WaitForSeconds (0.25f);
		gvrMgr.GetComponent<GvrViewer> ().VRModeEnabled = true;
		yield return new WaitForSeconds (0.25f);

		//turn everything off
		Cam1.SetActive (false);
		bacCam.SetActive (false);
		arCam = Camera.main;
		gvrMgr.SetActive (false);

	}
	public IEnumerator vrswitch (bool foo){
		yield return new WaitForSeconds (0.01f);
		gvrMgr.GetComponent<GvrViewer> ().VRModeEnabled = foo;

		yield return new WaitForSeconds (0.01f);
		gvrMgr.GetComponent<GvrViewer> ().VRModeEnabled = !foo;
		yield return new WaitForSeconds (0.01f);

		gvrMgr.GetComponent<GvrViewer> ().VRModeEnabled = foo;






	}
	public void vrSwitchToggle(){
		//switch2vr
		if (camOn == true) {
			arCam.targetTexture = null;
			quad.SetActive (false);
			Cam1.transform.SetParent (arCam.transform);
			Cam1.transform.localPosition = new Vector3 (0, 0, 0);
			Cam1.transform.localRotation = new Quaternion (0, 0, 0,0);

			StartCoroutine (vrswitch (stereoTog.isOn));
		} else {
			//switchtoar
			if (stereoTog.isOn == true) {
				//if switching to vr ar mode make sure to setup the render txture pipeline
				gvrMgr.SetActive (true);
				Cam1.SetActive (true);
				bacCam.SetActive (true);
				Cam1.transform.SetParent (null);
				Cam1.transform.rotation = Quaternion.identity;			
				arCam.targetTexture = rend;



				//spawn away render texture quad to do nothing because it is in the way
				Cam1.transform.position = new Vector3 (100, 0, 0);
				quad.SetActive (true);
			} else {

				arCam.targetTexture = null;

				Cam1.transform.SetParent (arCam.transform);
				Cam1.transform.localPosition = new Vector3 (0, 0, 0);
				Cam1.transform.localRotation = new Quaternion (0, 0, 0,0);

				gvrMgr.SetActive (false);
				Cam1.SetActive (false);
				bacCam.SetActive (false);
				quad.SetActive (false);

			}
			StartCoroutine (vrswitch (stereoTog.isOn));

		}

	}
	// Update is called once per frame
			


	public void Switch ()
	{

		camOn = !camOn;
	

		if (stereoTog.isOn == false) { 
			if (camOn == true) {
				gvrMgr.SetActive (true);
				Cam1.SetActive (true);
				bacCam.SetActive (true);


				StartCoroutine (vrswitch (stereoTog.isOn));


			} else {
				arCam.targetTexture = null;
				Cam1.transform.SetParent (arCam.transform);
				Cam1.transform.localPosition = new Vector3 (0, 0, 0);
				Cam1.transform.localRotation = new Quaternion (0, 0, 0,0);

				Cam1.SetActive (false);
				bacCam.SetActive (false);
				arCam = Camera.main;
				gvrMgr.SetActive (false);
				StartCoroutine (vrswitch (stereoTog.isOn));


			}
		} else {
			if (camOn == false) {
				//switc to vrar
				arCam.targetTexture = rend;
				gvrMgr.SetActive (true);
				Cam1.SetActive (true);
				bacCam.SetActive (true);
				Cam1.transform.SetParent (null);
				//spawn away do nothing is in the way
				Cam1.transform.position = new Vector3 (100, 0, 0);
				Cam1.transform.localRotation = new Quaternion (0, 0, 0,0);

				quad.SetActive (true);
				StartCoroutine (vrswitch (true));


			} else {
				//switc to vr
				arCam.targetTexture = null;
				gvrMgr.SetActive (true);
				Cam1.SetActive (true);
				bacCam.SetActive (true);
				Cam1.transform.SetParent (arCam.transform);
				Cam1.transform.localPosition = new Vector3 (0, 0, 0);
				Cam1.transform.localRotation = new Quaternion (0, 0, 0,0);


				StartCoroutine (vrswitch (true));

			}
		}
		
	}
}
