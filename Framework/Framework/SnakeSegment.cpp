#include "Colors.h"
#include "SnakeSegment.h"

//Default Constructor
SnakeSegment::SnakeSegment()
{
	m_position = Vector2();
	m_colorValue = k_lightGreen;
}

//Overloaded Constructor
SnakeSegment::SnakeSegment( Vector2 &position, int colorValue )
{
	m_position = position;
	m_colorValue = colorValue;
}

//Virtual
SnakeSegment::~SnakeSegment()
{

}

void SnakeSegment::moveTo( const SnakeSegment& previousSegment )
{
	setPosition( previousSegment.getPosition() );
}

void SnakeSegment::update()
{
	ColoredObject::update();
}

void SnakeSegment::render()
{
	ColoredObject::render();
}

void SnakeSegment::unrender()
{
	ColoredObject::unrender();
}