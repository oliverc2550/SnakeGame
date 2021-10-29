#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

#include "Colors.h"
#include "Helpers.h"
#include "Settings.h"
#include "Vector2.h"

namespace GameWindow
{
	void initializeGameWindow()
	{
		//Win32 code to adjust the console window and name
		system( "MODE 103, 55" );
		LPCSTR consoleName = TEXT( "Snake" );
		SetConsoleTitle( consoleName );
	}
}

namespace Keyboard
{
	bool checkButton( int virtualKey )
	{
		//Code provide by Zaf for key checking
		virtualKey = toupper( virtualKey );

		return ( bool )( GetAsyncKeyState( virtualKey ) & 1 );
	}
}

namespace Maths
{
	void initializeRand() 
	{ 
		srand( time( NULL ) );
	}

	int getRandomInt( int maxValue ) 
	{ 
		return rand() % maxValue + 1; 
	}
}

namespace TextCentering
{
	int horizontallyCenterText( std::string textToCenter )
	{
		return ( k_WallMaxHorizontalSize / 2 ) - ( textToCenter.length() / 2 );
	}

	int verticallyCenterText( int verticalOffset )
	{
		return ( k_WallMaxVerticalSize / 2 ) + verticalOffset;
	}
}

namespace Rendering
{
	// Some messy Win32 stuff is nicely only in this file, so hidden from the rest of the code

	void gotoXY( Vector2& vector )
	{
		HANDLE hStdout = GetStdHandle( STD_OUTPUT_HANDLE );
		COORD position = { (SHORT)vector.getX(), (SHORT)vector.getY() };

		SetConsoleCursorPosition( hStdout, position );
	}

	void drawChar( char c, Vector2& position )
	{
		gotoXY( position );
		std::cout << c;
	}

	void drawColoredCell( int colorValue, Vector2& position )
	{
		gotoXY( position );
		//Uses ANSI Escape and Color Codes to set cell color to passed in value
		std::cout << "\033[" + ( std::to_string( colorValue ) ) + "m" + ' ' + "\033[0m\n"; 
	}

	void drawString( std::string string, Vector2& position )
	{
		gotoXY( position );
		std::cout << string;
	}

	void drawScore( std::string string, int scoreValue, Vector2& position )
	{
		gotoXY( position );
		std::cout << string << scoreValue;
	}

	void eraseChar( Vector2& position )
	{
		gotoXY( position );
		std::cout << ' ';
	}

	void eraseColoredCell( Vector2& position )
	{
		gotoXY( position );
		//Uses ANSI Escape and Color Codes to set cell color to black, "reseting" the cell
		std::cout << "\033[" + ( std::to_string( k_black ) ) + "m" + ' ' + "\033[0m\n";
	}
}