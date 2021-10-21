#ifndef VECTOR2_H
#define VECTOR2_H
//-----------------------------------------------
// Class	: Vector2
// Purpose	: To provide easy to use Vector2s for use within Snake Game for positioning chars and other game elements
// Usage	:	Vector2 vector2
//				vector2.getX() const;
//				vector2.setX();
//				vector2.getY() const;
//				vector2.setY();
//				vector2.set();
//				operator== (overloaded)
// See also	:
//-----------------------------------------------
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

