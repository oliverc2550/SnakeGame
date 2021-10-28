#include "ParticleGenerator.h"

ParticleGenerator::ParticleGenerator()
{
	setChar();
}

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
	Vector2 centerPoint( referenceObject.getPosition() );

	Vector2 particle0Position( centerPoint.getX(), centerPoint.getY() - 1 );
	m_particles[ 0 ].setPosition( particle0Position );

	Vector2 particle1Position( centerPoint.getX(), centerPoint.getY() + 1 );
	m_particles[ 1 ].setPosition( particle1Position );

	Vector2 particle2Position( centerPoint.getX() - 1, centerPoint.getY() );
	m_particles[ 2 ].setPosition( particle2Position );

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
	if( m_particlesActive )
	{
		drawParticles();
	}
}

void ParticleGenerator::unrender()
{
	if( m_particlesActive )
	{
		eraseParticles();
		deactivate();
	}
}
