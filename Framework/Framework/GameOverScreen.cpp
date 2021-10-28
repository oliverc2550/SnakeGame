#include "GameOverScreen.h"

void GameOverScreen::setTextAndPosition()
{
	m_gameOverText[ 0 ].setString( "Game Over" );
	Vector2 line1Position( TextCentering::horizontallyCenterText( m_gameOverText[ 0 ].getString() ), TextCentering::verticallyCenterText() );
	m_gameOverText[ 0 ].setPosition( line1Position );

	m_gameOverText[ 1 ].setString( "[Press Enter to Try Again]" );
	Vector2 startingPos( TextCentering::horizontallyCenterText( m_gameOverText[ 1 ].getString() ), TextCentering::verticallyCenterText( k_LineSpacing ) );
	m_gameOverText[ 1 ].setPosition( startingPos );
}

void GameOverScreen::drawText()
{
	for( int i = 0; i < k_gameOverLinesOfText; i++ )
	{
		m_gameOverText[ i ].render();
	}
}

void GameOverScreen::initializeText()
{
	UIScreen::initializeText();
}

GameOverScreen::GameOverScreen()
{
	initializeText();
}

GameOverScreen::~GameOverScreen()
{

}

void GameOverScreen::render()
{
	UIScreen::render();
}