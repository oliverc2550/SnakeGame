#ifndef CHAROBJECT_H
#define CHAROBJECT_H

#include "GameObject.h"
#include "Helpers.h"

class CharObject : public GameObject
{
protected:
	char m_characterToRender;

public:
	char getCharacter( ) const { return m_characterToRender; };
	void setCharacter( char character ) { m_characterToRender = character; };

	virtual void update( ) override;
	virtual void render( );
	void draw( );
};


#endif // !CHAROBJECT_H
