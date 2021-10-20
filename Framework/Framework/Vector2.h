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

	bool operator==( Vector2 vector2 );

	int getX() const;
	void setX( int xValue );

	int getY() const;
	void setY( int yValue );

	void set( int x, int y );


};


#endif // !VECTOR2_H

