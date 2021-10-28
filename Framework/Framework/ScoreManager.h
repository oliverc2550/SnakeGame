#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include "ScoreDisplay.h"

//-----------------------------------------------
// Class	: ScoreManager
// Purpose	: To manage a the Score within Snake
// Usage	:	ScoreManager scoreManager
//				scoreManager.getPosition() const;
//				scoreManager.setPosition();
//				scoreManager.getCharacter() const;
//				scoreManager.setCharacter();
//				scoreManager.update();
//				scoreManager.render();
//				scoreManager.draw();
//				
// See also	:
//-----------------------------------------------
class ScoreManager
{
private:
	const int m_fruitScoreIncrease = 10;
	const int m_lengthScoreIncrease = 20;
	int m_lengthCounter = 0;
	ScoreDisplay m_scoreDisplay;

public:
	ScoreManager();
	~ScoreManager();

	int getLengthCounterValue()const { return m_lengthCounter; };
	void setLengthCounterValue(int value) { m_lengthCounter = value; };

	void update();
	void render();
	void unrender();

	void increaseScore();
	void increaseLengthCounter();
	void resetScore();

};


#endif // !SCOREMANAGER_H
