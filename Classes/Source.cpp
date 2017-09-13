#include "Vehicle.h"
#include "Player.h"
#include "Point2D.h"
#include <iostream>

int main()
{
	Point2D testOne;
	Point2D testTwo(2.5, 4.5);
	Point2D testThree = testOne.Add(testTwo);
	Point2D testFour = testThree.Add(testTwo);

	Player playerOne;
	Player playerTwo(testTwo, "Brett");
	Player playerThree(Point2D(1, 5), "Bob");

	bool test = playerOne.LevelUp();

	
	playerOne.MovePlayer(Point2D(4.4, 5.5));

	system("pause");
}