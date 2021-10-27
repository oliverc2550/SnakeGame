#ifndef SNAKESEGMENT_H
#define SNAKESEGMENT_H

#include "ColoredObject.h"
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
// See also	: GameObject, ColoredObject
//-----------------------------------------------
class SnakeSegment : public ColoredObject
{
private:


public:
	SnakeSegment();
	SnakeSegment( Vector2& position, int colorValue );
	~SnakeSegment();

	void moveTo( const SnakeSegment& previousSegment );
	virtual void update() override;
	virtual void render() override;
	virtual void unrender() override;

};

#endif // !SNAKESEGMENT_H
