#include "Settings.h"
#include "SnakeTail.h"

SnakeTail::SnakeTail()
{
}

SnakeTail::~SnakeTail()
{
}

void SnakeTail::move( const SnakeSegment& snakeHead )
{
	for( int i = m_length; i > 0; i-- )
	{
		m_tail[ i ].moveTo( m_tail[ i - 1 ] );
	}
	m_tail[ 0 ].moveTo( snakeHead );
}

void SnakeTail::render()
{
	drawTail();
}

void SnakeTail::unrender()
{
	eraseTail();
}

void SnakeTail::addSegments()
{
	Vector2 endPosition = m_tail[ m_length ].getPosition();
	m_tail[ m_length ].setPosition( endPosition );
	m_length++;
}

bool SnakeTail::detectSegments( const SnakeSegment& snakeHead )
{
	for( int i = 0; i < m_length - 1; i++ )
	{
		if( snakeHead.getPosition() == m_tail[ i ].getPosition() )
		{
			return false;
		}
	}
	return true;
}

void SnakeTail::drawTail()
{
	for( int i = 0; i < m_length; i++ )
	{
		m_tail[ i ].render();
	}
}

void SnakeTail::eraseTail()
{
	for( int i = 0; i < m_length; i++ )
	{
		m_tail[ i ].unrender();
	}
}

void SnakeTail::resetTailLength()
{
	m_length = 0;
}
