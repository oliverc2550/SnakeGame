#ifndef FRUIT_H
#define FRUIT_H

#include "CharObject.h"

class Fruit : public CharObject
{
private:
	bool m_isActive;

public:
	Fruit( );
	Fruit( Vector2 &position, char character, bool hasBeenEaten );
	~Fruit( );

	//TODO: rename and rework functions
	void deactivate( );
	void reactivate( );
	void setRandomPosition( );
	virtual void update( ) override;
	virtual void render( ) override;

};

#endif // !FRUIT_H