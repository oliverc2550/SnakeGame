#ifndef SNAKETAIL_H
#define SNAKETAIL_H
//-----------------------------------------------
// Class	: Snake
// Purpose	: To manage a Snake Tail Object, snake tail contains all the logic to move, add to and detect collisions with the snake tail
// Usage	:	SnakeTail snake;
//				snakeTail.move();
// 				snakeTail.render();
// 				snakeTail.unrender();
// 				snakeTail.addSegments();
// 				snakeTail.detectSegments();
// 				snakeTail.drawTail();
// 				snakeTail.eraseTail();
// See also	: SnakeSegment
//-----------------------------------------------
#include "Settings.h"
#include "SnakeSegment.h"

class SnakeTail
{
private:
	//Declared variable to store the int value of m_length, used to easily add segments to the end of the snake
	int m_length = 0;
	//Array of SnakeSegments used to store the displayed color and their position
	SnakeSegment m_tail[ k_SnakeTailMaxLength ];

public:
	//Constructor and Destructor
	SnakeTail();
	~SnakeTail();

//#######################################################
//    Function    :    move()
//    Purpose     :    To loop through and move all the SnakeSegments to the position of the segment "in front" of them
//    Parameters  :    const SnakeSegment& snakeHead
//    Returns     :    void
//    Notes       :	   Wraps a for loop that "negatively" loops through m_tail and once done sets element 0's position equal to the passed in segment
//    See also    :    
//#######################################################
	void move( const SnakeSegment& snakeHead );

//#######################################################
//    Function    :    render()
//    Purpose     :    To render(display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    render is used to wrap drawSegments so it can be more easily called in other cpp files
//    See also    :    drawSegments()
//#######################################################
	void render();

//#######################################################
//    Function    :    unrender()
//    Purpose     :    To unrender(remove from the display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    unrender is used to wrap drawSegments so it can be more easily called in other cpp files
//    See also    :    eraseSegments()
//#######################################################
	void unrender();

//#######################################################
//    Function    :    drawTail()
//    Purpose     :    To get the current end segment of the tail and add a new segment behind it
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   
//    See also    :    
//#######################################################
	void addSegments();

//#######################################################
//    Function    :    detectSegments()
//    Purpose     :    To loop through and check if any of the SnakeSegments in m_tail have the same position as the passed in segment
//    Parameters  :    const SnakeSegment& snakeHead
//    Returns     :    bool true/false
//    Notes       :	   Primarily used to check if the snake head has collided with the tail
//    See also    :    
//#######################################################
	bool detectSegments( const SnakeSegment& snakeHead );

//#######################################################
//    Function    :    drawTail()
//    Purpose     :    To loop through and draw all of the SnakeSegments of m_tail
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   
//    See also    :    
//#######################################################
	void drawTail();

//#######################################################
//    Function    :    drawTail()
//    Purpose     :    To loop through and erase all of the SnakeSegments of m_tail
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   
//    See also    :    
//#######################################################
	void eraseTail();

//#######################################################
//    Function    :    resetTailLength()
//    Purpose     :    To reset the value of m_length when the player restarts the game after losing/failing
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   
//    See also    :    
//#######################################################
	void resetTailLength();
};

#endif // !SNAKETAIL_H
