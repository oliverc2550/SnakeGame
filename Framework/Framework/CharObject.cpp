#include "CharObject.h"


void CharObject::update()
{ 
	GameObject::update(); 
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