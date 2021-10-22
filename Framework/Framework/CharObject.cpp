#include "CharObject.h"

//Virtual
void CharObject::update( float deltaTime )
{ 
	GameObject::update( deltaTime ); 
}

void CharObject::render()
{
	draw();
}

void CharObject::draw() 
{ 
	Rendering::drawChar( m_characterToRender, m_position ); 
}

void CharObject::unrender()
{
	Rendering::eraseChar( m_position );
}