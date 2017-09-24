#include "Game.h"
#include <iostream>

 char Game::Board()
{
	char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
}
 void Game::DisplayBoard()
 {
	 std::cout << " " << std::endl;
	 std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << std::endl;
	 std::cout << "===========" << std::endl;
	 std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << std::endl;
	 std::cout << "===========" << std::endl;
	 std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << std::endl;
	 std::cout << " " << std::endl;
 }
