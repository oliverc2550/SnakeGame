#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

#include "Helpers.h"
#include "Vector2.h"

namespace Keyboard
{
	bool checkButton( int virtualKey )
	{
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
}