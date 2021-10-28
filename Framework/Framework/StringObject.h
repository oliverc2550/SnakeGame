#ifndef STRINGOBJECT_H
#define STRINGOBJECT_H

#include "GameObject.h"
#include "Helpers.h"
//-----------------------------------------------
// Class	: CharObject
// Purpose	: To manage a Char object
// Usage	:	StringObject stringObject
//				stringObject.getPosition() const;
//				stringObject.setPosition();
//				stringObject.getString() const;
//				stringObject.setString();
//				stringObject.update();
//				stringObject.render();
//				stringObject.draw();
//				
// See also	: GameObject
//-----------------------------------------------
class StringObject : public GameObject
{
protected:
	std::string m_stringToRender;

public:
	std::string getString() const { return m_stringToRender; };
	void setString( std::string string ) { m_stringToRender = string; };

	virtual void update() override;
	virtual void render();
	virtual void unrender();
	void draw();
};


#endif // !STRINGOBJECT_H
