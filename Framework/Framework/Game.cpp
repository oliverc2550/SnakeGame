#include <iostream>
#include <windows.h>

#include "Game.h"
#include "Helpers.h"
#include "Vector2.h"

Game::Game() 
{
}

void Game::checkCollisions( )
{
	if (m_snake.getHeadPosition() == m_fruit.getPosition())
	{
		m_snake.addSegments( );
		m_fruit.eaten( );
	}
}

void Game::update( )
{
	m_snake.update( );
	m_fruit.update( );
	checkCollisions( );
}

void Game::run()
{
	m_fruit.setPosition( Vector2( 25, 25 ) );

	// Game loop
	while( m_snake.getIsAlive() == true )
	{
		// Clear the screen
		system( "cls" );

		update( ); //TODO: seperate update and redner

		Sleep( 250 );

	}
	system( "cls" );
	std::cout << "snek ded";
}
