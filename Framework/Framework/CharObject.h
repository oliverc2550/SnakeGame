#ifndef CHAROBJECT_H
#define CHAROBJECT_H

#include "GameObject.h"
#include "Helpers.h"
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
class CharObject : public GameObject
{
protected:
	char m_characterToRender;

public:
	char getCharacter() const { return m_characterToRender; };
	void setCharacter( char character ) { m_characterToRender = character; };

	virtual void update() override;
	virtual void render();
	virtual void unrender();
	void draw();
};


#endif // !CHAROBJECT_H
