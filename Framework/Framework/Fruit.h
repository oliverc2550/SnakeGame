#ifndef FRUIT_H
#define FRUIT_H

#include "CharObject.h"
//-----------------------------------------------
// Class	: Fruit
// Purpose	: To manage a Fruit object
// Usage	:	Fruit fruit
//				fruit.getPosition() const;
//				fruit.setPosition();
//				fruit.getCharacter() const;
//				fruit.setCharacter();
//				fruit.update();
//				fruit.render();
//				fruit.draw();
//				fruit.deactivate();
//				fruit.reactivate();
//				fruit.setRandomPosition();			
// See also	: GameObject, CharObject
//-----------------------------------------------
class Fruit : public CharObject
{
private:
	bool m_isActive;

public:
	Fruit();
	Fruit( Vector2& position, char character, bool isActive );
	~Fruit();

	//TODO: rename and rework functions
	void deactivate();
	void reactivate();
	void setRandomPosition();
	virtual void update() override;
	virtual void render() override;
	virtual void unrender() override;

};

#endif // !FRUIT_H