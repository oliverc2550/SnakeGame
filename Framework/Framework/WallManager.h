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
#include "CharObject.h"
#include "Settings.h"

class WallManager
{
private:
	const char m_kWallChar = '#';
	//TODO: create wall element class
	CharObject m_wallTop[ k_WallMaxHorizontalSize ];
	CharObject m_wallBottom[ k_WallMaxHorizontalSize ];
	CharObject m_wallLeft[ k_WallMaxVerticalSize ];
	CharObject m_wallRight[ k_WallMaxVerticalSize ];
	//Vector2 m_wallColliders[ kWallCollidersSize ];

	void setWallCharAndPosition( CharObject wallToSet[], int wallArraySize, bool isWallHorizontal, int startingXpos = 0, int startingYpos = 0 );
	void drawWall( CharObject wallToDraw[], int wallArraySize );
	bool detectWallCollision( CharObject wallToCheck[], int wallArraySize, Vector2 otherObject );
	void initializeWalls();

public:
	WallManager();
	~WallManager();

	void render();
	bool checkWallCollisions( Vector2 otherObject );
};

#endif // !WALLMANAGER_H
