#ifndef GAME_H
#define GAME_H

#include "Fruit.h"
#include "Snake.h"

class Game
{
private:
	// Variables
	Snake m_snake;
	Fruit m_fruit;

public:
	// Constructor
	Game();
	void checkCollisions( );
	void update( );
	void render( );
	void run( );
};


#endif