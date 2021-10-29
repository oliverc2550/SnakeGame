#ifndef UIMANAGER_H
#define UIMANAGER_H
//-----------------------------------------------
// Class	: UIManager
// Purpose	: Manage the loading of various UI Screens
// Usage	:	UIManager uiManager;
//				uiManager.loadMainMenu();
// 				uiManager.loadGameOverScreen();
// See also	: MainMenu, GameOverScreen
//-----------------------------------------------
#include "GameOverScreen.h"
#include "MainMenu.h"

class UIManager
{
private:
	//Member Variables
	//Instance of MainMenu
	MainMenu		m_mainMenu;
	//Instance of GameOverScreen
	GameOverScreen	m_gameOverScreen;

public:
//#######################################################
//    Function    :    loadMainMenu()
//    Purpose     :    To render the Main Menu screen during runtime
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   Wrapper function so that MainMenu::render() can cleanly be called in other cpp files
//    See also    :    MainMenu::render()
//#######################################################
	void loadMainMenu();

	//#######################################################
	//    Function    :    loadGameOverScreen()
	//    Purpose     :    To render the Game Over screen during runtime
	//    Parameters  :    None
	//    Returns     :    void
	//    Notes       :	   Wrapper function so that GameOverScreen::render() can cleanly be called in other cpp files
	//    See also    :    GameOverScreen::render()
	//#######################################################
	void loadGameOverScreen();
};

#endif // !UIMANAGER_H
