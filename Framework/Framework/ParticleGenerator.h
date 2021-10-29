#ifndef PARTICLEGENERATOR_H
#define PARTICLEGENERATOR_H
//-----------------------------------------------
// Class	: Snake
// Purpose	: To create and position Particle Objects around a passed in reference object
// Usage	:	ParticleGenerator particleGenerator;
//				particleGenerator.setChar();
// 				particleGenerator.setPosition();
// 				particleGenerator.drawParticles();
// 				particleGenerator.eraseParticles();
// 				particleGenerator.deactivate();
// 				particleGenerator.activate( const GameObject& referenceObject );
// 				particleGenerator.render();
// 				particleGenerator.unrender();
// See also	: ParticleObject
//-----------------------------------------------
#include "ParticleObject.h"
#include "Settings.h"

class ParticleGenerator
{
private:
	//Declared variable to store the bool value of m_particlesActive, used to determine if the particles are active
	bool m_particlesActive = false;
	//Arrays of ParticleObjects used to store the displayed char and their position
	ParticleObject m_particles[ k_maxNumberOfParticles ];

//#######################################################
//    Function    :    setChar()
//    Purpose     :    To set the char value of all of the particles within the array
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Called in the constructor so that the chars can be set at declaration
//    See also    :    
//#######################################################
	void setChar();

//#######################################################
//    Function    :    setPosition
//    Purpose     :    To set the position of all of the particles within the array
//    Parameters  :    const GameObject& referenceObject
//    Returns     :    void
//    Notes       :	   Sets the position based on the reference object passed in
//    See also    :    
//#######################################################
	void setPosition( const GameObject& referenceObject );

//#######################################################
//    Function    :    drawParticles()
//    Purpose     :    To loop through and draw all of the particles within the array
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   
//    See also    :    
//#######################################################
	void drawParticles();

//#######################################################
//    Function    :    eraseParticles()
//    Purpose     :    To loop through and erase all of the particles within the array
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   
//    See also    :    
//#######################################################
	void eraseParticles();

//#######################################################
//    Function    :    deactivate()
//    Purpose     :    To set m_particlesActive to false to deactivate the particle so they won't be rendered
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Used to stop the particles from being drawn every loop. Is called from within the unrender function
//    See also    :    relatedFunction()
//#######################################################
	void deactivate();

public:
	//Constructor and Destructor
	ParticleGenerator();
	~ParticleGenerator();

//#######################################################
//    Function    :    activate()
//    Purpose     :    To set m_particlesActive to true to activate the particle so they will be rendered
//    Parameters  :    const GameObject& referenceObject
//    Returns     :    void
//    Notes       :	   Used to set the particles to be drawn within the current game loop. Wraps setPosition()
//    See also    :    relatedFunction()
//#######################################################
	void activate( const GameObject& referenceObject );

	
//#######################################################
//    Function    :    render()
//    Purpose     :    To render(display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    render is used to call all relevant member variable render functions within the game loop
//    See also    :    ParticleObject::render()
//#######################################################
	void render();

//#######################################################
//    Function    :    unrender()
//    Purpose     :    To unrender(remove from the display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    unrender is used to call all relevant member variable unrender functions within the game loop
//    See also    :    ParticleObject::unrender()
//#######################################################
	void unrender();
};

#endif // !PARTICLEGENERATOR_H
