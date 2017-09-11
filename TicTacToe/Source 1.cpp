#include <iostream>

char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char piece;
void Board()
{
	std::cout << board[0] << "|" << board[1] << "|" << board[2] << std::endl;
	std::cout << "=====" << std::endl;
	std::cout << board[3] << "|" << board[4] << "|" << board[5] << std::endl;
	std::cout << "=====" << std::endl;
	std::cout << board[6] << "|" << board[7] << "|" << board[8] << std::endl;
	std::cout << " " << std::endl;
}

int GameOver()
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
		&& board[3] != '4' && board[4] != '5' && board[5] != '6'			//Draw Condition
		&& board[6] != '7' && board[7] != '8' && board[8] != '9')
	{
		return 0;
	}
	else
	{
		return 1;               //continue playing
	}
}

int main()
{
	std::cout << "Tic Tac Toe" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "How to Play: " << std::endl;
	std::cout << "Player One is 'X' and Player Two is 'O'.  On your turn, choose a number to place your 'X' or 'O'." << std::endl;
	std::cout << " " << std::endl;
	//Board is generated and displayed
	
	int player = 1;
	int input;
	int game;     //  1 - game is being played,   2 - game over, winner,     0 - game over, no winner

	//main game loop
	do
		{
			Board();
			player = (player % 2) ? 1 : 2;
			std::cout << "Player " << player << " it is your turn. Enter a number." << std::endl;
			std::cin >> input;
			piece = (player == 1) ? 'X' : 'O';		//Ternary operator to determine which piece is used for which player

			if (input == 1 && board[0] == '1')
			{
				board[0] = piece;
			}
			else if (input == 2 && board[1] == '2')
			{
				board[1] = piece;
			}
			else if (input == 3 && board[2] == '3')
			{
				board[2] = piece;
			}
			else if (input == 4 && board[3] == '4')
			{
				board[3] = piece;
			}
			else if (input == 5 && board[4] == '5')
			{
				board[4] = piece;
			}
			else if (input == 6 && board[5] == '6')
			{
				board[5] = piece;
			}
			else if (input == 7 && board[6] == '7')
			{
				board[6] = piece;
			}
			else if (input == 8 && board[7] == '8')
			{
				board[7] = piece;
			}
			else if (input == 9 && board[8] == '9')
			{
				board[8] = piece;
			}
			else
			{
				std::cout << "Error. Invalid Move" << std::endl;
			}
			game = GameOver();
			player++;
	} while (game == 1);
	
	Board();
	
	if (game == 2)
	{
		player--;
		std::cout << "Player " << player << " Wins!!!" << std::endl;
		system("pause");
	}
	else
	{
		std::cout << "Draw. Game Over." << std::endl;
		system("pause");
	}
	
}

