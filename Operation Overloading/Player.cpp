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
		Point2D currentPosition = mPosition;
		mPosition = currentPosition + Point2D(0, 1);
	}
	else if (direction == 'D' || direction == 'd')
	{
		Point2D currentPosition = mPosition;
		mPosition = currentPosition + Point2D(1, 0);
	}
	else if (direction == 'A' || direction == 'a')
	{
		Point2D currentPosition = mPosition;
		mPosition = currentPosition + Point2D(-1, 0);
	}
	else if (direction == 'S' || direction == 's')
	{
		Point2D currentPosition = mPosition;
		mPosition = currentPosition + Point2D(0, -1);
	}
}