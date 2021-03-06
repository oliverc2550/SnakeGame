#include "MainMenu.h"

//Private Methods

void MainMenu::setTextAndPosition()
{
	//Sets the String and Position of array element 0
	m_mainMenuText[ 0 ].setString( "Snake" );
	Vector2 line0Position( TextCentering::horizontallyCenterText( m_mainMenuText[ 0 ].getString() ), TextCentering::verticallyCenterText(-(k_WallMaxVerticalSize / 4 ) ) );
	m_mainMenuText[ 0 ].setPosition( line0Position );

	//Sets the String and Position of array element 1
	m_mainMenuText[ 1 ].setString( "[Press Enter to Play]" );
	Vector2 line1Position( TextCentering::horizontallyCenterText( m_mainMenuText[ 1 ].getString() ), TextCentering::verticallyCenterText() );
	m_mainMenuText[ 1 ].setPosition( line1Position );

	//Sets the String and Position of array element 2-4
	m_mainMenuText[ 2 ].setString( "Use WASD to Move" );
	m_mainMenuText[ 3 ].setString( "Collect Fruit to gain Score and Segments" );
	m_mainMenuText[ 4 ].setString( "Don't hit the Walls or your Tail" );
	for( int i = 2; i <= 4; i++ )
	{
		Vector2 startingPos( TextCentering::horizontallyCenterText( m_mainMenuText[ i ].getString() ), TextCentering::verticallyCenterText( k_LineSpacing + i ) );
		m_mainMenuText[ i ].setPosition( startingPos );
	}

	//Sets the String and Position of array element 5
	m_mainMenuText[ 5 ].setString( "Created by Oliver Collier" );
	Vector2 line5Position( TextCentering::horizontallyCenterText( m_mainMenuText[ 5 ].getString() ), k_WallMaxVerticalSize );
	m_mainMenuText[ 5 ].setPosition( line5Position );
}

void MainMenu::drawText()
{
	for( int i = 0; i < k_MainMenuLinesOfText; i++ )
	{
		m_mainMenuText[ i ].render();
	}
}

void MainMenu::initializeText()
{
	UIScreen::initializeText();
}

//Public Methods
//Default Constructor
MainMenu::MainMenu()
{
	initializeText();
}

//Virtual
MainMenu::~MainMenu()
{

}

void MainMenu::render()
{
	UIScreen::render();
}
