#include "Player.h"
#include <iostream>

void Player::ChangePiece()
{
	if (mTurn == 1)
	{
		mPiece = "X";
	}
	else
	{
		mPiece = 'O';
	}
}
void Player::TakeTurn()
{
	int input;
	if (mTurn == 1)
	{
		std::cout << "Player " << mTurn << ", it is your turn." << std::endl;
		std::cin >> input;
		if (input == 1 && board[0] == '1')
		{
			board[0] = mpiece;
		}
		else if (input == 2 && board[1] == '2')
		{
			board[1] = mpiece;
		}
		else if (input == 3 && board[2] == '3')
		{
			board[2] = mpiece;
		}
		else if (input == 4 && board[3] == '4')
		{
			board[3] = mpiece;
		}
		else if (input == 5 && board[4] == '5')
		{
			board[4] = mpiece;
		}
		else if (input == 6 && board[5] == '6')
		{
			board[5] = mpiece;
		}
		else if (input == 7 && board[6] == '7')
		{
			board[6] = mpiece;
		}
		else if (input == 8 && board[7] == '8')
		{
			board[7] = mpiece;
		}
		else if (input == 9 && board[8] == '9')
		{
			board[8] = mpiece;
		}
		else
		{
			std::cout << "Error. Invalid Move" << std::endl;
			mTurn--;    
		}
		mTurn++
	}
}