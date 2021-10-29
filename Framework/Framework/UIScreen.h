#ifndef UISCREEN_H
#define UISCREEN_H
//-----------------------------------------------
// Class	: UIScreen
// Purpose	: To serve as a base class for any different UI Screens that are text based
// Usage	:	UIScreen uiScreen;
//				uiScreen.setTextAndPosition();
// 				uiScreen.drawText();
// 				uiScreen.initializeText();
// 				uiScreen.render();
// See also	: UIScreen
//-----------------------------------------------

class UIScreen
{
private:
	
public:
//#######################################################
//    Function    :    setTextAndPosition()
//    Purpose     :    To set the position and text to be displayed by the StringObjects
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   setTextAndPosition() is a virtual function that can overriden from inheriting classes
//    See also    :    
//#######################################################
	virtual void setTextAndPosition() {};

//#######################################################
//    Function    :    drawText()
//    Purpose     :    To loop through and draw all of the text of the StringObjects
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   drawText() is a virtual function that can overriden from inheriting classes
//    See also    :    
//#######################################################
	virtual void drawText() {};

//#######################################################
//    Function    :    initializeText()
//    Purpose     :    To wrap setTextAndPosition and be called from with the constructor so that the text and positon is assigned from declaration
//    Parameters  :    None
//    Returns     :    void
//    Notes       :	   initializeText() is a virtual function that can overriden from inheriting classes
//    See also    :    
//#######################################################
	virtual void initializeText() { setTextAndPosition(); };

//#######################################################
//    Function    :    render()
//    Purpose     :    To render(display) specific member variables or other desired elements of the class
//    Parameters  :    None
//    Returns     :    void
//    Notes       :    render is a virtual function that can overriden from inheriting classes
//    See also    :    
//#######################################################
	virtual void render() { drawText();};
};

#endif // !MAINMENU_H
