#ifndef PARTICLEGENERATOR_H
#define PARTICLEGENERATOR_H
//-----------------------------------------------
// Class	: Snake
// Purpose	: To manage a Snake Object
// Usage	:	Snake snake;
//				snake.checkInput();
// 				snake.move();
// 				snake.update();
// 				snake.render();
// 				snake.addSegments();
// 				snake.detectSegments();
// 				snake.drawSegments();
// 				snake.getHeadPosition() const;
// 				snake.getIsAlive() const;
// 				snake.setIsAlive();
// See also	: SnakeSegment
//-----------------------------------------------
#include "ParticleObject.h"
#include "Settings.h"

class ParticleGenerator
{
private:
	bool m_particlesActive = false;
	ParticleObject m_particles[ k_maxNumberOfParticles ];
	void setChar();
	void setPosition( const GameObject& referenceObject );
	void drawParticles();
	void eraseParticles();
	void deactivate();

public:
	ParticleGenerator();
	~ParticleGenerator();

	void activate( const GameObject& referenceObject );
	void render();
	void unrender();
};

#endif // !SNAKETAIL_H
