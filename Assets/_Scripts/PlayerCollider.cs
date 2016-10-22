using UnityEngine;
using System.Collections;
// reference to the UI namespace
using UnityEngine.UI;

// reference to manage my scenes
using UnityEngine.SceneManagement;


/**
 * This is a  This is a StarWars Scrolling game 
 * 
 * @FileName: PlayerCollider.cs
 * @Author Md Mamunur Rahman
 * @student ID: 300872772
 * @Last Modified By : Md Mamunur Rahman
 * @Last Update 22-October-2016
 * @description: this file is PlayerCollider cs file for the game
 * @Revision History: 
 */

/**  
* <summary>  
* This is the PlayerCollider class to control the players coliding with other objects.  
* </summary>  
*   
* @class PlayerCollider  
*/



public class PlayerCollider : MonoBehaviour {
	// PRIVATE INSTANCE VARIABLES +++++++++++++++++++++++++++++++++++++++

	private GameObject _enemyControllerObject;
	private EnemyController _enemyController;
	private GameObject _gameControllerObject;
	private GameController _gameController;

	// PUBLIC INSTANCE VARIABLES +++++++++++++++++++++++++++++++++++++++

	public AudioSource HitSound;

	/**
        * <summary>
        * This is the method for starting the class which initiates value
        * </summary>
        * Get
        * @method Start
        * @returns {void} 
        */
	void Start () {
	
		this._enemyControllerObject = GameObject.Find ("Enemy");
		this._enemyController = this._enemyControllerObject.GetComponent<EnemyController> () as EnemyController;
		this._gameControllerObject = GameObject.Find ("GameController");
		this._gameController = this._gameControllerObject.GetComponent<GameController> () as GameController;


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

	/**
	* <summary>
	* This method activate on collides with objects on Trigger Entry
	* </summary>
	* 
	* @method OnTriggerEnter2D
	* @param {Collision2D} other
	* @returns {void} 
	*/
	private void OnTriggerEnter2D(Collider2D other) {

		if(other.gameObject.CompareTag("Enemy")) {
			this._gameController.HullPoint -= 1;
			this.HitSound.Play ();
			if (this._gameController.HullPoint <= 0) {
				
				this._gameController.GameOver ();
			}

		}


	}





}
