#pragma once

class Player
{
private:
	char mPiece = 'X';
	int mTurn = 1;

public:
	Player();
	void ChangePiece();
	void TakeTurn();
};