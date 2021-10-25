#ifndef SCOREDISPLAY_H
#define SCOREDISPLAY_H

#include "StringObject.h"
//-----------------------------------------------
// Class	: CharObject
// Purpose	: To manage a Char object
// Usage	:	ScoreDisplay scoreDisplay
//				scoreDisplay.getPosition() const;
//				scoreDisplay.setPosition();
//				scoreDisplay.getCharacter() const;
//				scoreDisplay.setCharacter();
//				scoreDisplay.update();
//				scoreDisplay.render();
//				scoreDisplay.draw();
//				
// See also	: GameObject
//-----------------------------------------------
class ScoreDisplay : public StringObject
{
private:
	int m_scoreValue;

public:
	ScoreDisplay();
	ScoreDisplay( Vector2& position, std::string string, int scoreValue );
	~ScoreDisplay();

	int getScoreValue() const;
	void setScoreVale( int scoreValue );

	virtual void update() override;
	virtual void render() override;
	virtual void unrender() override;

};


#endif // !SCOREDISPLAY_H
