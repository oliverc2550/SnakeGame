#ifndef SETTINGS_H
#define SETTINGS_H

//Constant in values that correspond to a variety of different values. Declared here to prevent use of magic numbers and variable repeating
//Declared in a separate header file for easy use across project
const int k_gameOverLinesOfText = 2;
const int k_MainMenuLinesOfText = 6;
const int k_LineSpacing = 6;
const int k_maxNumberOfParticles = 4;
const int k_WallMaxHorizontalSize = 102;
const int k_WallMaxVerticalSize = 52;
const int k_FruitMaxXPosition = k_WallMaxHorizontalSize - 3;
const int k_FruitMaxYPosition = k_WallMaxVerticalSize - 3;
const int k_SnakeTailMaxLength = ( k_WallMaxVerticalSize * k_WallMaxHorizontalSize ) - 1;
const int k_SnakeDefaultXPosition = k_WallMaxHorizontalSize / 2;
const int k_SnakeDefaultYPosition = k_WallMaxVerticalSize / 2;
const int k_ScoreDisplayPosition = k_WallMaxVerticalSize + 1;

#endif // ifndef SETTINGS_H
