using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	// PRIVATE INSTANCE VARIABLES +++++++++++++++++++++++++++++++++++++++
	private GameObject _gameControllerObject;
	private GameController _gameController;
	private Vector2 _newPosition = new Vector2(0.0f, 0.0f);
	// PUBLIC INSTANCE VARIABLES +++++++++++++++++++++++++++++++++++++++
	public Boundary boundary;
	public float speed;
	public Camera camera;




	


	
	/**
        * <summary>
        * This is the method for starting the class which initiates value
        * </summary>
        * Get
        * @method Start
        * @returns {void} 
        */
	void Start () {
		this.speed = 0.3f;

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
		this._CheckInput ();
	}

	/**
        * <summary>
        * This method is called to check when there is an input from keboard or mouse.
        * </summary>
        * 
        * @method _CheckInput
        * @returns {void} 
        */

	private void _CheckInput() {
		this._newPosition = gameObject.GetComponent<Transform> ().position; // current position

		// movement by keyboard
		if (Input.GetAxis ("Horizontal") > 0) {
			this._newPosition.x += this.speed; // add move value to current position
		}
	
		
		if (Input.GetAxis ("Horizontal") < 0) {
			this._newPosition.x -= this.speed; // subtract move value to current position
		}
		//

		// movement by mouse
		//Vector2 mousePosition = Input.mousePosition;
	//	this._newPosition.x = this.camera.ScreenToWorldPoint (mousePosition).x;

		this._BoundaryCheck ();

		gameObject.GetComponent<Transform>().position = this._newPosition;
	}

	/**
        * <summary>
        * This method is called to check object's boundry.
        * </summary>
        * 
        * @method _BoundaryCheck
        * @returns {void} 
        */

	private void _BoundaryCheck() {
		if (this._newPosition.x < this.boundary.xMin) {
			this._newPosition.x = this.boundary.xMin;
		}

		if (this._newPosition.x > this.boundary.xMax) {
			this._newPosition.x = this.boundary.xMax;
		}
	}




}
