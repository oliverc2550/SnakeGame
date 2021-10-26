#include "ScoreDisplay.h"
#include "Settings.h"

ScoreDisplay::ScoreDisplay()
{
	m_position = Vector2( 0, kScoreDisplayPosition );
	m_stringToRender = "Score: ";
	m_scoreValue = 0;
}

ScoreDisplay::ScoreDisplay( Vector2& position, std::string string, int scoreValue )
{
	m_position = position;
	m_stringToRender = string;
	m_scoreValue = scoreValue;
}

ScoreDisplay::~ScoreDisplay()
{

}

int ScoreDisplay::getScoreValue() const
{
	return m_scoreValue;
}

void ScoreDisplay::setScoreVale( int scoreValue )
{
	m_scoreValue = scoreValue;
}

void ScoreDisplay::update()
{
	StringObject::update();
}

void ScoreDisplay::render()
{
	Rendering::drawScore( m_stringToRender, m_scoreValue, m_position );
}

void ScoreDisplay::unrender()
{
	StringObject::unrender();
}