#include <iostream>
#include <Windows.h>

#include "Snake.h"

Snake::Snake()
{
	m_isAlive = true;
	//m_inputDirection = DirectionInputs::Right;
	m_snakeSegments[ 0 ] = SnakeSegment( );
	m_snakeSegments[ 1 ] = SnakeSegment( );
	m_snakeSegments[ 2 ] = SnakeSegment( );
	m_snakeSegments[ 3 ] = SnakeSegment( );
	m_snakeSegments[ 4 ] = SnakeSegment( );
	m_snakeSegments[ 5 ] = SnakeSegment( );
}

Snake::Snake( int xPos, int yPos )
{
	m_isAlive = true;
	//m_inputDirection = DirectionInputs::Right;
	Vector2 startingPosition = Vector2( xPos, yPos );
	m_snakeSegments[ 0 ] = SnakeSegment( startingPosition, 'S' );
	m_snakeSegments[ 1 ] = SnakeSegment( startingPosition, 'S' );
	m_snakeSegments[ 2 ] = SnakeSegment( startingPosition, 'S' );
	m_snakeSegments[ 3 ] = SnakeSegment( startingPosition, 'S' );
	m_snakeSegments[ 4 ] = SnakeSegment( startingPosition, 'S' );
	m_snakeSegments[ 5 ] = SnakeSegment( startingPosition, 'S' );
}

Snake::~Snake()
{
}

void Snake::checkInput()
{
	if ( GetAsyncKeyState( 0x41 ) & 1 )
	{
		m_inputDirection = Direction::Left;
	}
	if ( GetAsyncKeyState( 0x44 ) & 1 )
	{
		m_inputDirection = Direction::Right;
	}
	if ( GetAsyncKeyState( 0x57 ) & 1 )
	{
		m_inputDirection = Direction::Up;
	}
	if ( GetAsyncKeyState( 0x53 ) & 1 )
	{
		m_inputDirection = Direction::Down;
	}
}

void Snake::move( Direction m_inputDirection )
{
	int xPos = m_snakeSegments[ 0 ].getPosition( ).getX( );
	int yPos = m_snakeSegments[ 0 ].getPosition( ).getY();

	switch (m_inputDirection)
	{
		case Direction::Right:
			{
				std::cout << "D key pressed\n";
				xPos++;
				//m_snakeSegments[ 0 ].setPosition( Vector2( xPos, yPos ) );
				//currentPosition.setX( xPos );
			}
			break;

		case Direction::Left: 
			{
				std::cout << "A key pressed\n";
				xPos--;
				//m_snakeSegments[ 0 ].setPosition( Vector2( xPos, yPos ) );
				//currentPosition.setX( xPos );
			}
			break;

		case Direction::Up:
			{
				std::cout << "W key pressed\n";
				yPos--;
				//m_snakeSegments[ 0 ].setPosition( Vector2( xPos, yPos ) );
				//currentPosition.setY( yPos );
			}
			break;

		case Direction::Down:
			{
				std::cout << "S key pressed\n";
				yPos++;
				//m_snakeSegments[ 0 ].setPosition( Vector2( xPos, yPos ) );
				//currentPosition.setY( yPos );
			}
			break;
	}
	for (int i = m_length - 1; i > 0; i--)
	{
		m_snakeSegments[ i ].moveTo( m_snakeSegments[ i - 1 ] );
	}
	m_snakeSegments[ 0 ].setPosition( Vector2( xPos, yPos ) );
}

void Snake::update()
{
	checkInput( );
	move( m_inputDirection );
	drawSegments( );
}

void Snake::drawSegments( )
{
	for( int i = 0; i < m_length; i++)
	{
		m_snakeSegments[ i ].draw( );
	}
}

bool Snake::getIsAlive()
{
	return false;
}

void Snake::setIsAlive()
{
}
