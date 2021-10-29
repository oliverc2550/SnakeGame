#include "Colors.h"
#include "SnakeHead.h"

//Default Constructor
SnakeHead::SnakeHead()
{
	m_position = Vector2();
	m_colorValue = k_green;
}

//Overloaded Constructor
SnakeHead::SnakeHead( Vector2& position, int colorValue )
{
	m_position = position;
	m_colorValue = colorValue;
}

//Virtual
SnakeHead::~SnakeHead()
{

}

void SnakeHead::update()
{
	SnakeSegment::update();
}

void SnakeHead::render()
{
	SnakeSegment::render();
}

void SnakeHead::unrender()
{
	SnakeSegment::unrender();
}