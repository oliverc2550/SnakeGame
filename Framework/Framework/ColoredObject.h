#ifndef COLOREDOBJECT_H
#define COLOREDOBJECT_H

#include "GameObject.h"
#include "Helpers.h"
//-----------------------------------------------
// Class	: ColoredObject
// Purpose	: To manage a Colored object
// Usage	:	ColoredObject coloredObject
//				coloredObject.getPosition() const;
//				coloredObject.setPosition();
//				coloredObject.getColorValue() const;
//				coloredObject.setColorValue();
//				coloredObject.update();
//				coloredObject.render();
//				coloredObject.draw();
//				
// See also	: GameObject
//-----------------------------------------------
class ColoredObject : public GameObject
{
protected:
	int m_colorValue;

public:
	int getColorValue() const { return m_colorValue; };
	void setColorValue( int colorValue ) { m_colorValue = colorValue; };

	virtual void update() override;
	virtual void render();
	virtual void unrender();
	void draw();
};


#endif // !COLOREDOBJECT_H
