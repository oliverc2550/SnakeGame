#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include "ScoreDisplay.h"

//-----------------------------------------------
// Class	: ScoreManager
// Purpose	: To manage the Score within Snake
// Usage	:	ScoreManager scoreManager
//				scoreManager.getLengthCounterValue;
//				scoreManager.setLengthCounterValue;
//				scoreManager.update();
//				scoreManager.render();
//				scoreManager.unrender();
//				scoreManager.increaseScore();
//				scoreManager.increaseLengthCounter();
// 				scoreManager.resetScore();	
// See also	:
//-----------------------------------------------
class ScoreManager
{
private:
	//Declared const variable to store the int value of m_fruitScoreIncrease, used to increase score by a set amount
	const int m_fruitScoreIncrease = 10;
	//Declared const variable to store the int value of m_lengthScoreIncrease, used to increase score by a set amount
	const int m_lengthScoreIncrease = 20;
	//Declared variable to store the int value of m_lengthCounter, used to mirror the increases of the snakes tail length and add points based on the number of segments
	int m_lengthCounter = 0;
	//Instance of ScoreDisplay
	ScoreDisplay m_scoreDisplay;

public:
	//Constructor and Destructor
	ScoreManager();
	~ScoreManager();

//#######################################################
//    Function    :    getLengthCounterValue()
//    Purpose     :    To return the value assigned to m_characterToRender, so that it can be viewed outside this class
//    Parameters  :    None
//    Returns     :    int m_lengthCounter
//    Notes       :    Function is a const function, meaning data returned cannot be modifed. Only suitable for comparision/checking purposes
//    See also    :    
//#######################################################
	int getLengthCounterValue()const { return m_lengthCounter; };

//#######################################################
//    Function    :    setLengthCounterValue()
//    Purpose     :    To set or change the value assigned to m_lengthCounter, so that it can be changed outside this class
//    Parameters  :    int value
//    Returns     :    void
//    Notes       :    Function is used to modify a private/protected member variable from outside the class implementation
//    See also    :    
//#######################################################
	void setLengthCounterValue(int value) { m_lengthCounter = value; };

	//#######################################################
//    Function    :    update()
//    Purpose     :    To update member variables or other elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    update is used to call all relevant member variable update functions
//    See also    :    ScoreDisplay::update()
//#######################################################
	void update();

//#######################################################
//    Function    :    render()
//    Purpose     :    To render(display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    render is used to call all relevant member variable render functions
//    See also    :    ScoreDisplay::render()
//#######################################################
	void render();

//#######################################################
//    Function    :    unrender()
//    Purpose     :    To unrender(remove from the display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    unrender is used to call all relevant member variable unrender functions
//    See also    :    ScoreDisplay::unrender()
//#######################################################
	void unrender();

//#######################################################
//    Function    :    increaseScore()
//    Purpose     :    To increase the score whenever the player collects a fruit
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Wraps around ScoreDisplay::setScoreValue() so it can be called in other cpp files
//    See also    :    ScoreDisplay::setScoreValue()
//#######################################################
	void increaseScore();

//#######################################################
//    Function    :    increaseLengthCounter()
//    Purpose     :    To increase m_legnthCounter whenever the player gains an additional snake segment
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   After m_length counter hits 5 the score is increased and the counter reset this allows the players score to be increased every 5 segments
//    See also    :    ScoreDisplay::setScoreValue()
//#######################################################
	void increaseLengthCounter();

//#######################################################
//    Function    :    resetScore()
//    Purpose     :    To reset the score to 0
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Called after the player has restarted so that they don't still have their old score
//    See also    :    
//#######################################################
	void resetScore();
};


#endif // !SCOREMANAGER_H
