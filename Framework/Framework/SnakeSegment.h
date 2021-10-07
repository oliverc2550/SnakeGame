#ifndef SNAKESEGMENT_H
#define SNAKESEGMENT_H

#include "CharObject.h"

class SnakeSegment : public CharObject
{
private:


public:
	SnakeSegment( );
	SnakeSegment( Vector2 &position, char character );
	~SnakeSegment( );

	void moveTo( SnakeSegment previousSegment );
	virtual void update( ) override;

};

#endif // !SNAKESEGMENT_H
