using UnityEngine;
using System.Collections;
// reference to the UI namespace
using UnityEngine.UI;

// reference to manage my scenes
using UnityEngine.SceneManagement;


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


	// Use this for initialization
	void Start () {

		this._GenerateEnemies ();

	}
	
	// Update is called once per frame
	void Update () {
	
		this.Lives.text ="Lives: " + this.HullPoint.ToString();
		this.ScoreValue.text ="Score: " + this.Score.ToString();

	}

	// generate Clouds
	private void _GenerateEnemies() {
		for (int count=0; count < this.enemyCount; count++) {
			Instantiate(enemy);
		}
	}

	public void GameOver(){
		PlayerPrefs.SetInt("HiScore",this.Score);
		SceneManager.LoadScene ("Restart");
	}

}
