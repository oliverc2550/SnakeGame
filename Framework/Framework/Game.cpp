#include <iostream>
#include <windows.h>

#include "Game.h"
#include "Helpers.h"
#include "Vector2.h"

Game::Game() 
{
}

void Game::checkCollisions()
{
	if (m_snake.getHeadPosition() == m_fruit.getPosition())
	{
		m_snake.addSegments();
		m_fruit.deactivate();
	}
}

void Game::update()
{
	m_snake.update();
	m_fruit.update();
	checkCollisions();
}

void Game::render()
{
	m_snake.render();
	m_fruit.render();
}

void Game::run()
{
	Maths::initializeRand();
	m_fruit.setRandomPosition();

	// Game loop
	while( m_snake.getIsAlive() == true )
	{
		// Clear the screen
		system( "cls" );

		update();
		render();

		Sleep( 250 );

	}
	system( "cls" );
	std::cout << "snek ded";
}
