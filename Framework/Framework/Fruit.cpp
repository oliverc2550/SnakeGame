#include "Fruit.h"

Fruit::Fruit()
{
	m_position = Vector2();
	m_characterToRender = 'f';
	m_isActive = false;
}

Fruit::Fruit( Vector2 &position, char character, bool isActive )
{
	m_position = position;
	m_characterToRender = character;
	m_isActive = isActive;
}

Fruit::~Fruit()
{

}

void Fruit::deactivate()
{
	m_isActive = true;
}

void Fruit::reactivate()
{
	if( m_isActive == true )
	{
		setRandomPosition();
		m_isActive = false;
	}
}

void Fruit::setRandomPosition()
{
	m_position = Vector2( Maths::getRandomInt( 30 ), Maths::getRandomInt( 30 ) ); //TODO: Remove magic numbers Settings.H for const numbers
}

void Fruit::update()
{
	reactivate();
}

void Fruit::render()
{
	CharObject::render();
}
