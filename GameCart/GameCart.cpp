// GameCart.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Game* game = new Game(10);
	game->CreateRandomCarts();
	
	game->PrintDeck();
	
	std::cout << "Sorted Deck" << std::endl;

	game->SortDeck();
	game->PrintDeck();

	system("Pause");
	return 0;
}