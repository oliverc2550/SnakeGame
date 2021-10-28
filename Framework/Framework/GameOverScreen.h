#ifndef GAMEOVERSCREEN_H
#define GAMEOVERSCREEN_H
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
#include "StringObject.h"
#include "Settings.h"
#include "UIScreen.h"

class GameOverScreen : public UIScreen
{
private:
	StringObject m_gameOverText[ k_gameOverLinesOfText ];

	virtual void setTextAndPosition() override;
	virtual void drawText() override;
	virtual void initializeText() override;

public:
	GameOverScreen();
	~GameOverScreen();

	virtual void render() override;
};

#endif // !GAMEOVERSCREEN_H
