#include "Fruit.h"
#include "RandomIntGenerator.h"

Fruit::Fruit( )
{
	m_position = Vector2( );
	m_characterToRender = 'f';
	m_hasBeenEaten = false;
}

Fruit::Fruit( Vector2& position, char character, bool hasBeenEaten )
{
	m_position = position;
	m_characterToRender = character;
	m_hasBeenEaten = hasBeenEaten;
}

Fruit::~Fruit( )
{

}



void Fruit::eaten( )
{
	m_hasBeenEaten = true;
}

void Fruit::respawn( )
{
	if (m_hasBeenEaten == true)
	{
		m_position = Vector2( getRandomInt( 30 ), getRandomInt( 30 ) ); //TODO: Remove magic numbers
		m_hasBeenEaten = false;
	}
}

void Fruit::update( )
{
	respawn( );
	draw( );
}
