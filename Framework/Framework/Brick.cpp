#include "Brick.h"
#include "Colors.h"

//Default Constructor
Brick::Brick()
{
	m_position = Vector2();
	m_colorValue = k_blue;
}

//Overloaded Constructor
Brick::Brick( Vector2 position, int colorValue )
{
	m_position = position;
	m_colorValue = colorValue;
}

//Virtual
Brick::~Brick()
{
}


void Brick::update()
{
	ColoredObject::update();
}


void Brick::render()
{
	ColoredObject::render();
}


void Brick::unrender()
{
	ColoredObject::unrender();
}
