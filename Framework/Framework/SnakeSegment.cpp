#include "SnakeSegment.h"

SnakeSegment::SnakeSegment( )
{
	m_position = Vector2( );
	m_characterToRender = 'S';
}

SnakeSegment::SnakeSegment( Vector2 &position, char character )
{
	m_position = position;
	m_characterToRender = character;
}

SnakeSegment::~SnakeSegment( )
{

}

void SnakeSegment::moveTo( SnakeSegment previousSegment )
{
	setPosition( previousSegment.getPosition( ) );
}

void SnakeSegment::update( )
{
	CharObject::update( );
}
