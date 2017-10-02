#include "Dungeon.h"
#include <iostream>
#include <time.h>


Dungeon::Dungeon()
{
	mPlayer;
	mNumCols = 10;
	mNumRows = 10;


	
}

void Dungeon::GenRooms()
{
	char player = 'X';
	char emptySpace = ' ';
	char pit = 'p';
	char gold = 'g';
	char wumpus = 'w';
	for (int row = 0; row < mNumRows; row++)
	{
		for (int col = 0; col < mNumCols; col++)
		{
			
		}
	}
}

Dungeon::Dungeon(Player* player, int rows, int cols)
{
	mNumRows = rows;
	mNumCols = cols;
	Player* player = player;
	mRooms;
	int dungeon[mNumRows][mNumCols];

}

int Dungeon::CheckPlayerPosition()  // 1 == game being played, 2 == Game won, 0 == Game lost
{
	if ('X' == 'p')
	{
		std::cout << "You have fallen into a pit. Game Over." << std::endl;
		return 0;
	}
	if ('X' == 'w')
	{
		std::cout << "You have been caught by the wumpus. Game Over." << std::endl;
		return 0;
	}
	if ('X' == ' ')
	{
		std::cout << "You move into a dark room." << std::endl;
		return 1;
	}
	if ('X' == 'g')
	{
		std::cout << "You found the gold! YOU WIN!" << std::endl;
		return 2;
	}
}

void Dungeon::PrintRooms()
{
	for (int row = 0; row < mNumRows; row++)
	{
		for (int col = 0; col < mNumCols; col++)
		{
			std::cout << dungeon[mNumRows][mNumCols];
		}
	}
}