#include "Player.h"
#include <iostream>

//void Player::TakeDamage(int amount)
//{
//	mHealth -= amount;
//}
//
//void Player::ModifyLevel(int value)
//{
//	mLevel += value;
//}

Player::Player()
{
	mPos = Point2D();
	strcpy_s(mName, "Default");
	mLevel = 1;
}

Player::Player(Point2D pos, char name[])
{
	mPos = pos;
	strcpy_s(mName, name);
	mLevel = 1;
}

bool Player::LevelUp()
{
	return mLevel = (mLevel < levelCap) ? mLevel += 1 : mLevel = levelCap;
}

void Player::MovePlayer(Point2D direction)
{
	mPos = mPos.Add(direction);
	

	
}


