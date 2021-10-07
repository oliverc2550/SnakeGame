#include "Vector2.h"

Vector2::Vector2()
{
	m_x = 0;
	m_y = 0;
}

Vector2::Vector2( int x, int y )
{
	m_x = x;
	m_y = y;
}

int Vector2::getX()
{
	return m_x;
}

void Vector2::setX( int xValue )
{
	m_x = xValue;
}

int Vector2::getY()
{
	return m_y;
}

void Vector2::setY( int yValue )
{
	m_y = yValue;
}

Vector2 Vector2::getVector2( )
{
	return Vector2( getX(), getY());
}

void Vector2::setVector2( int x, int y )
{
	m_x = x;
	m_y = y;
}
