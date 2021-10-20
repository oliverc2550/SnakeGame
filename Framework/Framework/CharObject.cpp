#include "CharObject.h"

//Virtual
void CharObject::update( )
{ 
	GameObject::update( ); 
}

void CharObject::render( )
{
	draw( );
}

void CharObject::draw( ) 
{ 
	Rendering::drawChar( m_characterToRender, m_position ); 
}