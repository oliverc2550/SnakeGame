#include <iostream>
#include <Windows.h>

#include "Settings.h"
#include "Snake.h"

Snake::Snake()
{
	m_isAlive = true;
	Vector2 startingPosition = Vector2( k_SnakeDefaultXPosition, k_SnakeDefaultYPosition );
	m_head.setPosition( startingPosition );
}

Snake::Snake( int xPos, int yPos )
{
	m_isAlive = true;
	Vector2 startingPosition = Vector2( xPos, yPos );
	//m_head.setCharacter( m_segmentChar );
	m_head.setPosition( startingPosition );
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

void Snake::move( Direction m_inputDirection )
{
	int xPos = m_head.getPosition().getX();
	int yPos = m_head.getPosition().getY();

	switch (m_inputDirection)
	{
		case Direction::Right:
			{
				xPos++;
			}
			break;

		case Direction::Left: 
			{
				xPos--;
			}
			break;

		case Direction::Up:
			{
				yPos--;
			}
			break;

		case Direction::Down:
			{
				yPos++;
			}
			break;
	}
	for (int i = m_length; i > 0; i--)
	{
		m_tail[ i ].moveTo( m_tail[ i - 1 ] );
	}
	m_tail[ 0 ].moveTo( m_head );
	m_head.setPosition( Vector2( xPos, yPos ) );
}

void Snake::update()
{
	checkInput();
	move( m_inputDirection );
	detectSegments();
}

void Snake::render()
{
	drawTail();
	m_head.render();
}

void Snake::unrender()
{
	eraseTail();
	m_head.unrender();
}

void Snake::addSegments()
{
	Vector2 endPosition = m_tail[ m_length ].getPosition();
	m_tail[ m_length ].setPosition( endPosition );
	m_length++;
}

void Snake::detectSegments()
{
	for( int i = 0; i < m_length - 1; i++ )
	{
		if ( m_head.getPosition() == m_tail[ i ].getPosition() )
		{
			m_isAlive = false;
		}
	}
}

void Snake::drawTail()
{
	for( int i = 0; i < m_length; i++)
	{
		m_tail[ i ].render();
	}
}

void Snake::eraseTail()
{
	for( int i = 0; i < m_length; i++ )
	{
		m_tail[ i ].unrender();
	}
}

Vector2 Snake::getHeadPosition() const
{
	return m_head.getPosition();
}

bool Snake::getIsAlive() const
{
	return m_isAlive;
}

void Snake::setIsAlive(bool isAlive)
{
	m_isAlive = isAlive;
}
