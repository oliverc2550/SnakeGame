#include "Fruit.h"
#include "Settings.h"

Fruit::Fruit()
{
	m_position = Vector2();
	m_characterToRender = 'f';
	m_isActive = true;
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
	m_isActive = false;
}

void Fruit::reactivate()
{
	if( m_isActive == false )
	{
		setRandomPosition();
		m_isActive = true;
	}
}

void Fruit::setRandomPosition()
{
	m_position = Vector2( Maths::getRandomInt( kFruitMaxPosition ), Maths::getRandomInt( kFruitMaxPosition ) ); //TODO: Remove magic numbers Settings.H for const numbers
}

void Fruit::update()
{
	CharObject::update();
	reactivate();
}

void Fruit::render()
{
	CharObject::render();
}

void Fruit::unrender()
{
	CharObject::unrender();
}
