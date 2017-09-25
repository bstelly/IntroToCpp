#pragma once
#include "Point2D.h"
class Player
{
private:
	int mHealth;
	Point2D mPosition;
	char mName[255];

public:
	Player();
	Player(char name[]);
	void Move(char direction);
	void SetPosition(Point2D newPos);





};