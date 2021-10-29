#ifndef SNAKE_H
#define SNAKE_H
//-----------------------------------------------
// Class	: Snake
// Purpose	: To manage a Snake Object
// Usage	:	Snake snake;
//				snake.checkInput();
// 				snake.move();
// 				snake.update();
// 				snake.render();
//				snake.unrender();
// 				snake.addSegments();
// 				snake.getHeadPosition() const;
// 				snake.getIsAlive() const;
// 				snake.setIsAlive();
// See also	: SnakeSegment
//-----------------------------------------------
#include "Direction.h"
#include "SnakeHead.h"
#include "SnakeTail.h"

class Snake
{
private:
	//Declared variable to store the bool value of m_isAlive, used to determine if the snake is alive and if the game should end
	bool		m_isAlive;
	//Instance of Direction enum
	Direction	m_inputDirection;
	//Instance of SnakeHead
	SnakeHead	m_head;
	//Instance of SnakeTail
	SnakeTail	m_tail;

public:
	//Constructors and Destructor
	Snake();
	Snake( Vector2 startingPosition );
	~Snake();

//#######################################################
//    Function    :    checkInput()
//    Purpose     :    To check what key the player has input and change m_inputDirection accordingly
//    Parameters  :    None
//    Returns     :    void
//    Notes       :
//    See also    :    
//#######################################################
	void checkInput();

	//#######################################################
	//    Function    :    move()
	//    Purpose     :    To adjust the position of m_head depending on the pressed directional input
	//    Parameters  :    Direction m_inputDirection
	//    Returns     :    void
	//    Notes       :	   Wraps a switch statement used to determine the change in the snakes position and update the various segment positions
	//    See also    :    SnakeTail::move
	//#######################################################
	void move( Direction m_inputDirection );

	//#######################################################
//    Function    :    update()
//    Purpose     :    To update member variables or other elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    update is used to call all relevant member variable update functions
//    See also    :    SnakeHead::update(), SnakeTail::update()
//#######################################################
	void update();

//#######################################################
//    Function    :    render()
//    Purpose     :    To render(display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    render is used to call all relevant member variable render functions
//    See also    :    SnakeHead::render(), SnakeTail::render()
//#######################################################
	void render();

//#######################################################
//    Function    :    unrender()
//    Purpose     :    To unrender(remove from the display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    unrender is used to call all relevant member variable unrender functions
//    See also    :    SnakeHead::unrender(), SnakeTail::unrender()
//#######################################################
	void unrender();

	//#######################################################
//    Function    :    drawTail()
//    Purpose     :    To get the current end segment of the tail and add a new segment behind it
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Used to wrap SnakeTail::addSegments() so that it can easily be called in other cpp files
//    See also    :    SnakeTail::addSegments()
//#######################################################
	void addSegments();

	//#######################################################
	//    Function    :    reset()
	//    Purpose     :    To reset the snake to it's default constructor values
	//    Parameters  :    None
	//    Returns     :    void
	//    Notes       :	   Used after the player chooses to restart the game so that the snake is in the same state as it was at the level initialization
	//    See also    :    
	//#######################################################
	void reset();

//#######################################################
//    Function    :    getHeadPosition()
//    Purpose     :    To return the value assigned to m_head.GetPosition(), so that it can be viewed outside this class
//    Parameters  :    None
//    Returns     :    Vector2 m_head.GetPosition()
//    Notes       :    Function is a const function, meaning data returned cannot be modifed. Only suitable for comparision/checking purposes
//    See also    :    
//#######################################################
	Vector2 getHeadPosition() const;

//#######################################################
//    Function    :    getCharacter()
//    Purpose     :    To return the value assigned to m_characterToRender, so that it can be viewed outside this class
//    Parameters  :    None
//    Returns     :    bool m_isAlive
//    Notes       :    Function is a const function, meaning data returned cannot be modifed. Only suitable for comparision/checking purposes
//    See also    :    
//#######################################################
	bool getIsAlive() const;

//#######################################################
//    Function    :    setIsAlive()
//    Purpose     :    To set or change the value assigned to m_isAlive, so that it can be changed outside this class
//    Parameters  :    bool isAlive
//    Returns     :    void
//    Notes       :    Function is used to modify a private/protected member variable from outside the class implementation
//    See also    :    
//#######################################################
	void setIsAlive( bool isAlive );
};

#endif // !SNAKE_H

