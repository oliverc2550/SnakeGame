#ifndef BRICK_H
#define BRICK_H

#include "ColoredObject.h"
//-----------------------------------------------
// Class	: Brick
// Purpose	: To manage a Brick object, used to build arena walls in Snake
// Usage	:	Brick brick
//				Brick.getPosition() const;
//				Brick.setPosition();
//				Brick.getCharacter() const;
//				Brick.setCharacter();
//				Brick.update();
//				Brick.render();
//				Brick.draw();
//				
// See also	: ColoredObject
//-----------------------------------------------
class Brick : public ColoredObject
{
private:

public:
	//Constructors and Destructor
	Brick();
	Brick( Vector2 position, int colorValue );
	virtual ~Brick();
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


#endif // !BRICK_H
