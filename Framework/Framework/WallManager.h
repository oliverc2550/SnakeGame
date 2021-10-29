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
	//Arrays of Bricks used to store the displayed Color and their position
	Brick m_wallTop[ k_WallMaxHorizontalSize ];
	Brick m_wallBottom[ k_WallMaxHorizontalSize ];
	Brick m_wallLeft[ k_WallMaxVerticalSize ];
	Brick m_wallRight[ k_WallMaxVerticalSize ];

//#######################################################
//    Function    :    setWallPosition()
//    Purpose     :    To set the position of all the objects within the wall array
//    Parameters  :    Brick wallToSet[], int wallArraySize, bool isWallHorizontal, int startingXpos = 0, int startingYpos = 0
//    Returns     :    void
//    Notes       :	   setWallPosition() has optional parameters so that the function can be flexible in where it positions the wall elements
//    See also    :    
//#######################################################
	void setWallPosition( Brick wallToSet[], int wallArraySize, bool isWallHorizontal, int startingXpos = 0, int startingYpos = 0 );

//#######################################################
//    Function    :    drawWall()
//    Purpose     :    To loop through and draw all of the bricks within a wall
//    Parameters  :    Brick wallToDraw[], int wallArraySize
//    Returns     :    void
//    Notes       :	   Brick array and array size are passed in so that this function can be flexible in the walls it can draw
//    See also    :    
//#######################################################
	void drawWall( Brick wallToDraw[], int wallArraySize );

//#######################################################
//    Function    :    detectWallCollision
//    Purpose     :    To loop through and check if otherObject is in the same position as any of the array elements
//    Parameters  :    Brick wallToCheck[], int wallArraySize, Vector2 otherObject
//    Returns     :    bool true/false
//    Notes       :	   Brick array and array size are passed in so that this function can be used to check any array of bricks
//    See also    :    
//#######################################################
	bool detectWallCollision( Brick wallToCheck[], int wallArraySize, Vector2 otherObject );

//#######################################################
//    Function    :    initializeText()
//    Purpose     :    To wrap setWallPosition and be called from with the constructor so that the positon of the walls is assigned from declaration
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   
//    See also    :    
//#######################################################
	void initializeWalls();

public:
	//Constructor and Destrcutor
	WallManager();
	~WallManager();

//#######################################################
//    Function    :    render()
//    Purpose     :    To render(display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    render is used to call all relevant member variable render functions within the game loop
//    See also    :    
//#######################################################
	void render();

//#######################################################
//    Function    :    checkWallCollisions()
//    Purpose     :    To check if another object with a Vector2 position has collided with any of the arena walls
//    Parameters  :    Vector2 otherObject
//    Returns     :    bool true/false
//    Notes       :	   Function is used to wrap detectWallCollision() so that it can be more cleanly implemented in other cpp files
//    See also    :    detectWallCollision()
//#######################################################
	bool checkWallCollisions( Vector2 otherObject );
};

#endif // !WALLMANAGER_H
