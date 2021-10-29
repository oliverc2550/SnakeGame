#ifndef COLOREDOBJECT_H
#define COLOREDOBJECT_H

#include "GameObject.h"
#include "Helpers.h"
//-----------------------------------------------
// Class	: ColoredObject
// Purpose	: To manage a Colored object, a Colored object is a renderable object that does not display a char or string only a colored cell
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
	//Declared variable to store the int value of the color to be rendered(displayed) within the desired cell
	int m_colorValue;

public:
//#######################################################
//    Function    :    getColorValue()
//    Purpose     :    To return the value assigned to m_colorValue, so that it can be viewed outside this class
//    Parameters  :    None
//    Returns     :    int m_colorValue
//    Notes       :    Function is a const function, meaning data returned cannot be modifed. Only suitable for comparision/checking purposes
//    See also    :    
//#######################################################
	int getColorValue() const { return m_colorValue; };

//#######################################################
//    Function    :    setColorValue
//    Purpose     :    To set or change the value assigned to m_colorValue, so that it can be changed outside this class
//    Parameters  :    int colorValue
//    Returns     :    void
//    Notes       :    Function is used to modify a private/protected member variable from outside the class implementation
//    See also    :    
//#######################################################
	void setColorValue( int colorValue ) { m_colorValue = colorValue; };

	//#######################################################
//    Function    :    update()
//    Purpose     :    To update member variables or other elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    update is a virtual function that is being overriden within this class implementation
//    See also    :    GameObject::update()
//#######################################################
	virtual void update() override;

//#######################################################
//    Function    :    render()
//    Purpose     :    To render(display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    render is a virtual function that can overriden from inheriting classes
//    See also    :    
//#######################################################
	virtual void render();

//#######################################################
//    Function    :    unrender()
//    Purpose     :    To unrender(remove from the display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    unrender is a virtual function that can overriden from inheriting classes
//    See also    :    
//#######################################################
	virtual void unrender();
	
//#######################################################
//    Function    :    draw()
//    Purpose     :    To wrap the drawColoredCell function to provide easier implementation within class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    draw is called with render so that any class inheriting from this class can have a standard implementation without having to override
//    See also    :    drawColoredCell()
//#######################################################
	void draw();
};


#endif // !COLOREDOBJECT_H
