#include <Windows.h>

#include "Helpers.h"
#include "Snake.h"

Snake::Snake()
{
	m_isAlive = true;
	m_snakeChar = 'S';
	//m_moveDirection = Vector2( 0, 0 );
	m_position = Vector2( 0, 0 );
	drawChar( m_snakeChar, m_position );
}

Snake::Snake( int xPos, int yPos )
{
	m_isAlive = true;
	m_snakeChar = 'S';
	//m_moveDirection = Vector2(0, 0);
	m_position = Vector2( xPos, yPos );
	drawChar( m_snakeChar, m_position );
}

Snake::~Snake()
{
}

void Snake::CheckInput()
{
	if ( GetAsyncKeyState( 0x41 ) & 0x8000 )
	{
		m_inputDirection = DirectionInputs::Left;
		//m_moveDirection.setY(0);
		//m_moveDirection.setX(-1);
	}
	if ( GetAsyncKeyState( 0x44 ) & 0x8000 )
	{
		m_inputDirection = DirectionInputs::Right;
		//m_moveDirection.setY(0);
		//m_moveDirection.setX(1);
	}
	if ( GetAsyncKeyState( 0x57 ) & 0x8000 )
	{
		m_inputDirection = DirectionInputs::Up;
		//m_moveDirection.setX(0);
		//m_moveDirection.setY(-1);
	}
	if ( GetAsyncKeyState( 0x53 ) & 0x8000 )
	{
		m_inputDirection = DirectionInputs::Down;
		//m_moveDirection.setX(0);
		//m_moveDirection.setY(1);
	}
}

void Snake::Move( DirectionInputs m_inputDirection )
{
	int xPos = m_position.getX();
	int yPos = m_position.getY();

	//if (moveDirection.getX() == 1)
	//{
	//	xPos++;
	//	m_position.setX(xPos);
	//}
	//else if (moveDirection.getX() == -1)
	//{
	//	xPos--;
	//	m_position.setX(xPos);
	//}
	//else if (moveDirection.getY() == 1)
	//{
	//	yPos++;
	//	m_position.setY(yPos);
	//}
	//else if (moveDirection.getY() == -1)
	//{
	//	yPos--;
	//	m_position.setY(yPos);
	//}

	switch (m_inputDirection)
	{
		case DirectionInputs::Right:
			{
				xPos++;
				m_position.setX( xPos );
			}
			break;

		case DirectionInputs::Left: 
			{
				xPos--;
				m_position.setX( xPos );
			}
			break;

		case DirectionInputs::Up:
			{
				yPos++;
				m_position.setY( yPos );
			}
			break;

		case DirectionInputs::Down:
			{
				yPos--;
				m_position.setY( yPos );
			}
			break;
	}

	drawChar( m_snakeChar, m_position );
}


void Snake::Update()
{
	CheckInput( );
	Move( m_inputDirection );
}

Vector2 Snake::getMoveDirection()
{
	return Vector2();
}

void Snake::setMoveDirection(Vector2 direction)
{
}

bool Snake::getIsAlive()
{
	return false;
}

void Snake::setIsAlive()
{
}
