#include "ParticleGenerator.h"

//Default Constructor
ParticleGenerator::ParticleGenerator()
{
	setChar();
}

//Default Destrcutor
ParticleGenerator::~ParticleGenerator()
{
}

void ParticleGenerator::setChar()
{
	for( int i = 0; i < k_maxNumberOfParticles; i++ )
	{
		m_particles[ i ].setCharacter( '*' );
	}
}

void ParticleGenerator::setPosition( const GameObject& referenceObject )
{
	//Set the reference Object position to a temp Vector2
	Vector2 centerPoint( referenceObject.getPosition() );

	//Sets Position of array element 0
	Vector2 particle0Position( centerPoint.getX(), centerPoint.getY() - 1 );
	m_particles[ 0 ].setPosition( particle0Position );

	//Sets Position of array element 1
	Vector2 particle1Position( centerPoint.getX(), centerPoint.getY() + 1 );
	m_particles[ 1 ].setPosition( particle1Position );

	//Sets Position of array element 2
	Vector2 particle2Position( centerPoint.getX() - 1, centerPoint.getY() );
	m_particles[ 2 ].setPosition( particle2Position );

	//Sets Position of array element 3
	Vector2 particle3Position( centerPoint.getX() + 1, centerPoint.getY() );
	m_particles[ 3 ].setPosition( particle3Position );
}

void ParticleGenerator::drawParticles()
{
	for( int i = 0; i < k_maxNumberOfParticles; i++ )
	{
		m_particles[ i ].render();
	}
}

void ParticleGenerator::eraseParticles()
{
	for( int i = 0; i < k_maxNumberOfParticles; i++ )
	{
		m_particles[ i ].unrender();
	}

}

void ParticleGenerator::activate( const GameObject& referenceObject )
{
	setPosition( referenceObject );
	m_particlesActive = true;
}

void ParticleGenerator::deactivate()
{
	m_particlesActive = false;
}

void ParticleGenerator::render()
{
	//Only renders particles if they are set to active
	if( m_particlesActive )
	{
		drawParticles();
	}
}

void ParticleGenerator::unrender()
{
	//Only unrenders particles if they are set to active
	if( m_particlesActive )
	{
		eraseParticles();
		deactivate();
	}
}
