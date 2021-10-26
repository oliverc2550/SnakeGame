#ifndef SNAKE_H
#define SNAKE_H
//-----------------------------------------------
// Class	: Snake
// Purpose	: To manage a Snake Object
// Usage	:	Snake snake;
//				snake.checkInput();
// 				snake.move();
// 				snake.update();
// 				snake.render();
// 				snake.addSegments();
// 				snake.detectSegments();
// 				snake.drawSegments();
// 				snake.getHeadPosition() const;
// 				snake.getIsAlive() const;
// 				snake.setIsAlive();
// See also	: SnakeSegment
//-----------------------------------------------
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
	void render();
	void unrender();
	void addSegments();
	void detectSegments();
	void drawSegments();
	void eraseSegments();

	Vector2 getHeadPosition() const;

	bool getIsAlive() const;
	void setIsAlive( bool isAlive );
};

#endif // !SNAKE_H

