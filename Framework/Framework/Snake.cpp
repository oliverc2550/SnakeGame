#include <iostream>
#include <Windows.h>

#include "Snake.h"

Snake::Snake()
{
	m_isAlive = true;
	m_characterToRender = 'S';
	//m_inputDirection = DirectionInputs::Right;
	m_position = Vector2( 0, 0 );
	Render( m_characterToRender, m_position );
}

Snake::Snake( int xPos, int yPos )
{
	m_isAlive = true;
	m_characterToRender = 'S';
	//m_inputDirection = DirectionInputs::Right;
	m_position = Vector2( xPos, yPos );
	Render( m_characterToRender, m_position );
}

Snake::~Snake()
{
}

void Snake::CheckInput()
{
	if ( GetAsyncKeyState( 0x41 ) & 1 )
	{
		m_inputDirection = DirectionInputs::Left;
	}
	if ( GetAsyncKeyState( 0x44 ) & 1 )
	{
		m_inputDirection = DirectionInputs::Right;
	}
	if ( GetAsyncKeyState( 0x57 ) & 1 )
	{
		m_inputDirection = DirectionInputs::Up;
	}
	if ( GetAsyncKeyState( 0x53 ) & 1 )
	{
		m_inputDirection = DirectionInputs::Down;
	}
}

void Snake::Move( DirectionInputs m_inputDirection )
{
	int xPos = m_position.getX();
	int yPos = m_position.getY();

	switch (m_inputDirection)
	{
		case DirectionInputs::Right:
			{
				std::cout << "D key pressed\n";
				xPos++;
				m_position.setX( xPos );
			}
			break;

		case DirectionInputs::Left: 
			{
				std::cout << "A key pressed\n";
				xPos--;
				m_position.setX( xPos );
			}
			break;

		case DirectionInputs::Up:
			{
				std::cout << "W key pressed\n";
				yPos--;
				m_position.setY( yPos );
			}
			break;

		case DirectionInputs::Down:
			{
				std::cout << "S key pressed\n";
				yPos++;
				m_position.setY( yPos );
			}
			break;
	}
}

void Snake::Update()
{
	GameObject::Update( );
	CheckInput( );
	Move( m_inputDirection );
	Render( m_characterToRender, m_position );
}

bool Snake::getIsAlive()
{
	return false;
}

void Snake::setIsAlive()
{
}
