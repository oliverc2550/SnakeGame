#include "ScoreManager.h"

ScoreManager::ScoreManager()
{

}

ScoreManager::~ScoreManager()
{

}

void ScoreManager::update()
{
	if( m_lengthCounter >= 5 )
	{
		int scoreValue = m_scoreDisplay.getScoreValue();
		scoreValue += m_lengthScoreIncrease;
		m_scoreDisplay.setScoreVale( scoreValue );
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
	m_scoreDisplay.setScoreVale( scoreValue );
}

void ScoreManager::increaseLengthCounter()
{
	m_lengthCounter++;
}
