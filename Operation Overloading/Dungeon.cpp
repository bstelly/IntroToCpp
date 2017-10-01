#include "Dungeon.h"
#include <iostream>


Dungeon::Dungeon()
{
	mRooms = Point2D(10, 10);
	mPlayer;
	mNumCols = 10;
	mNumRows = 10;


	
}

void Dungeon::GenRooms()
{
	if (mNumCols == 10 && mNumRows == 10)
	{
		int dungeon[10][10];
		for (int row = 0; row < 10; row++)
		{
			for (int col = 0; col < 10; col++)
			{
				std::cout << dungeon[row][col] << std::endl;
			}
		}
	}

	else
	{
		int row = mNumRows;
		int col = mNumCols;
		int dungeon[row][col];
	}
}

Dungeon::Dungeon(Player* player, int rows, int cols)
{
	mNumRows = rows;
	mNumCols = cols;
	Player* player = player;
}

bool Dungeon::CheckPlayerPosition()
{
	
}

void Dungeon::PrintRooms()
{

}