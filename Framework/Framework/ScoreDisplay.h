#ifndef SCOREDISPLAY_H
#define SCOREDISPLAY_H

#include "StringObject.h"
//-----------------------------------------------
// Class	: ScoreDisplay
// Purpose	: To manage a ScoreDisplay object, which is an object that display a string and an int value
// Usage	:	ScoreDisplay scoreDisplay
//				scoreDisplay.getPosition() const;
//				scoreDisplay.setPosition();
//				scoreDisplay.getString() const;
//				scoreDisplay.setString();
//				scoreDisplay.getScoreValue() const;
//				scoreDisplay.setScoreValue();
//				scoreDisplay.update();
//				scoreDisplay.render();
//				scoreDisplay.draw();
//				
// See also	: StringObject
//-----------------------------------------------
class ScoreDisplay : public StringObject
{
private:
	//Declared variable to store the int value of m_scoreValue, used to display the players current score
	int m_scoreValue;

public:
	//Constructors and Destructor
	ScoreDisplay();
	ScoreDisplay( Vector2& position, std::string string, int scoreValue );
	virtual ~ScoreDisplay();

//#######################################################
//    Function    :    getScoreValue()
//    Purpose     :    To return the value assigned to m_characterToRender, so that it can be viewed outside this class
//    Parameters  :    None
//    Returns     :    int m_scoreValue
//    Notes       :    Function is a const function, meaning data returned cannot be modifed. Only suitable for comparision/checking purposes
//    See also    :    
//#######################################################
	int getScoreValue() const;

//#######################################################
//    Function    :    setScoreValue()
//    Purpose     :    To set or change the value assigned to m_characterToRender, so that it can be changed outside this class
//    Parameters  :    int scoreValue
//    Returns     :    void
//    Notes       :    Function is used to modify a private/protected member variable from outside the class implementation
//    See also    :    
//#######################################################
	void setScoreValue( int scoreValue );

//#######################################################
//    Function    :    update()
//    Purpose     :    To update member variables or other elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    update is a virtual function that is being overriden within this class implementation
//    See also    :    StringObject::update()
//#######################################################
	virtual void update() override;

//#######################################################
//    Function    :    render()
//    Purpose     :    To render(display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    render is a virtual function that is being overriden within this class implementation
//    See also    :    StringObject::render()
//#######################################################
	virtual void render() override;

//#######################################################
//    Function    :    unrender()
//    Purpose     :    To unrender(remove from the display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    unrender is a virtual function that is being overriden within this class implementation
//    See also    :    StringObject::unrender()
//#######################################################
	virtual void unrender() override;

};


#endif // !SCOREDISPLAY_H
