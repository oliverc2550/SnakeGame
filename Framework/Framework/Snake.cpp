#include <iostream>
#include <Windows.h>

#include "Snake.h"

Snake::Snake()
{
	m_isAlive = true;
	m_segments[ 0 ] = SnakeSegment(); //TODO: remove
}

Snake::Snake( int xPos, int yPos )
{
	m_isAlive = true;
	Vector2 startingPosition = Vector2( xPos, yPos );
	m_segments[ 0 ] = SnakeSegment( startingPosition, m_segmentChar ); //TODO: use set position and set char instead of overloaded constructer
}

Snake::~Snake()
{
}

void Snake::checkInput()
{
	if ( Keyboard::checkButton( 'a' ) )
	{
		if( m_inputDirection != Direction::Right )
		{
			m_inputDirection = Direction::Left;
		}
	}
	if ( Keyboard::checkButton( 'd' ) )
	{
		if( m_inputDirection != Direction::Left )
		{
			m_inputDirection = Direction::Right;
		}
	}
	if ( Keyboard::checkButton( 'w' ) )
	{
		if( m_inputDirection != Direction::Down )
		{
			m_inputDirection = Direction::Up;
		}
	}
	if ( Keyboard::checkButton( 's' ) )
	{
		if( m_inputDirection != Direction::Up )
		{
			m_inputDirection = Direction::Down;
		}
	}
}

void Snake::move( Direction m_inputDirection, float deltaTime )
{
	int xPos = m_segments[ 0 ].getPosition().getX();
	int yPos = m_segments[ 0 ].getPosition().getY();

	switch (m_inputDirection)
	{
		case Direction::Right:
			{
				xPos += ( m_moveSpeed * deltaTime ) + 0.5f;
			}
			break;

		case Direction::Left: 
			{
				xPos-= ( m_moveSpeed * deltaTime ) + 0.5f;
			}
			break;

		case Direction::Up:
			{
				yPos-= ( m_moveSpeed * deltaTime ) + 0.5f;
			}
			break;

		case Direction::Down:
			{
				yPos+= ( m_moveSpeed * deltaTime ) + 0.5f;
			}
			break;
	}
	for (int i = m_length - 1; i > 0; i--)
	{
		m_segments[ i ].moveTo( m_segments[ i - 1 ] );
	}
	m_segments[ 0 ].setPosition( Vector2( xPos, yPos ) );
}

void Snake::update( float deltaTime)
{
	checkInput();
	move( m_inputDirection, deltaTime );
	detectSegments();
	drawSegments();
}

void Snake::render()
{
	drawSegments();
}

void Snake::unrender()
{
	eraseSegments();
}

void Snake::addSegments()
{
	Vector2 endPosition = m_segments[ m_length - 1 ].getPosition();
	m_segments[ m_length ] = SnakeSegment( endPosition, m_segmentChar );
	m_length++;
}

void Snake::detectSegments()
{
	for( int i = 1; i < m_length - 1; i++ )
	{
		if ( m_segments[ 0 ].getPosition() == m_segments[ i ].getPosition() )
		{
			m_isAlive = false;
		}
	}
}

void Snake::drawSegments()
{
	for( int i = 0; i < m_length; i++)
	{
		m_segments[ i ].render();
	}
}

void Snake::eraseSegments()
{
	for( int i = 0; i < m_length; i++ )
	{
		m_segments[ i ].unrender();
	}
}

Vector2 Snake::getHeadPosition() const
{
	return m_segments[ 0 ].getPosition();
}

bool Snake::getIsAlive() const
{
	return m_isAlive;
}

void Snake::setIsAlive()
{
}
