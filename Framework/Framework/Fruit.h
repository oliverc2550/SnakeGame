#ifndef FRUIT_H
#define FRUIT_H

#include "CharObject.h"

class Fruit : public CharObject
{
private:
	bool m_hasBeenEaten;

public:
	Fruit( );
	Fruit( Vector2 &position, char character, bool hasBeenEaten );
	~Fruit( );

	//TODO: rename and rework functions
	void eaten( );
	void respawn( );
	virtual void update( ) override;

};

#endif // !FRUIT_H