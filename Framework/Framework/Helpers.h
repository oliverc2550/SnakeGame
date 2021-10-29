#ifndef HELPERS_H
#define HELPERS_H

#include <string>

class Vector2;

namespace GameWindow
{
//#######################################################
//    Function    :    initializeGameWindow()
//    Purpose     :    To set the size and name of the command prompt window
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Declared in Helpers due to use of Win32 code
//    See also    :    
//#######################################################
	void initializeGameWindow();
}

namespace Keyboard
{
//#######################################################
//    Function    :    checkButton()
//    Purpose     :    To check if the use has pressed the passed in key
//    Parameters  :    int virtualKey
//    Returns     :    bool true/false
//    Notes       :	   Declared in Helpers to allow easy use through project
//    See also    :    
//#######################################################
	bool checkButton( int virtualKey );
}

namespace Maths
{
//#######################################################
//    Function    :    initializeRand()
//    Purpose     :    To initialize a new random seed for use in generating random number
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Declared in Helpers to allow easy use through project
//    See also    :    
//#######################################################
	void initializeRand();

//#######################################################
//    Function    :    getRandomInt()
//    Purpose     :    To return a random int with the range specified by the passed in parameter
//    Parameters  :    int maxValue
//    Returns     :    int rand() % maxValue + 1
//    Notes       :	   Declared in Helpers to allow easy use through project
//    See also    :    
//#######################################################
	int getRandomInt( int maxValue );
}

namespace TextCentering
{
//#######################################################
//    Function    :    horizontallyCenterText()
//    Purpose     :    To return an int equal to the horizontal center of the screen minus the size of the text passed in
//    Parameters  :    std::string textToCenter
//    Returns     :    int horizontalPosition
//    Notes       :	   Declared in Helpers to allow easy use through project
//    See also    :    
//#######################################################
	int horizontallyCenterText( std::string textToCenter );

//#######################################################
//    Function    :    verticallyCenterText()
//    Purpose     :    To an return int equal to the vertical center of the screen plus the offset passed in
//    Parameters  :    int verticalOffset = 0
//    Returns     :    int verticalPosition
//    Notes       :	   Declared in Helpers to allow easy use through project. Offset is an optional parameter
//    See also    :    
//#######################################################
	int verticallyCenterText( int verticalOffset = 0 );
}

namespace Rendering
{
	//void gotoXY( int x, int y );

//#######################################################
//    Function    :    drawChar()
//    Purpose     :    To render(draw) a char at the specified location
//    Parameters  :    char c, Vector2& position
//    Returns     :    void
//    Notes       :	   Declared in Helpers due to use of Win32 code
//    See also    :    
//#######################################################
	void drawChar( char c, Vector2& position );

//#######################################################
//    Function    :    drawColoredCell()
//    Purpose     :    To render(draw) a colored cell at the specified location
//    Parameters  :    int colorValue, Vector2& position
//    Returns     :    void
//    Notes       :	   Declared in Helpers due to use of Win32 code
//    See also    :    
//#######################################################
	void drawColoredCell( int colorValue, Vector2& position );

//#######################################################
//    Function    :    drawString()
//    Purpose     :    To render(draw) a std::string at the specified location
//    Parameters  :    std::string string, Vector2& position
//    Returns     :    void
//    Notes       :	   Declared in Helpers due to use of Win32 code
//    See also    :    
//#######################################################
	void drawString( std::string string, Vector2& position );

//#######################################################
//    Function    :    drawScore()
//    Purpose     :    To render(draw) the players score at the specified location
//    Parameters  :    std::string string, int scoreValue, Vector2& position
//    Returns     :    void
//    Notes       :	   Declared in Helpers due to use of Win32 code
//    See also    :    
//#######################################################
	void drawScore( std::string string, int scoreValue, Vector2& position );

//#######################################################
//    Function    :    eraseChar()
//    Purpose     :    To unrender(erase) a char at the specified location
//    Parameters  :    Vector2& position
//    Returns     :    void
//    Notes       :	   Declared in Helpers due to use of Win32 code
//    See also    :    
//#######################################################
	void eraseChar( Vector2& position );

//#######################################################
//    Function    :    eraseColoredCell()
//    Purpose     :    To unrender(erase) a colored cell at the specified location
//    Parameters  :    Vector2& position
//    Returns     :    void
//    Notes       :	   Declared in Helpers due to use of Win32 code
//    See also    :    
//#######################################################
	void eraseColoredCell( Vector2& position );
}

#endif // ifndef HELPERS_H