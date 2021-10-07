#ifndef GAME_H
#define GAME_H

#include "Snake.h"

class Game
{
private:
	// Variables
	Snake m_snake;

public:
	// Constructor
	Game();
	void run();
};


#endif