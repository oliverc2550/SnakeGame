#include "Colors.h"
#include "SnakeSegment.h"

SnakeSegment::SnakeSegment()
{
	m_position = Vector2();
	m_colorValue = k_lightGreen;
}

SnakeSegment::SnakeSegment( Vector2 &position, int colorValue )
{
	m_position = position;
	m_colorValue = colorValue;
}

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