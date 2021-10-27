#include "ColoredObject.h"

//Virtual
void ColoredObject::update()
{
	GameObject::update();
}

void ColoredObject::render()
{
	draw();
}

void ColoredObject::draw()
{
	Rendering::drawColoredCell( m_colorValue, m_position );
}

void ColoredObject::unrender()
{
	Rendering::eraseColoredCell( m_position );
}