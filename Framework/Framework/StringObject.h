#ifndef STRINGOBJECT_H
#define STRINGOBJECT_H

#include "GameObject.h"
#include "Helpers.h"
//-----------------------------------------------
// Class	: StringObject
// Purpose	: To manage a String object, used to display a string of characters within Snake Game
// Usage	:	StringObject stringObject
//				stringObject.getPosition() const;
//				stringObject.setPosition();
//				stringObject.getCharacter() const;
//				stringObject.setCharacter();
//				stringObject.update();
//				stringObject.render();
//				stringObject.draw();
//				
// See also	: GameObject
//-----------------------------------------------
class StringObject : public GameObject
{
protected:
	//Declared variable to store the char to be rendered(displayed)
	std::string m_stringToRender;

public:
	//Constructor and Destructor
	StringObject();
	virtual ~StringObject();
//#######################################################
//    Function    :    getString()
//    Purpose     :    To return the value assigned to m_characterToRender, so that it can be viewed outside this class
//    Parameters  :    None
//    Returns     :    std::string m_stringToRender
//    Notes       :    Function is a const function, meaning data returned cannot be modifed. Only suitable for comparision/checking purposes
//    See also    :    
//#######################################################
	std::string getString() const { return m_stringToRender; };

//#######################################################
//    Function    :    setString()
//    Purpose     :    To set or change the value assigned to m_stringToRender, so that it can be changed outside this class
//    Parameters  :    std::string string
//    Returns     :    void
//    Notes       :    Function is used to modify a private/protected member variable from outside the class implementation
//    See also    :    
//#######################################################
	void setString( std::string string ) { m_stringToRender = string; };


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
//    Purpose     :    To wrap the drawString function to provide easier implementation within class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    draw is called with render so that any class inheriting from this class can have a standard implementation without having to override
//    See also    :    drawString()
//#######################################################
	void draw();
};


#endif // !STRINGOBJECT_H
