using UnityEngine;
using System.Collections;

public class talkto : MonoBehaviour {

	public int TextBoxOnCheck = 0; // Checks if TextBox is on the screen
	public GameObject MessageBox; // Defines the message box as an object
	public GameObject TextBox; // Defines the text box as an object
	string TextMessage; // The text we can change
	//GameObject QuestBox; // Defines the quest box
	//GameObject QuestText; // Defines the text in the Quest box
	//String QuestName; // the quest name we can change
	// Use this for initialization



	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	void OnMouseDown(){
		if (TextBoxOnCheck == 0) {
			TextBoxOnCheck = 1; //Sets the variable to turn the box off
			MessageBox.SetActive(true); //Re-enables the box
			TextBox.GetComponent<Text>().text = TextMessage; //changes the message
			
		}

		else {
			TextBoxOnCheck = 0;
			MessageBox.SetActive(false);
			TextMessage = "Villager: Get going then!";
		}
	}

	}

