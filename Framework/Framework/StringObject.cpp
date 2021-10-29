#include "StringObject.h"

StringObject::StringObject()
{
}

StringObject::~StringObject()
{
}

//Virtual
void StringObject::update()
{
	GameObject::update();
}

void StringObject::render()
{
	draw();
}

void StringObject::draw()
{
	Rendering::drawString( m_stringToRender, m_position );
}

void StringObject::unrender()
{
	Rendering::eraseChar( m_position );
}