#ifndef SNAKEHEAD_H
#define SNAKEHEAD_H

#include "SnakeSegment.h"
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
class SnakeHead : public SnakeSegment
{
private:


public:
	SnakeHead();
	SnakeHead( Vector2& position, int colorValue );
	~SnakeHead();

	virtual void update() override;
	virtual void render() override;
	virtual void unrender() override;

};

#endif // !SNAKESEGMENT_H
