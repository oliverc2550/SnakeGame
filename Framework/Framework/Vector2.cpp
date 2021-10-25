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

bool Vector2::operator==( Vector2 vector2 )
{
	return ( m_x == vector2.getX() && m_y == vector2.getY() );
}

int Vector2::getX() const
{
	return m_x;
}

void Vector2::setX( int xValue )
{
	m_x = xValue;
}

int Vector2::getY() const
{
	return m_y;
}

void Vector2::setY( int yValue )
{
	m_y = yValue;
}

void Vector2::set( int x, int y )
{
	m_x = x;
	m_y = y;
}
