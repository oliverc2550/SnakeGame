#include "ParticleObject.h"

//Virtual
void ParticleObject::update()
{
	CharObject::update();
}

void ParticleObject::render()
{
	draw();
}

void ParticleObject::draw()
{
	Rendering::drawChar( m_characterToRender, m_position );
}

void ParticleObject::unrender()
{
	Rendering::eraseChar( m_position );
}