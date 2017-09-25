#include "Vehicle.h"
#include "Player.h"
#include "Point2D.h"
#include "Person.h"
#include <iostream>

int main()
{
	//Point2D testOne;
	//Point2D testTwo(2.5, 4.5);
	//Point2D testThree = testOne.Add(testTwo);
	//Point2D testFour = testThree.Add(testTwo);
	//Player playerOne;
	//Player playerTwo(testTwo, "Brett");
	//Player playerThree(Point2D(1, 5), "Bob");
	//bool test = playerOne.LevelUp();
	//playerOne.MovePlayer(Point2D(4.4, 5.5));
	float* colorptr = new float[3]{ 255, 224, 180 };
	Person brett(18, "Brett", colorptr);
	brett.DisplayInfo();
	system("pause");

	Person two;
	Person child = brett + two;


	system("pause");
}