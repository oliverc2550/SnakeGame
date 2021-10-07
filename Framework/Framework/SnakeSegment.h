#ifndef SNAKESEGMENT_H
#define SNAKESEGMENT_H

#include "CharRenderer.h"
#include "GameObject.h"

class SnakeSegment : public GameObject, public CharRenderer
{
private:


public:
	SnakeSegment( );
	SnakeSegment( Vector2 position, char character );
	~SnakeSegment( );

	void MoveTo( SnakeSegment previousSegment );
	virtual void Update( ) override;

};

#endif // !SNAKESEGMENT_H
