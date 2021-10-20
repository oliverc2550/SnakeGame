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

	void moveTo( const SnakeSegment& previousSegment );
	virtual void update( ) override;
	virtual void render( ) override;

};

#endif // !SNAKESEGMENT_H
