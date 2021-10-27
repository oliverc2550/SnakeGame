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
#include "Settings.h"
#include "SnakeSegment.h"

class Snake
{
private:
	bool m_isAlive;
	char m_segmentChar = 'S';
	int m_length = 0;
	Direction m_inputDirection;
	SnakeSegment m_head;
	SnakeSegment m_tail[ k_SnakeTailMaxLength ];

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
	void drawTail();
	void eraseTail();

	Vector2 getHeadPosition() const;

	bool getIsAlive() const;
	void setIsAlive( bool isAlive );
};

#endif // !SNAKE_H

