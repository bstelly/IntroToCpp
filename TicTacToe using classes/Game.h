#pragma once
#include "Player.h"
class Game
{
private:
	char board[];
	
	
public:
	char Board();
	void DisplayBoard();
	int Maingame();
	int GameOver();
	int CheckWin();
	void ClearBoard();

};