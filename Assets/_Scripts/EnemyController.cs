using UnityEngine;
using System.Collections;

[System.Serializable]
public class Speed {
	public float minSpeed, maxSpeed;
}

[System.Serializable]
public class Boundary {
	public float xMin, xMax, yMin, yMax;
}


/**
 * This is a StarWars Scrolling game 
 * 
 * @FileName: EnemyController.cs
 * @Author Md Mamunur Rahman
 * @student ID: 300872772
 * @Last Modified By : Md Mamunur Rahman
 * @Last Update 22-October-2016
 * @description: this file is EnemyController cs file for the game
 * @Revision History:  Version 0.1.3, Game is almost done
 */

/**  
* <summary>  
* This is the EnemyController class to control the Game restarting.  
* </summary>  
*   
* @class EnemyController  
*/



public class EnemyController : MonoBehaviour {
	// PUBLIC INSTANCE VARIABLES
	public Speed speed;
	public Boundary boundary;
	private GameObject _gameControllerObject;
	private GameController _gameController;



	// PRIVATE INSTANCE VARIABLES
	private float _CurrentSpeed;
	private float _CurrentDrift;

	/**
        * <summary>
        * This is the method for starting the class which initiates value
        * </summary>
        * Get
        * @method Start
        * @returns {void} 
        */
	void Start () {
		this._gameControllerObject = GameObject.Find ("GameController");
		this._gameController = this._gameControllerObject.GetComponent<GameController> () as GameController;

		this._reset ();
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
		Vector2 currentPosition = gameObject.GetComponent<Transform> ().position;
		currentPosition.y -= this._CurrentSpeed;
		gameObject.GetComponent<Transform> ().position = currentPosition;
		
		// Check bottom boundary
		if (currentPosition.y <= boundary.yMin) {
			this._reset();

			this._gameController.Score += 10;
		}
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
		if (other.gameObject.CompareTag ("Player")) {
			this._reset ();
		}

	}


	/**
        * <summary>
        * This method is to reset the game objects.
        * </summary>
        * 
        * @method Update
        * @returns {void} 
        */
	private void _reset() {
		this._CurrentSpeed = Random.Range (speed.minSpeed, speed.maxSpeed);
		Vector2 resetPosition = new Vector2 (Random.Range(boundary.xMin, boundary.xMax), boundary.yMax);
		gameObject.GetComponent<Transform> ().position = resetPosition;


	}

}
