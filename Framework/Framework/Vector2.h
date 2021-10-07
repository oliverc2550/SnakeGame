#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 
{
private:
	int m_x;
	int m_y;

public:
	Vector2();
	Vector2( int x, int y );

	int getX();
	void setX( int xValue );

	int getY();
	void setY( int yValue );

	void setVector2( int x, int y );


};


#endif // !VECTOR2_H

