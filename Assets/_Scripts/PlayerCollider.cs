using UnityEngine;
using System.Collections;
// reference to the UI namespace
using UnityEngine.UI;

// reference to manage my scenes
using UnityEngine.SceneManagement;

public class PlayerCollider : MonoBehaviour {

	private GameObject _enemyControllerObject;
	private EnemyController _enemyController;
	private GameObject _gameControllerObject;
	private GameController _gameController;


	// Use this for initialization
	void Start () {
	
		this._enemyControllerObject = GameObject.Find ("Enemy");
		this._enemyController = this._enemyControllerObject.GetComponent<EnemyController> () as EnemyController;
		this._gameControllerObject = GameObject.Find ("GameController");
		this._gameController = this._gameControllerObject.GetComponent<GameController> () as GameController;


	}
	
	// Update is called once per frame
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

			if (this._gameController.HullPoint <= 0) {
				
				this._gameController.GameOver ();
			}

		}


	}





}
