#include "Colors.h"
#include "Fruit.h"
#include "Settings.h"

//Default Constructor
Fruit::Fruit()
{
	m_position = Vector2();
	m_colorValue = k_red;
	m_isActive = true;
}

//Overloaded Constructor
Fruit::Fruit( Vector2 &position, int colorValue, bool isActive )
{
	m_position = position;
	m_colorValue = colorValue;
	m_isActive = isActive;
}

//Virtual
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
	m_position = Vector2( Maths::getRandomInt( k_FruitMaxXPosition ), Maths::getRandomInt( k_FruitMaxYPosition ) );
}

void Fruit::update()
{
	ColoredObject::update();
	reactivate();
}

void Fruit::render()
{
	ColoredObject::render();
}

void Fruit::unrender()
{
	ColoredObject::unrender();
}
