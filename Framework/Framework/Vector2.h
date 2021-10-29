#ifndef VECTOR2_H
#define VECTOR2_H
//-----------------------------------------------
// Class	: Vector2
// Purpose	: To provide easy to use Vector2s for use within Snake Game for positioning chars and other game elements
// Usage	:	Vector2 vector2
//				operator== (overloaded)
//				vector2.getX() const;
//				vector2.setX();
//				vector2.getY() const;
//				vector2.setY();
//				vector2.set();
// See also	:
//-----------------------------------------------
class Vector2 
{
private:
	//Declared variable to store the int data for x
	int m_x;
	//Declared variable to store the int data for y
	int m_y;

public:
	//Constructor and Destructor
	Vector2();
	Vector2( int x, int y );
	~Vector2();

//#######################################################
//    Function    :    operator==
//    Purpose     :    To overload the == operator allowing it to be used by Vector2 class
//    Parameters  :    Vector2 vector2
//    Returns     :    bool true/false
//    Notes       :
//    See also    :    
//#######################################################
	bool operator==( Vector2 vector2 );

//#######################################################
//    Function    :    getX()
//    Purpose     :    To return the value assigned to m_characterToRender, so that it can be viewed outside this class
//    Parameters  :    None
//    Returns     :    int m_x
//    Notes       :    Function is a const function, meaning data returned cannot be modifed. Only suitable for comparision/checking purposes
//    See also    :    
//#######################################################
	int getX() const;

//#######################################################
//    Function    :    setX()
//    Purpose     :    To set or change the value assigned to m_characterToRender, so that it can be changed outside this class
//    Parameters  :    int xValue
//    Returns     :    void
//    Notes       :    Function is used to modify a private/protected member variable from outside the class implementation
//    See also    :    
//#######################################################
	void setX( int xValue );

//#######################################################
//    Function    :    getY()
//    Purpose     :    To return the value assigned to m_characterToRender, so that it can be viewed outside this class
//    Parameters  :    None
//    Returns     :    int m_y
//    Notes       :    Function is a const function, meaning data returned cannot be modifed. Only suitable for comparision/checking purposes
//    See also    :    
//#######################################################
	int getY() const;

//#######################################################
//    Function    :    setY()
//    Purpose     :    To set or change the value assigned to m_characterToRender, so that it can be changed outside this class
//    Parameters  :    int yValue
//    Returns     :    void
//    Notes       :    Function is used to modify a private/protected member variable from outside the class implementation
//    See also    :    
//#######################################################
	void setY( int yValue );

//#######################################################
//    Function    :    set()
//    Purpose     :    To set or change the value assigned to m_characterToRender, so that it can be changed outside this class
//    Parameters  :    int x, int y
//    Returns     :    void
//    Notes       :    Function is used to modify a private/protected member variable from outside the class implementation
//    See also    :    
//#######################################################
	void set( int x, int y );
};


#endif // !VECTOR2_H

