using UnityEngine;
using System.Collections;

public class controller : MonoBehaviour {
//	public GameObject cam = CharacterController;
	public float speed = 3.0F;
	Cardboard cb = new Cardboard();
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		float g = Input.GetAxis ("Vertical")*speed;
		if (Input.GetKey(KeyCode.LeftArrow)) {
			Debug.Log("key pressed");
			transform.Translate(Vector3.left * Time.deltaTime * speed, Camera.main.transform);
		}
		if (Input.GetKey(KeyCode.RightArrow)) {
			Debug.Log("key pressed");
			transform.Translate(Vector3.right * Time.deltaTime * speed, Camera.main.transform);
		}
		if (Input.GetKey(KeyCode.UpArrow)) {
			Debug.Log("key pressed");
			transform.Translate(Vector3.forward * Time.deltaTime * speed, Camera.main.transform);
		}
		if (Input.GetKey(KeyCode.DownArrow)) {
			Debug.Log("key pressed");
			transform.Translate(Vector3.back * Time.deltaTime * speed, Camera.main.transform);
		}
		//var dir = transform.TransformDirection(Vector3.forward);
		//dir.z *= speed;
//		cam.Move(dir * Time.deltaTime);
		/*float translationy = Input.GetAxis ("Vertical") * speed;
		float translation = Input.GetAxis("Horizontal") * speed;
		translation *= Time.deltaTime;
		translationy *= Time.deltaTime;
		transform.Translate (translation,0,translationy);*/
	}
}
