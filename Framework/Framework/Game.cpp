#include <iostream>
#include <string>
#include <windows.h>

#include "Game.h"
#include "Helpers.h"
#include "Vector2.h"

Game::Game() 
{
	//TODO: Move to helpers
	system( "MODE 125, 55 " );
	LPCSTR consoleName = TEXT( "Snake" );
	SetConsoleTitle( consoleName );
}

void Game::checkCollisions()
{
	if (m_snake.getHeadPosition() == m_fruit.getPosition())
	{
		m_snake.addSegments();
		m_fruit.deactivate();
		m_scoreManager.increaseLengthCounter();
		m_scoreManager.increaseScore();
	}
	if ( m_wallManager.checkWallCollisions( m_snake.getHeadPosition() ) == true )
	{
		m_snake.setIsAlive( false );
	}
}

void Game::update()
{
	checkCollisions();
	m_snake.update();
	m_fruit.update();
	m_scoreManager.update();
}

void Game::render()
{
	m_snake.render();
	m_fruit.render();
	m_scoreManager.render();
}

void Game::unrender()
{
	m_snake.unrender();
	m_fruit.unrender();
	m_scoreManager.unrender();
}

void Game::run()
{
	Maths::initializeRand();
	m_wallManager.render();
	m_fruit.setRandomPosition();
	
	// Game loop
	while( m_snake.getIsAlive() == true )
	{
		unrender();
		update();
		render();
	
		Sleep( 100 );
	}
	system( "cls" );
	std::cout << "snek ded";
}
