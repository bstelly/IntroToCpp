#include <iostream>
#include "Game.h"
#include "Player.h"

int main()
{
	while (CheckWin() == 1)
	{
		Game Board();
		DisplayBoard();
		TakeTurn();
		ChangePiece();
		CheckWin();
		GameOver();
	}

}

