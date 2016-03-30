using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class talkto : MonoBehaviour {

	public int TextBoxOnCheck = 0; // Checks if TextBox is on the screen
	public GameObject MessageBox; // Defines the message box as an object
	public GameObject TextBox; // Defines the text box as an object
	public string openText;
	public string closeText;
	string TextMessage; // The text we can change



	void Start () {
		MessageBox.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	void OnMouseDown(){
		Debug.Log ("Click Leaw!!");
		if (TextBoxOnCheck == 0) {
			TextBoxOnCheck = 1; //Sets the variable to turn the box off
			MessageBox.SetActive(true); //Re-enables the box
			TextMessage = openText;
			TextBox.GetComponent<Text>().text = TextMessage; //changes the message
			
		}
		else {
			TextBoxOnCheck = 0;
			MessageBox.SetActive(false);
			TextMessage = closeText;
		}
	}

	}

