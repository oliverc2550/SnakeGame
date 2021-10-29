#ifndef SNAKESEGMENT_H
#define SNAKESEGMENT_H

#include "ColoredObject.h"
//-----------------------------------------------
// Class	: SnakeSegment
// Purpose	: To manage a Snake Segment object, snake segment serves as the base for the Snake
// Usage	:	SnakeSegment snakeSegment
//				snakeSegment.getPosition() const;
//				snakeSegment.setPosition();
//				snakeSegment.getCharacter() const;
//				snakeSegment.setCharacter();
//				snakeSegment.update();
//				snakeSegment.render();
//				snakeSegment.draw();
//				snakeSegment.moveTo();
//				
// See also	: GameObject, ColoredObject
//-----------------------------------------------
class SnakeSegment : public ColoredObject
{
private:


public:
	//Constructors and Destructor
	SnakeSegment();
	SnakeSegment( Vector2& position, int colorValue );
	virtual ~SnakeSegment();

//#######################################################
//    Function    :    moveTo()
//    Purpose     :    To move the current Snake Segment to the position of a different Snake Segment
//    Parameters  :    const SnakeSegment& previousSegment
//    Returns     :    void
//    Notes       :	   Used to primarily to move the tail segments along after one another
//    See also    :    relatedFunction()
//#######################################################
	void moveTo( const SnakeSegment& previousSegment );

	//#######################################################
	//    Function    :    update()
	//    Purpose     :    To update member variables or other elements of the class
	//    Parameters  :    None
	//    Returns     :    void
	//    Notes       :    update is a virtual function that is being overriden within this class implementation
	//    See also    :    ColoredObject::update()
	//#######################################################
	virtual void update() override;

	//#######################################################
	//    Function    :    render()
	//    Purpose     :    To render(display) specific member variables or other desired elements of the class
	//    Parameters  :    None
	//    Returns     :    void
	//    Notes       :    render is a virtual function that is being overriden within this class implementation
	//    See also    :    ColoredObject::render()
	//#######################################################
	virtual void render() override;

	//#######################################################
	//    Function    :    unrender()
	//    Purpose     :    To unrender(remove from the display) specific member variables or other desired elements of the class
	//    Parameters  :    None
	//    Returns     :    void
	//    Notes       :    unrender is a virtual function that is being overriden within this class implementation
	//    See also    :    ColoredObject::unrender()
	//#######################################################
	virtual void unrender() override;
};

#endif // !SNAKESEGMENT_H
