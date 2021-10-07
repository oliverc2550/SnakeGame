#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Vector2.h"

class GameObject
{
protected:
	Vector2 m_position;

public:
	Vector2 getPosition( ) { return Vector2( ); };
	void setPosition( Vector2 position ) { m_position = position; };

	virtual void Update( ) { };
};


#endif // !GAMEOBJECT_H

