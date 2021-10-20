#ifndef HELPERS_H
#define HELPERS_H

#include "Vector2.h"

namespace Keyboard
{
	bool checkButton( int virtualKey );
}

namespace Maths
{
	void initializeRand( );
	int getRandomInt( int maxValue );
}

namespace Rendering
{
//void gotoXY( int x, int y );
void drawChar( char c, Vector2 position );
}




#endif // ifndef HELPERS_H