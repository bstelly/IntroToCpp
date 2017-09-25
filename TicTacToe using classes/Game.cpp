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
 int Game::CheckWin()
 {
	 if (board[0] == board[1] && board[1] == board[2])
	 {
		 return 2;
	 }
	 else if (board[3] == board[4] && board[4] == board[5])
	 {
		 return 2;
	 }
	 else if (board[6] == board[7] && board[7] == board[8])
	 {
		 return 2;
	 }
	 else if (board[0] == board[3] && board[3] == board[6])
	 {
		 return 2;
	 }
	 else if (board[1] == board[4] && board[4] == board[7])
	 {
		 return 2;
	 }
	 else if (board[2] == board[5] && board[5] == board[8])
	 {
		 return 2;
	 }
	 else if (board[0] == board[4] && board[4] == board[8])
	 {
		 return 2;
	 }
	 else if (board[2] == board[4] && board[4] == board[6])
	 {
		 return 2;
	 }
	 else if (board[0] != '1' && board[1] != '2' && board[2] != '3'
		 && board[3] != '4' && board[4] != '5' && board[5] != '6'
		 && board[6] != '7' && board[7] != '8' && board[8] != '9')
	 {
		 return 0;
	 }
	 else
	 {
		 return 1;
	 }
 }
 void Game::ClearBoard()
 {
	 board[0] = '1';
	 board[1] = '2';
	 board[2] = '3';
	 board[3] = '4';
	 board[4] = '5';
	 board[5] = '6';
	 board[6] = '7';
	 board[7] = '8';
	 board[8] = '9';
 }
 void Game::GameOver()
 {
	 if (CheckWin() == 2)
	 {
		 mTurn--;
		 std::cout << "Player " << mTurn << " Wins!!!" << std::endl;
		 system("pause");
	 }
	 else
	 {
		 std::cout << "Draw. Game Over." << std::endl;
		 system("pause");
	 }
 }