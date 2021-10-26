#ifndef GAME_H
#define GAME_H

#include "Fruit.h"
#include "ScoreManager.h"
#include "Snake.h"
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
	// Variables
	Snake m_snake;
	Fruit m_fruit;
	ScoreManager m_scoreManager;
	WallManager m_wallManager;

public:
	// Constructor
	Game();
	void checkCollisions();
	void update();
	void render();
	void unrender();
	void run();
};


#endif