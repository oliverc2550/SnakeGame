#ifndef UIMANAGER_H
#define UIMANAGER_H
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
#include "GameOverScreen.h"
#include "MainMenu.h"

class UIManager
{
private:
	MainMenu m_mainMenu;
	GameOverScreen m_gameOverScreen;

public:
	void loadMainMenu();
	void loadGameOverScreen();

};

#endif // !UIMANAGER_H
