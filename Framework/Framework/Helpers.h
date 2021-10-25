#ifndef HELPERS_H
#define HELPERS_H

#include <string>

class Vector2;

namespace Keyboard
{
	bool checkButton( int virtualKey );
}

namespace Maths
{
	void initializeRand();
	int getRandomInt( int maxValue );
}

namespace Rendering
{
	//void gotoXY( int x, int y );
	void drawChar( char c, Vector2& position );
	void drawString( std::string string, Vector2& position );
	void drawScore( std::string string, int scoreValue, Vector2& position );
	void eraseChar( Vector2& position );
}




#endif // ifndef HELPERS_H