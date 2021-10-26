#include "WallManager.h"

WallManager::WallManager()
{
	initializeWalls();
}

WallManager::~WallManager()
{
}

//Private Methods
void WallManager::setWallCharAndPosition( CharObject wallToSet[], int wallArraySize, bool isWallHorizontal, int startingXpos, int startingYpos )
{
	for( int i = 0; i < wallArraySize; i++ )
	{
		wallToSet[ i ].setCharacter( m_kWallChar );

		if( isWallHorizontal == true )
		{
			startingXpos = i;
		}
		else if ( isWallHorizontal == false )
		{
			startingYpos = i;
		}
		Vector2 wallPosition( startingXpos, startingYpos );
		wallToSet[ i ].setPosition( wallPosition );
	}
}

void WallManager::drawWall( CharObject wallToDraw[], int wallArraySize )
{
	for( int i = 0; i < wallArraySize; i++ )
	{
		wallToDraw[ i ].render();
	}
}

bool WallManager::detectWallCollision( CharObject wallToCheck[], int wallArraySize, Vector2 otherObject )
{
	for( int i = 0; i < wallArraySize; i++ )
	{
		if ( wallToCheck[ i ].getPosition() == otherObject )
		{
			return true;
		}
	}
	return false;
}

void WallManager::initializeWalls()
{
	setWallCharAndPosition( m_wallTop, kWallMaxHorizontalSize, true );
	setWallCharAndPosition( m_wallBottom, kWallMaxHorizontalSize, true, 0, kWallMaxVerticalSize );
	setWallCharAndPosition( m_wallLeft, kWallMaxVerticalSize, false );
	setWallCharAndPosition( m_wallRight, kWallMaxVerticalSize, false, kWallMaxHorizontalSize );
}

//Public Methods
void WallManager::render()
{
	drawWall( m_wallTop, kWallMaxHorizontalSize );
	drawWall( m_wallBottom, kWallMaxHorizontalSize );
	drawWall( m_wallLeft, kWallMaxVerticalSize );
	drawWall( m_wallRight, kWallMaxVerticalSize );
}

bool WallManager::checkWallCollisions( Vector2 otherObject )
{
	if( detectWallCollision( m_wallTop, kWallMaxHorizontalSize, otherObject ) )
	{
		return true;
	}
	else if( detectWallCollision( m_wallBottom, kWallMaxHorizontalSize, otherObject ) )
	{
		return true;
	}
	else if( detectWallCollision( m_wallLeft, kWallMaxVerticalSize, otherObject ) )
	{
		return true;
	}
	else if( detectWallCollision( m_wallRight, kWallMaxVerticalSize, otherObject ) )
	{
		return true;
	}
	else
	{
		return false;
	}
}

