#include "ScoreManager.h"

//Default Constructor
ScoreManager::ScoreManager()
{

}

//Default Destructor
ScoreManager::~ScoreManager()
{

}

void ScoreManager::update()
{
	//Increases Score if counter is more or eqaul to five, resets value after increasing score
	if( m_lengthCounter >= 5 )
	{
		int scoreValue = m_scoreDisplay.getScoreValue();
		scoreValue += m_lengthScoreIncrease;
		m_scoreDisplay.setScoreValue( scoreValue );
		setLengthCounterValue( 0 );
	}
}

void ScoreManager::render()
{
	m_scoreDisplay.render();
}

void ScoreManager::unrender()
{
	m_scoreDisplay.unrender();
}

void ScoreManager::increaseScore()
{
	int scoreValue = m_scoreDisplay.getScoreValue();
	scoreValue += m_fruitScoreIncrease;
	m_scoreDisplay.setScoreValue( scoreValue );
}

void ScoreManager::increaseLengthCounter()
{
	m_lengthCounter++;
}

void ScoreManager::resetScore()
{
	m_scoreDisplay.setScoreValue( 0 );
	m_lengthCounter = 0;
}
