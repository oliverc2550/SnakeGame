#include "Colors.h"
#include "SnakeHead.h"

SnakeHead::SnakeHead()
{
	m_position = Vector2();
	m_colorValue = k_green;
}

SnakeHead::SnakeHead( Vector2& position, int colorValue )
{
	m_position = position;
	m_colorValue = colorValue;
}

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