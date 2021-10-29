#ifndef CHAROBJECT_H
#define CHAROBJECT_H

#include "GameObject.h"
#include "Helpers.h"
//-----------------------------------------------
// Class	: CharObject
// Purpose	: To manage a Char object, used to display single chars within Snake Game
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
	//Declared variable to store the char to be rendered(displayed)
	char m_characterToRender;

public:
//#######################################################
//    Function    :    getCharacter()
//    Purpose     :    To return the value assigned to m_characterToRender, so that it can be viewed outside this class
//    Parameters  :    None
//    Returns     :    char m_characterToRender
//    Notes       :    Function is a const function, meaning data returned cannot be modifed. Only suitable for comparision/checking purposes
//    See also    :    
//#######################################################
	char getCharacter() const { return m_characterToRender; };

//#######################################################
//    Function    :    setCharacter()
//    Purpose     :    To set or change the value assigned to m_characterToRender, so that it can be changed outside this class
//    Parameters  :    char character
//    Returns     :    void
//    Notes       :    Function is used to modify a private/protected member variable from outside the class implementation
//    See also    :    
//#######################################################
	void setCharacter( char character ) { m_characterToRender = character; };

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
//    Purpose     :    To wrap the drawChar function to provide easier implementation within class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    draw is called with render so that any class inheriting from this class can have a standard implementation without having to override
//    See also    :    drawChar()
//#######################################################
	void draw();
};


#endif // !CHAROBJECT_H
