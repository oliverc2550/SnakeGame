#include <iostream>
#include <windows.h>

#include "Game.h"

Game::Game()
{

}

void Game::run()
{
	//game loop
	while (true)
	{
		system("cls");

		//update();
		//render();

		Sleep(1000);
	}
}