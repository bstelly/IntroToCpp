#include <iostream>

/*
Week 1 Assignment:
What you will need to know
- Variables
- Conditionals
- Loops
- arrays

Daenerys Targaryen wants to keep track of how many kilos of food her three dragons eat
each day during a typical week.Write a program that stores this information in a
2 dimensional 3 x 7 array, where each row represents a different dragon and each column
represents a different day of the week.Then it should create a report that includes the
following information :
- Average amount of food eaten per day by all the dragons together
- Average amount of food eaten per day by any one dragon
- The greatest amount of food eaten during one day and which dragon that was
- The least amount of food eaten during one day and which dragon that was
*/


int main()
{
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
			system("pause");
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
		
	system("pause");
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
		
		system("pause");

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
				
				system("pause");
				

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

	//Can't figure out how to 
	//tell the day and dragons name that the most and least amount of food was eaten.














}