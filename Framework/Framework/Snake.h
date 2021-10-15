#ifndef SNAKE_H
#define SNAKE_H

#include "Direction.h"
#include "SnakeSegment.h"

class Snake
{
private:
	bool m_isAlive;
	char m_segmentChar = 'S';
	int m_length = 1;
	Direction m_inputDirection;
	//TODO: create snake head and snake tail tail has multiple snake segments
	SnakeSegment m_segments[ 100 ]; //TODO: Remove magic number

public:
	Snake();
	Snake( int xPos, int yPos );
	~Snake();

	void checkInput();
	void move( Direction m_inputDirection );
	void update();
	void addSegments( );
	void detectSegments( );
	void drawSegments( );

	Vector2 getHeadPosition( );

	bool getIsAlive();
	void setIsAlive();
};

#endif // !SNAKE_H

