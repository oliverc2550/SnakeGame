#ifndef FRUIT_H
#define FRUIT_H

#include "ColoredObject.h"
//-----------------------------------------------
// Class	: Fruit
// Purpose	: To manage a Fruit object, Fruit is what the player collects to increase score and the length of the snake
// Usage	:	Fruit fruit
//				fruit.getPosition() const;
//				fruit.setPosition();
//				fruit.getColorValue() const;
//				fruit.setColorValue();
//				fruit.update();
//				fruit.render();
//				fruit.draw();
//				fruit.deactivate();
//				fruit.reactivate();
//				fruit.setRandomPosition();			
// See also	: GameObject, ColoredObject
//-----------------------------------------------
class Fruit : public ColoredObject
{
private:
	//Declared variable to store the bool value of m_isActive, used to determine if the fruit is active
	bool m_isActive;

public:
	//Constructors and Destructor
	Fruit();
	Fruit( Vector2& position, int colorValue, bool isActive );
	virtual ~Fruit();

//#######################################################
//    Function    :    deactivate()
//    Purpose     :    To deactivate the fruit after the snake has collided with it
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    Function is used to toggle bool m_isActive so that reactivate can be called in a subsequent loop
//    See also    :    reactivate()
//#######################################################
	void deactivate();

//#######################################################
//    Function    :    reactivate()
//    Purpose     :    To reactivate the fruit after it has been deactivated
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    SetRandomPosition is called within so that when the fruit reactivates it is "spawned" in a random position within the arena
//    See also    :    deactivate(), setRandomPosition()
//#######################################################
	void reactivate();

	//#######################################################
//    Function    :    setRandomPosition()
//    Purpose     :    To set the fruit's position to a random vector2 within a defined range
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    Sets the position of the fruit to a random value within a defined range to provide challenge to the player
//    See also    :    reactivate(), getRandomInt()
//#######################################################
	void setRandomPosition();

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

#endif // !FRUIT_H