#include "StringObject.h"

//Default Constructor
StringObject::StringObject()
{
	m_stringToRender = " ";
	m_position = Vector2();
}

//Virtual
StringObject::~StringObject()
{
}


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