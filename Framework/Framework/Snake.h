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
#include "SnakeHead.h"
#include "SnakeTail.h"

class Snake
{
private:
	bool m_isAlive;
	Direction m_inputDirection;
	SnakeHead m_head;
	SnakeTail m_tail;

public:
	Snake();
	Snake( Vector2 startingPosition );
	~Snake();

	void checkInput();
	void move( Direction m_inputDirection );
	void update();
	void render();
	void unrender();
	void addSegments();

	Vector2 getHeadPosition() const;

	bool getIsAlive() const;
	void setIsAlive( bool isAlive );
};

#endif // !SNAKE_H

