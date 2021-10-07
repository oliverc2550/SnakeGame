#ifndef SNAKE_H
#define SNAKE_H

#include "CharRenderer.h"
#include "GameObject.h"
#include "InputChecking.h"

class Snake : public GameObject, public CharRenderer
{
private:
	bool	m_isAlive;
	DirectionInputs m_inputDirection;

public:
	Snake();
	Snake( int xPos, int yPos );
	~Snake();

	void CheckInput();
	void Move( DirectionInputs m_inputDirection );
	virtual void Update() override;


	bool getIsAlive();
	void setIsAlive();
};

#endif // !SNAKE_H

