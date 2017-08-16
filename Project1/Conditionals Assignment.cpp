#include <iostream>


int main()
{
	//1. What do the following conditionals evaluate to if "A = true and B = false"
	// A || B
	//true
	
	// A || B
	//true
	
	// !A
	//false
	
	// !(A && A)
	//false
	
	// B && A
	//false
	
	//(!B || A)
	//true

	
	//2. Write an if statement that assigns 100 to the value of x when y is equal to zero
	int x = 0;
	bool y;
	{
		std::cin >> y;
	}
	
	if(y == 0)
	{
		x = 100;
	}
	std::cout << x << std::endl;
	system("pause");
	
	//3. Write a program that accepts an integer that represents the month of the year. 
	//It should then display the number of days in that month. If a number that doesn’t correspond 
	//to a month is entered then the program should display an error message. You must use a switch statement
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
		std::cout << "June has 30 days \n";
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
		std::cout << "November has 30 days\n";
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
	
	
	//4. Redo problem 3 using if statements
	
	std::cout << "Input a number from 1-12 \n";
	
	std::cin >> month;

	if(month == 1)
	{
		std::cout << "January has 31 days \n";
	}
	else if(month == 2)
	{
		std::cout << "February has 28 days \n";
	}
	else if(month == 3)
	{
		std::cout << "March has 31 days \n";
	}
	else if(month == 4)
	{
		std::cout << "April has 30 days \n";
	}
	else if (month == 5)
	{
		std::cout << "May has 31 days \n";
	}
	else if (month == 6)
	{
		std::cout << "June has 30 days \n";
	}
	else if (month == 7)
	{
		std::cout << "July has 31 days \n";
	}
	else if (month == 8)
	{
		std::cout << "August has 31 days \n";
	}
	else if (month == 9)
	{
		std::cout << "September has 30 days \n";
	}
	else if (month == 10)
	{
		std::cout << "October has 31 days \n";
	}
	else if (month == 11)
	{
		std::cout << "November has 30 days \n";
	}
	else if (month == 12)
	{
		std::cout << "December has 31 days \n";
	}
	else
	{
		std::cout << "Error. Invalid Number. \n";
	}

	//5. Convert problem 2 into a ternary operator

	std::cin >> y;
	x = (y == 0) ? 100 : 0;
	std::cout << x << std::endl;
	system("pause");
}

