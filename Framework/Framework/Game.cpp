#include <iostream>
#include <windows.h>

#include "Game.h"
#include "Helpers.h"
#include "Timer.h"
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

void Game::update(float deltaTime)
{
	m_snake.update( deltaTime );
	m_fruit.update( deltaTime );
	checkCollisions();
}

void Game::render()
{
	m_snake.render();
	m_fruit.render();
}

void Game::unrender()
{
	m_snake.unrender();
	m_fruit.unrender();
}

void Game::run()
{
	Timer timer;
	Maths::initializeRand();
	m_fruit.setRandomPosition();

	// Game loop
	while( m_snake.getIsAlive() == true )
	{
		float deltaTime = timer.getElapsedSeconds();
		timer.start();

		unrender();
		update(deltaTime);
		render();

		//Sleep( 250 );
	}
	system( "cls" );
	std::cout << "snek ded";
}
