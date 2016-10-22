using UnityEngine;
using System.Collections;

// reference to the UI namespace
using UnityEngine.UI;

// reference to manage my scenes
using UnityEngine.SceneManagement;

/**
 * This is a StarWars Scrolling game 
 * 
 * @FileName: ReStartingController.cs
 * @Author Md Mamunur Rahman
 * @student ID: 300872772
 * @Last Modified By : Md Mamunur Rahman
 * @Last Update 22-October-2016
 * @description: this file is ReStartingController cs file for the game
 * @Revision History:  Version 0.1.3, Game is almost done
 */

/**  
* <summary>  
* This is the ReStartingController class to control the Game restarting.  
* </summary>  
*   
* @class StartingController  
*/



public class ReStartController : MonoBehaviour {
	// PRIVATE INSTANCE VARIABLES
	private GameObject _gameControllerObject;
	private GameController _gameController;

	// PUBLIC INSTANCE VARIABLES
	[Header("Labels")]

	public Text GameOver;
	public Text Score;




	/**
        * <summary>
        * This is the method for starting the class which initiates value
        * </summary>
        * Get
        * @method Start
        * @returns {void} 
        */
	void Start () {

		this.GameOver.text = "Game Over";
		this.Score.text = "Total Score: " + PlayerPrefs.GetInt("HiScore");

	}




	/**
        * <summary>
        * This method is called once per frame.
        * </summary>
        * 
        * @method Update
        * @returns {void} 
        */
	void Update () {
		
	}

	public void ReStartButtonClick(){
		SceneManager.LoadScene ("Play");
	
	}


		
}
