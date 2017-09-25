#include "Player.h"
#include <iostream>

Player::Player()
{
	mHealth = 100;
	mPosition = Point2D();
	strcpy_s(mName, "Default");
}
Player::Player(char name[])
{
	mHealth = 100;
	mPosition = Point2D();
	strcpy_s(mName, name);
}
void Player::Move(char direction)
{
	if (direction == 'W' || direction == 'w')
	{
		mPosition.Add(Point2D(0, 1));
	}
	else if (direction == 'D' || direction == 'd')
	{
		mPosition.Add(Point2D(1, 0));
	}
	else if (direction == 'A' || direction == 'a')
	{
		mPosition.Add(Point2D(-1, 0));
	}
	else if (direction == 'S' || direction == 's')
	{
		mPosition.Add(Point2D(0, -1));
	}
}