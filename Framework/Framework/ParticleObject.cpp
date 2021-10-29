#include "ParticleObject.h"

//Default Constructor
ParticleObject::ParticleObject()
{
	m_characterToRender = '*';
	m_position = Vector2();
}

//Virtual
ParticleObject::~ParticleObject()
{
}

//update, render, unrender and draw aren't properly inherited, however if the were the particle generator would break and not render particles

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