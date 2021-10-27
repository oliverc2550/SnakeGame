#ifndef BRICK_H
#define BRICK_H

#include "ColoredObject.h"
//-----------------------------------------------
// Class	: CharObject
// Purpose	: To manage a Char object
// Usage	:	CharObject charObject
//				charObject.getPosition() const;
//				charObject.setPosition();
//				charObject.getCharacter() const;
//				charObject.setCharacter();
//				charObject.update();
//				charObject.render();
//				charObject.draw();
//				
// See also	: GameObject
//-----------------------------------------------
class Brick : public ColoredObject
{
private:

public:
	Brick();
	Brick( Vector2 position, int colorValue );
	~Brick();

	virtual void update() override;
	virtual void render() override;
	virtual void unrender() override;
};


#endif // !BRICK_H
