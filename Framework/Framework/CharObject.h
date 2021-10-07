#ifndef CHAROBJECT_H
#define CHAROBJECT_H

#include "GameObject.h"
#include "Helpers.h"

class CharObject : public GameObject
{
protected:
	char m_characterToRender;

public:
	char getCharacter( ) { return m_characterToRender; };
	void setCharacter( char character ) { m_characterToRender = character; };

	virtual void update( ) override { GameObject::update( ); };
	void draw( ) { drawChar( m_characterToRender, m_position); };
};


#endif // !CHAROBJECT_H
