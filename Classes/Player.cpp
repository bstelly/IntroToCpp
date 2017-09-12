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

Player::Player(Point2D location, char name[])
{

}

