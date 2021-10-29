#ifndef PARTICLEOBJECT_H
#define PARTICLEOBJECT_H

#include "CharObject.h"
#include "Helpers.h"
//-----------------------------------------------
// Class	: CharObject
// Purpose	: To manage a particle object, a variant of char object used in a particle generator
// Usage	:	ParticleObject particleObject
//				particleObject.getPosition() const;
//				particleObject.setPosition();
//				particleObject.getCharacter() const;
//				particleObject.setCharacter();
//				particleObject.update();
//				particleObject.render();
//				particleObject.draw();
//				
// See also	: GameObject
//-----------------------------------------------
class ParticleObject : public CharObject
{
protected:
	//Declared variable to store the char to be rendered(displayed)
	//Variable is duplicately declared, but for some reason if it its removed the particle system breaks, debugging was attempted but no other solution was found
	char m_characterToRender;

public:
	//Constructor and Destructor
	ParticleObject();
	virtual ~ParticleObject();


	//#######################################################
	//    Function    :    getCharacter()
	//    Purpose     :    To return the value assigned to m_characterToRender, so that it can be viewed outside this class
	//    Parameters  :    None
	//    Returns     :    char m_characterToRender
	//    Notes       :    Function is a const function, meaning data returned cannot be modifed. Only suitable for comparision/checking purposes
	//    Notes       :    Function is duplicately declared, but for some reason if it its removed the particle system breaks, debugging was attempted but no other solution was found
	//    See also    :    
	//#######################################################
	char getCharacter() const { return m_characterToRender; };

	//#######################################################
	//    Function    :    setCharacter()
	//    Purpose     :    To set or change the value assigned to m_characterToRender, so that it can be changed outside this class
	//    Parameters  :    char character
	//    Returns     :    void
	//    Notes       :    Function is used to modify a private/protected member variable from outside the class implementation
	//    Notes       :    Function is duplicately declared, but for some reason if it its removed the particle system breaks, debugging was attempted but no other solution was found
	//    See also    :    
	//#######################################################
	void setCharacter( char character ) { m_characterToRender = character; };

//#######################################################
//    Function    :    update()
//    Purpose     :    To update member variables or other elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    update is a virtual function that is being overriden within this class implementation
//    See also    :    CharObject::update()
//#######################################################
	virtual void update() override;

//#######################################################
//    Function    :    render()
//    Purpose     :    To render(display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    render is a virtual function that is being overriden within this class implementation
//    See also    :    CharObject::render()
//#######################################################
	virtual void render() override;

//#######################################################
//    Function    :    unrender()
//    Purpose     :    To unrender(remove from the display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    unrender is a virtual function that is being overriden within this class implementation
//    See also    :    CharObject::unrender()
//#######################################################
	virtual void unrender() override;

//#######################################################
//    Function    :    draw()
//    Purpose     :    To wrap the drawChar function to provide easier implementation within class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    draw is called with render so that any class inheriting from this class can have a standard implementation without having to override
//    Notes       :    Function is duplicately declared, but for some reason if it its removed the particle system breaks, debugging was attempted but no other solution was found
//    See also    :    drawChar()
//#######################################################
	void draw();
};


#endif // !PARTICLEOBJECT_H
