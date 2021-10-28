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
//				game.run();
//				game.update();
//				game.checkCollisions();
//				game.render();		
// See also	:
//-----------------------------------------------
class Game
{
private:
	enum class GameState
	{
		MainMenu,
		Playing,
		GameOver
	};
	// Variables
	GameState currentState = GameState::MainMenu;
	UIManager m_uiManager;
	Snake m_snake;
	Fruit m_fruit;
	ParticleGenerator m_particleGenerator;
	ScoreManager m_scoreManager;
	WallManager m_wallManager;

	bool m_mainMenuLoaded = false;
	bool m_gameOverScreenLoaded = false;

public:
	// Constructor
	Game();
	void checkWallCollisions();
	void checkFruitCollisions();
	void checkIsSnakeAlive();
	void checkCollisions();
	void initializeLevel();
	void loadLevel();
	void update();
	void render();
	void unrender();
	void run();
};


#endif