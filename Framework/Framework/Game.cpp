#include <iostream>
#include <windows.h>

#include "Game.h"
#include "Helpers.h"
#include "Vector2.h"

Game::Game() 
{
}

void Game::run()
{
	//int xpos = 0;
	//m_snake.setPosition( 20, 20 );

	// Game loop
	while( true )
	{
		// Clear the screen
		system( "cls" );

		m_snake.Update();
		//drawChar( 'S', Vector2(xpos, 20) );

		//m_snake.move( )
		//update();
		//render();

		Sleep( 1000 );

		//xpos++;
	}
}
