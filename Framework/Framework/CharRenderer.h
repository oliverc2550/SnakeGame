#ifndef CHARRENDERER_H
#define CHARRENDERER_H

#include "Helpers.h"

class CharRenderer
{
protected:
	char m_characterToRender;

public:
	char getCharacter( ) { return m_characterToRender; };
	void setCharacter( char character ) { m_characterToRender = character; };

	void Render( char c, Vector2 position ) { drawChar( c, position ); };
};


#endif // !CHARRENDERER_H
