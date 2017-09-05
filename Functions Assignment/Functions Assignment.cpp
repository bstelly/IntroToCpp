#include <iostream>

void SwapTwoNumbers()
{
	std::cout << "Create a program that swaps two numbers. \n";
	std::cout << "Input two numbers. \n";
		int a, b;
		std::cin >> a >> b;
		std::cout << a << "," << b << std::endl;
		int c;
		c = a;
		a = b;
		b = c;
		std::cout << a << "," << b << std::endl;
		system("pause");
}

void AvgOfFiveNumbers()
{
	std::cout << "Ask the user for 5 numbers and output the average. \n";
		int num1, num2, num3, num4, num5;
		std::cout << "Input five numbers. \n";
		std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
		std::cout << "The range of these numbers is: \n";
		int x = (num1 + num2 + num3 + num4 + num5) / 5;
		std::cout << x << std::endl;
		system("pause");
}

void FizzBuzz()
{
	std::cout << "Using a for loop, iterate through numbers 0 to 100. \n Print fizz for multiples of 3, print buzz for multiples of 5, \n and for multiples of both print fizzbuzz. Otherwise print the number.";
	for (int x = 0; x <= 100; x++)
	{
		if (x % 15 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (x % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (x % 3 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		else
		{
			std::cout << x << std::endl;
		}
	}
	system("pause");
}

void EvenNumbersLoop()
{
	std::cout << "Create a loop that prints all even numbers between 0 and 100 without printing 0 or 100.";
	int evenNum = 2;
		while (evenNum != 100)
		{
			std::cout << evenNum << std::endl;
			evenNum += 2;
		}
		system("pause");
}
void YEqualToZero()
{
	std::cout << "Write an if statement that assigns 100 to the value of x when y is equal to zero.";
	int x = 0;
	bool y;
	{
		std::cin >> y;
	}
	if (y == 0)
	{
		x = 100;
	}
	std::cout << x << std::endl;
	system("pause");
}

void Month()
{
	std::cout << "Write a program that accepts an interger that represents the month. \n";
	int month = 12;
	std::cout << "Input a number from 1-12 \n";
	std::cin >> month;

	switch (month)
	{
	case 1:
		std::cout << "January has 31 days \n";
		break;
	case 2:
		std::cout << "February has 28 days \n";
		break;
	case 3:
		std::cout << "March has 31 days \n";
		break;
	case 4:
		std::cout << "April has 30 days \n";
		break;
	case 5:
		std::cout << "May has 31 days \n";
		break;
	case 6:
		std::cout << "June hase 30 days \n";
		break;
	case 7:
		std::cout << "July has 31 days \n";
		break;
	case 8:
		std::cout << "August has 31 days \n";
		break;
	case 9:
		std::cout << "September has 30 days \n";
		break;
	case 10:
		std::cout << "October has 31 days \n";
		break;
	case 11:
		std::cout << "November has 30 days \n";
		break;	
	case 12:
		std::cout << "December has 31 days \n";
		break;
	default:
		if (month > 12 || month < 1)
			std::cout << "Error. Invalid Number. \n";
		break;
	}
	system("pause");
}

void ArrayOneThroughTen()
{
	std::cout << "Declare an array with the values 1 - 10 and print the 5th index. \n";
	int myArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << myArray[4] << std::endl;	
	system("pause");
}

void ArraySizeFive()
{
	std::cout << "Create an Array of size 5 and ask the user to input 5 numbers. \n Display largest and smallest numbers. \n";
	int anArray[5];
	int minNum = anArray[0];
	int maxNum = anArray[0];
	std::cout << "Input  five numbers. \n";
	for (int num = 0; num < 5; num++)
	{
		std::cin >> anArray[num];
	}
	for (int iter = 0; iter < 5; iter++)
	{
		if (iter < minNum)
		{
			minNum = iter;
			std::cout << "The smallest number is " << minNum << std::endl;
		}
		for (int iter = 0; iter < 4; iter++)
		{
			if (iter > maxNum)
			{
				minNum = iter;
				std::cout << "The largest number is " << maxNum << std::endl;
			}
		}
		system("pause");

	}
}

void ThreeByThreeArray()
{
	std::cout << "Create a program that creates a small 3x3 array of intergers. Output numbers in grid format.";

	int grid[3][3];
	int row;
	int col;
	for (row = 0; row < 1; row++)
	{
		for (col = 0; col < 3; col++)
		{
			std::cout << grid[row][col];
		}
	}
	for (row = 1; row < 2; row++)
	{
		for (col = 0; col < 3; col++)
		{
			std::cout << grid[row][col];
		}
	}
	for (row = 2; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			std::cout << grid[row][col];
		}
	}
}

void DaenerysTargaryenDragonProblem()
{
	std::cout << "Daenerys Targaryen Dragon Problem \n";
	int kilosOfFood[3][7];
	std::cout << "Input the amount of food eaten by Bob on each day of the week. \n";
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 7; col++)
		{

			std::cin >> kilosOfFood[row][col];
		}
		std::cout << "Input the amount of food eaten by Cat on each day of the week. \n";
		for (int row = 1; row < 2; row++)
		{
			for (int col = 0; col < 7; col++)
			{

				std::cin >> kilosOfFood[row][col];
			}
		}
		std::cout << "Input the amount of food eaten by Scott on each day of the week. \n";
		for (int row = 2; row < 3; row++)
		{
			for (int col = 0; col < 7; col++)
			{

				std::cin >> kilosOfFood[row][col];
			}
		}
		
	}

	float sumOfAllFoodEaten = 0;
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 7; col++)
		{
			sumOfAllFoodEaten = sumOfAllFoodEaten += kilosOfFood[row][col];
		}
	}
	float avgEatenByAllDragons = sumOfAllFoodEaten / 21;
	std::cout << "The average amount eaten per day by all of the dragons together is: \n";
	std::cout << avgEatenByAllDragons << std::endl;

	
	float sumEatenByBob = 0;
	for (int row = 0; row < 1; row++)
	{
		for (int col = 0; col < 7; col++)
		{
			sumEatenByBob = sumEatenByBob += kilosOfFood[row][col];
		}
	}
	float avgEatenByBob = sumEatenByBob / 7;
	std::cout << "During the week, Bob ate an average of " << avgEatenByBob << " kilos." << std::endl;

	

	float sumEatenByCat = 0;
	for (int row = 1; row < 2; row++)
	{
		for (int col = 0; col < 7; col++)
		{
			sumEatenByCat = sumEatenByCat += kilosOfFood[row][col];
		}
	}
	float avgEatenByCat = sumEatenByCat / 7;
	std::cout << "During the week, Cat ate an average of " << avgEatenByCat << " kilos." << std::endl;



	float sumEatenBySteve = 0;
	for (int row = 2; row < 3; row++)
	{
		for (int col = 0; col < 7; col++)
		{
			sumEatenBySteve = sumEatenBySteve += kilosOfFood[row][col];
		}
	}
	float avgEatenBySteve = sumEatenBySteve / 7;
	std::cout << "During the week, Steve ate an average of " << avgEatenBySteve << " kilos." << std::endl;

	system("pause");

}

void main()
{
	SwapTwoNumbers();
	AvgOfFiveNumbers();
	FizzBuzz();
	EvenNumbersLoop();
	YEqualToZero();
	Month();
	ArrayOneThroughTen();
	ArraySizeFive();
	ThreeByThreeArray();
	DaenerysTargaryenDragonProblem();
}