#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Vector2.h"
//-----------------------------------------------
// Class	: GameObject
// Purpose	: To manage a Game Object
// Usage	:	GameObject gameObject
//				gameObject.getPosition() const;
//				gameObject.setPosition();
//				gameObject.update();
// See also	:
//-----------------------------------------------
class GameObject
{
protected:
	Vector2 m_position;

public:
	Vector2 getPosition() const { return m_position; };
	void setPosition( Vector2 position ) { m_position = position; };

	virtual void update( float deltaTime ) {};
};


#endif // !GAMEOBJECT_H

