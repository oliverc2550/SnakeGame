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
	//TODO: create snake head and snake tail tail has multiple snake segments
	CharObject m_wallTop[ kWallMaxHorizontalSize ];
	CharObject m_wallBottom[ kWallMaxHorizontalSize ];
	CharObject m_wallLeft[ kWallMaxVerticalSize ];
	CharObject m_wallRight[ kWallMaxVerticalSize ];
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
