#ifndef GAME_H
#define GAME_H

#include "Fruit.h"
#include "ParticleGenerator.h"
#include "ScoreManager.h"
#include "Snake.h"
#include "UIManager.h"
#include "WallManager.h"
//-----------------------------------------------
// Class	: Game
// Purpose	: To manage Snake Game
// Usage	:	Game game;
//				game.checkWallCollisions();
//				game.checkFruitCollisions();
//				game.checkIsSnakeAlive();
//				game.checkCollisions();
// 				game.initializeLevel();
// 				game.loadLevel();
// 				game.update();
// 				game.render();
// 				game.unrender();
// 				game.run();
// 
// 		
// See also	:
//-----------------------------------------------
class Game
{
private:
	//Enums used to determine the state the game is in
	enum class GameState
	{
		MainMenu,
		Playing,
		GameOver
	};
	// Member Variables
	//Instance of GameState
	GameState			currentState = GameState::MainMenu;
	//Instance of UIManager
	UIManager			m_uiManager;
	//Instance of Snake
	Snake				m_snake;
	//Instance of Fruit
	Fruit				m_fruit;
	//Instance of ParticleGenerator
	ParticleGenerator	m_particleGenerator;
	//Instance of ScoreManager
	ScoreManager		m_scoreManager;
	//Instance of WallManager
	WallManager			m_wallManager;

	//bool used to determine if the Main Menu has already been loaded so the game doesn't constantly redraw it
	bool m_mainMenuLoaded		= false;
	//bool used to determine if the Game Over Screen has already been loaded so the game doesn't constantly redraw it
	bool m_gameOverScreenLoaded = false;

public:
	// Constructor
	Game();

//#######################################################
//    Function    :    checkWallCollisions()
//    Purpose     :    To check if the snake has collided with any of the arena walls
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Function is used to wrap detectWallCollision() so that it can be more cleanly implemented within checkCollisions()
//    See also    :    detectWallCollision(), checkCollisions()
//#######################################################
	void checkWallCollisions();

//#######################################################
//    Function    :    checkFruitCollisions()
//    Purpose     :    To check if the snake has collided with the fruit
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Serves as a wrapper for an if statment that compares the fruit's position with that of the snake head and executes code if true
//    See also    :    checkCollisions()
//#######################################################
	void checkFruitCollisions();

//#######################################################
//    Function    :    checkIsSnakeAlive()
//    Purpose     :    Used to check is the snake's isAlive variable is still equal to true
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Due to the setup of the game loop this function is used to change the gamestate if the snake collides with itself
//    See also    :    checkCollisions()
//#######################################################
	void checkIsSnakeAlive();

//#######################################################
//    Function    :    checkCollisions()
//    Purpose     :    To check is any collisions have occured within the current instance of the game loop
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Function is used to wrap the other collision functions so that they can be cleanly implemented. Also allows the ability to add or expand collison functionality
//    See also    :    checkWallCollisions(), checkFruitCollisions(), checkIsSnakeAlive()
//#######################################################
	void checkCollisions();

//#######################################################
//    Function    :    initializeLevel()
//    Purpose     :    Run one time functions when the gamestate has changed to set up the game level
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Also has functionality to reset elements of the level on game restart
//    See also    :    loadLevel()
//#######################################################
	void initializeLevel();

//#######################################################
//    Function    :    loadLevel()
//    Purpose     :    To wait for player input and then run initializeLevel()
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Function is a wrapper for an if statement that checks for player input
//    See also    :    initializeLevel()
//#######################################################
	void loadLevel();

	//#######################################################
//    Function    :    update()
//    Purpose     :    To update member variables or other elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    update is used to call all relevant member variable update functions within the game loop
//    See also    :    Member Variable update functions
//#######################################################
	void update();

//#######################################################
//    Function    :    render()
//    Purpose     :    To render(display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    render is used to call all relevant member variable render functions within the game loop
//    See also    :    Member Variable render functions
//#######################################################
	void render();

//#######################################################
//    Function    :    unrender()
//    Purpose     :    To unrender(remove from the display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    unrender render is used to call all relevant member variable unrender functions within the game loop
//    See also    :    Member Variable unrender functions
//#######################################################
	void unrender();

//#######################################################
//    Function    :    run()
//    Purpose     :    To run the Snake Game loop
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    run is called from within main.cpp and contains all logic to run the Snake Game
//    See also    :    
//#######################################################
	void run();
};


#endif