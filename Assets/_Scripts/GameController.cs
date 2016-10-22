using UnityEngine;
using System.Collections;
// reference to the UI namespace
using UnityEngine.UI;

// reference to manage my scenes
using UnityEngine.SceneManagement;


/**
 * This is a StarWars Scrolling game 
 * 
 * @FileName: GameController.cs
 * @Author Md Mamunur Rahman
 * @student ID: 300872772
 * @Last Modified By : Md Mamunur Rahman
 * @Last Update 22-October-2016
 * @description: this file is GameController cs file for the game
 * @Revision History:  Version 0.1.3, Game is almost done
 */

/**  
* <summary>  
* This is the GameController class to control the Game restarting.  
* </summary>  
*   
* @class GameController  
*/


public class GameController : MonoBehaviour {
	// PUBLIC INSTANCE VARIABLES
	public int enemyCount;
	public GameObject enemy;
	public int Score = 0;
	public int HullPoint = 5;

	// PUBLIC INSTANCE VARIABLES
	[Header("Labels")]
	public Text Lives;
	public Text ScoreValue;


	/**
        * <summary>
        * This is the method for starting the class which initiates value
        * </summary>
        * Get
        * @method Start
        * @returns {void} 
        */
	void Start () {

		this._GenerateEnemies ();

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
	
		this.Lives.text ="Lives: " + this.HullPoint.ToString();
		this.ScoreValue.text ="Score: " + this.Score.ToString();

	}

	/**
        * <summary>
        * This method is called to generate enemies.
        * </summary>
        * 
        * @method _GenerateEnemies
        * @returns {void} 
        */
	private void _GenerateEnemies() {
		for (int count=0; count < this.enemyCount; count++) {
			Instantiate(enemy);
		}
	}

	/**
        * <summary>
        * This method is called to call Gave Over Scene.
        * </summary>
        * 
        * @method GameOver
        * @returns {void} 
        */
	public void GameOver(){
		PlayerPrefs.SetInt("HiScore",this.Score);
		SceneManager.LoadScene ("Restart");
	}

}
