#include <Windows.h>

#include "Settings.h"
#include "Snake.h"

Snake::Snake()
{
	m_isAlive = true;
	m_inputDirection = Direction::Null;
	Vector2 startingPosition = Vector2( k_SnakeDefaultXPosition, k_SnakeDefaultYPosition );
	m_head.setPosition( startingPosition );
}

Snake::Snake( Vector2 startingPosition )
{
	m_isAlive = true;
	m_inputDirection = Direction::Null;
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

	switch ( m_inputDirection )
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
	m_tail.move( m_head );
	m_head.setPosition( Vector2( xPos, yPos ) );
}

void Snake::update()
{
	checkInput();
	move( m_inputDirection );
	m_isAlive = m_tail.detectSegments( m_head );
}

void Snake::render()
{
	m_tail.render();
	m_head.render();
}

void Snake::unrender()
{
	m_tail.unrender();
	m_head.unrender();
}

void Snake::addSegments()
{
	m_tail.addSegments();
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
