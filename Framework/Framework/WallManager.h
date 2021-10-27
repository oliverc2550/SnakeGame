#ifndef WALLMANAGER_H
#define WALLMANAGER_H
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
#include "Brick.h"
#include "Settings.h"

class WallManager
{
private:
	Brick m_wallTop[ k_WallMaxHorizontalSize ];
	Brick m_wallBottom[ k_WallMaxHorizontalSize ];
	Brick m_wallLeft[ k_WallMaxVerticalSize ];
	Brick m_wallRight[ k_WallMaxVerticalSize ];

	void setWallPosition( Brick wallToSet[], int wallArraySize, bool isWallHorizontal, int startingXpos = 0, int startingYpos = 0 );
	void drawWall( Brick wallToDraw[], int wallArraySize );
	bool detectWallCollision( Brick wallToCheck[], int wallArraySize, Vector2 otherObject );
	void initializeWalls();

public:
	WallManager();
	~WallManager();

	void render();
	bool checkWallCollisions( Vector2 otherObject );
};

#endif // !WALLMANAGER_H
