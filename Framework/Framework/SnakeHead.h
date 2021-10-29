#ifndef SNAKEHEAD_H
#define SNAKEHEAD_H

#include "SnakeSegment.h"
//-----------------------------------------------
// Class	: SnakeHead
// Purpose	: To manage a Snake Head object, Snake Head can expand on snake segment functionality
// Usage	:	SnakeHead snakeHead
//				snakeHead.getPosition() const;
//				snakeHead.setPosition();
//				snakeHead.getCharacter() const;
//				snakeHead.setCharacter();
//				snakeHead.update();
//				snakeHead.render();
//				snakeHead.draw();
//				snakeHead.moveTo();
//				
// See also	: GameObject, ColoredObject
//-----------------------------------------------
class SnakeHead : public SnakeSegment
{
private:


public:
	//Constructor and Destructor
	SnakeHead();
	SnakeHead( Vector2& position, int colorValue );
	virtual ~SnakeHead();


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
