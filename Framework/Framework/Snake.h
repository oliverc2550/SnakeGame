#ifndef SNAKE_H
#define SNAKE_H

#include "Direction.h"
#include "SnakeSegment.h"

class Snake
{
private:
	bool	m_isAlive;
	int m_length = 6;
	Direction m_inputDirection;
	SnakeSegment m_snakeSegments[ 6 ]; //TODO: Remove magic number

public:
	Snake();
	Snake( int xPos, int yPos );
	~Snake();

	void checkInput();
	void move( Direction m_inputDirection );
	void update();
	void drawSegments( );


	bool getIsAlive();
	void setIsAlive();
};

#endif // !SNAKE_H

