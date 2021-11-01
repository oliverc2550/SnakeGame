#include <windows.h>

#include "Audio.h"
#include "Game.h"
#include "Helpers.h"
#include "Vector2.h"

//Default Constructor
Game::Game() 
{
	GameWindow::initializeGameWindow();
}

void Game::checkWallCollisions()
{
	if( m_wallManager.checkWallCollisions( m_snake.getHeadPosition() ) )
	{
		currentState = GameState::GameOver;
	}
}

void Game::checkFruitCollisions()
{
	//Checks if the snake and fruit have the same position and then runs the code to manage what happens when the player collects the fruit
	if( m_snake.getHeadPosition() == m_fruit.getPosition() )
	{
		playSound( Sounds::Pickup );
		m_snake.addSegments();
		m_fruit.deactivate();
		m_particleGenerator.activate( m_fruit );
		m_scoreManager.increaseLengthCounter();
		m_scoreManager.increaseScore();
	}
}

void Game::checkIsSnakeAlive()
{
	if( !m_snake.getIsAlive() )
	{
		currentState = GameState::GameOver;
	}
}

void Game::checkCollisions()
{
	checkWallCollisions();
	checkFruitCollisions();
	checkIsSnakeAlive();
}

void Game::initializeLevel()
{
	//Runs code that only needs to be run once at the start of the level

	m_wallManager.render();
	m_fruit.setRandomPosition();
	if( m_gameOverScreenLoaded )
	{
		m_snake.reset();
		m_scoreManager.resetScore();
		m_gameOverScreenLoaded = false;
	}
	stopSound();
	currentState = GameState::Playing;
}

void Game::loadLevel()
{
	if( Keyboard::checkButton( VK_RETURN ) )
	{
		system( "cls" );
		initializeLevel();
	}
}

void Game::update()
{
	m_snake.update();
	checkCollisions();
	m_fruit.update();
	m_scoreManager.update();
}

void Game::render()
{
	m_snake.render();
	m_fruit.render();
	m_particleGenerator.render();
	m_scoreManager.render();
}

void Game::unrender()
{
	m_snake.unrender();
	m_fruit.unrender();
	m_particleGenerator.unrender();
	m_scoreManager.unrender();
}

void Game::run()
{
	Maths::initializeRand();

	//Gameloop
	while( true )
	{
		//Switches what the game does based on the gamestate
		switch( currentState )
		{
			//Main Menu Loop
			case GameState::MainMenu:
				{
					if( !m_mainMenuLoaded )
					{
						playSound( Sounds::BackgroundMusic );
						m_uiManager.loadMainMenu();
						m_mainMenuLoaded = true;
					}
					loadLevel();
				}
				break;

			//Game Play Loop
			case GameState::Playing:
				{
					unrender();
					update();
					render();

					Sleep( k_gameSleepRate );
				}
				break;
			
			//Game Over Loop
			case GameState::GameOver:
				{
					if( !m_gameOverScreenLoaded )
					{
						system( "cls" );
						playSound( Sounds::BackgroundMusic );
						m_uiManager.loadGameOverScreen();
						m_gameOverScreenLoaded = true;
					}
					loadLevel();
				}
				break;
		}
	}
}
