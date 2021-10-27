#include "WallManager.h"

WallManager::WallManager()
{
	initializeWalls();
}

WallManager::~WallManager()
{
}

//Private Methods
void WallManager::setWallPosition( Brick wallToSet[], int wallArraySize, bool isWallHorizontal, int startingXpos, int startingYpos )
{
	for( int i = 0; i < wallArraySize; i++ )
	{
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

void WallManager::drawWall( Brick wallToDraw[], int wallArraySize )
{
	for( int i = 0; i < wallArraySize; i++ )
	{
		wallToDraw[ i ].render();
	}
}

bool WallManager::detectWallCollision( Brick wallToCheck[], int wallArraySize, Vector2 otherObject )
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
	setWallPosition( m_wallTop, k_WallMaxHorizontalSize, true );
	setWallPosition( m_wallBottom, k_WallMaxHorizontalSize, true, 0, k_WallMaxVerticalSize );
	setWallPosition( m_wallLeft, k_WallMaxVerticalSize, false );
	setWallPosition( m_wallRight, k_WallMaxVerticalSize, false, k_WallMaxHorizontalSize );
}

//Public Methods
void WallManager::render()
{
	drawWall( m_wallTop, k_WallMaxHorizontalSize );
	drawWall( m_wallBottom, k_WallMaxHorizontalSize );
	drawWall( m_wallLeft, k_WallMaxVerticalSize );
	drawWall( m_wallRight, k_WallMaxVerticalSize );
}

bool WallManager::checkWallCollisions( Vector2 otherObject )
{
	if( detectWallCollision( m_wallTop, k_WallMaxHorizontalSize, otherObject ) )
	{
		return true;
	}
	else if( detectWallCollision( m_wallBottom, k_WallMaxHorizontalSize, otherObject ) )
	{
		return true;
	}
	else if( detectWallCollision( m_wallLeft, k_WallMaxVerticalSize, otherObject ) )
	{
		return true;
	}
	else if( detectWallCollision( m_wallRight, k_WallMaxVerticalSize, otherObject ) )
	{
		return true;
	}
	else
	{
		return false;
	}
}

