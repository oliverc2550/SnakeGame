#ifndef MAINMENU_H
#define MAINMENU_H
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

class MainMenu : public UIScreen
{
private:
	StringObject m_mainMenuText[ k_MainMenuLinesOfText ];

	virtual void setTextAndPosition() override;
	virtual void drawText() override;
	virtual void initializeText() override;

public:
	MainMenu();
	~MainMenu();

	virtual void render() override;
};

#endif // !MAINMENU_H
