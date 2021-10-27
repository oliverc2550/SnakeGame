#ifndef SNAKETAIL_H
#define SNAKETAIL_H
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
#include "Settings.h"
#include "SnakeSegment.h"

class SnakeTail
{
private:
	int m_length = 0;
	SnakeSegment m_tail[ k_SnakeTailMaxLength ];

public:
	SnakeTail();
	~SnakeTail();

	void move( const SnakeSegment& snakeHead );
	void render();
	void unrender();
	void addSegments();
	bool detectSegments( const SnakeSegment& snakeHead );
	void drawTail();
	void eraseTail();
};

#endif // !SNAKETAIL_H
