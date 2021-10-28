#ifndef UISCREEN_H
#define UISCREEN_H
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

class UIScreen
{
private:
	
public:
	virtual void setTextAndPosition() {};
	virtual void drawText() {};
	virtual void initializeText() { setTextAndPosition(); };
	virtual void render() { drawText();};
};

#endif // !MAINMENU_H
