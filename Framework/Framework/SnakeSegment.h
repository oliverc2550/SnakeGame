#ifndef SNAKESEGMENT_H
#define SNAKESEGMENT_H

#include "CharObject.h"
//-----------------------------------------------
// Class	: SnakeSegment
// Purpose	: To manage a Snake Segment object
// Usage	:	SnakeSegment snakeSegment
//				snakeSegment.getPosition() const;
//				snakeSegment.setPosition();
//				snakeSegment.getCharacter() const;
//				snakeSegment.setCharacter();
//				snakeSegment.update();
//				snakeSegment.render();
//				snakeSegment.draw();
//				snakeSegment.moveTo();
//				
// See also	: GameObject, CharObject
//-----------------------------------------------
class SnakeSegment : public CharObject
{
private:


public:
	SnakeSegment();
	SnakeSegment( Vector2& position, char character );
	~SnakeSegment();

	void moveTo( const SnakeSegment& previousSegment );
	virtual void update() override;
	virtual void render() override;

};

#endif // !SNAKESEGMENT_H
