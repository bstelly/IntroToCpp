#include "Point2D.h"
#include <iostream>
#include "Player.h"
int main()
{
	Point2D positionOne;									// x = 0 , y = 0
	Point2D positionTwo(10, 20);							// x = 10 , y = 20
	Point2D newPositionOne = positionOne + positionTwo;		
	Point2D newPositionTwo = positionOne - positionTwo;
	Point2D newPositionThree = positionOne * positionTwo;
	Point2D newPositionFour = positionTwo * 3;
	std::cout << newPositionTwo.GetX() << std::endl;
	std::cout << newPositionTwo.GetY() << std::endl;
	newPositionFour.PrintPoint();
	bool samePosition = newPositionThree == newPositionFour;
	newPositionTwo += newPositionFour;
	newPositionTwo -= newPositionFour;
	std::cout << std::endl;
	newPositionTwo.PrintPoint();
	system("pause");

	int direction;
	Player brett("Brett");
	std::cin >> direction;
	brett.Move(direction);
	brett;
	




	system("pause");
}