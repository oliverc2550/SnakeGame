#ifndef SNAKE_H
#define SNAKE_H

#include "InputChecking.h"
#include "Vector2.h"

class Snake 
{
private:
	bool	m_isAlive;
	char	m_snakeChar;
	DirectionInputs m_inputDirection;
	Vector2 m_position;

public:
	Snake();
	Snake( int xPos, int yPos );
	~Snake();

	void CheckInput();
	void Move( DirectionInputs m_inputDirection );
	void Update();

	Vector2 getMoveDirection();
	void setMoveDirection( Vector2 direction );

	bool getIsAlive();
	void setIsAlive();
};

#endif // !SNAKE_H

