#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Vector2.h"
//-----------------------------------------------
// Class	: GameObject
// Purpose	: To manage a Game Object, a game object is any object with the game that has at least a position assigned to it
// Usage	:	GameObject gameObject
//				gameObject.getPosition() const;
//				gameObject.setPosition();
//				gameObject.update();
// See also	:
//-----------------------------------------------
class GameObject
{
protected:
	//Declared variable to store the Vector2 position data
	Vector2 m_position;

public:
//#######################################################
//    Function    :    getPosition()
//    Purpose     :    To return the value assigned to m_position, so that it can be viewed outside this class
//    Parameters  :    None
//    Returns     :    Vector2 m_position
//    Notes       :    Function is a const function, meaning data returned cannot be modifed. Only suitable for comparision/checking purposes
//    See also    :    
//#######################################################
	Vector2 getPosition() const { return m_position; };

//#######################################################
//    Function    :    setPosition()
//    Purpose     :    To set or change the value assigned to m_position, so that it can be changed outside this class
//    Parameters  :    Vector2 position
//    Returns     :    void
//    Notes       :    Function is used to modify a private/protected member variable from outside the class implementation
//    See also    :    
//#######################################################
	void setPosition( Vector2 position ) { m_position = position; };

//#######################################################
//    Function    :    update()
//    Purpose     :    To update member variables or other elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    update is a virtual function that can overriden from inheriting classes
//    See also    :    
//#######################################################
	virtual void update() {};
};


#endif // !GAMEOBJECT_H

