#ifndef MAINMENU_H
#define MAINMENU_H
//-----------------------------------------------
// Class	: MainMenu
// Purpose	: To manage the MainMenu, a specific UI screen shown after the player has launched the game
// Usage	:	MainMenu mainMenu;
//				mainMenu.setTextAndPosition();
// 				mainMenu.drawText();
// 				mainMenu.initializeText();
// 				mainMenu.render();
// See also	: UIScreen
//-----------------------------------------------
#include "StringObject.h"
#include "Settings.h"
#include "UIScreen.h"

class MainMenu : public UIScreen
{
private:
	//Array of StringObjects used to store the displayed text and their position
	StringObject m_mainMenuText[ k_MainMenuLinesOfText ];

//#######################################################
//    Function    :    setTextAndPosition()
//    Purpose     :    To set the position and text to be displayed by the StringObjects
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   setTextAndPosition() is a virtual function that is being overriden within this class implementation
//    See also    :    UIScreen::setTextAndPosition()
//#######################################################
	virtual void setTextAndPosition() override;

//#######################################################
//    Function    :    drawText()
//    Purpose     :    To loop through and draw all of the text of the StringObjects
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   drawText() is a virtual function that is being overriden within this class implementation
//    See also    :    UIScreen::drawText()
//#######################################################
	virtual void drawText() override;

//#######################################################
//    Function    :    initializeText()
//    Purpose     :    To wrap setTextAndPosition and be called from with the constructor so that the text and positon is assigned from declaration
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   initializeText() is a virtual function that is being overriden within this class implementation
//    See also    :    UIScreen::initializeText()
//#######################################################
	virtual void initializeText() override;

public:
	//Constructor and Destructor
	MainMenu();
	virtual ~MainMenu();

//#######################################################
//    Function    :    render()
//    Purpose     :    To render(display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    render is a virtual function that is being overriden within this class implementation
//    See also    :    UIScreen::render()
//#######################################################
	virtual void render() override;
};

#endif // !MAINMENU_H
