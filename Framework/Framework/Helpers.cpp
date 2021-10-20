#include <cstdlib>
#include <iostream>
#include <time.h>
#include <Windows.h>

#include "Helpers.h"

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
	void initializeRand( ) 
	{ 
		srand( time( NULL ) );
	}

	int getRandomInt( int maxValue ) 
	{ 
		return rand( ) % maxValue + 1; 
	}
}

namespace Rendering
{
	// Some messy Win32 stuff is nicely only in this file, so hidden from the rest of the code

	void gotoXY( int x, int y )
	{
		HANDLE hStdout = GetStdHandle( STD_OUTPUT_HANDLE );
		COORD position = { (SHORT)x, (SHORT)y };

		SetConsoleCursorPosition( hStdout, position );
	}

	void drawChar( char c, Vector2 position )
	{
		int x = position.getX();
		int y = position.getY();
		gotoXY( x, y );
		std::cout << c;
	}
}