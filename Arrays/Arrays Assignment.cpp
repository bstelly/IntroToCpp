#include <iostream>

int main()
{


	//1. Declare an array for each of the following(size of array does not matter unless
	//sepcified).

	//a. heights of students
	float height[8];

	//b. age of parents
	int parentsAge[2];

	//c. true of false questions
	int trueFalseQuestions[10];

	//d. letters of the alphabet
	char alphabet[26];




	//2. What is the size in memory of the following arrays

	//a. 
	float heights[5];
	//20 bytes

	//b. 
	int ages[10];
	//40 bytes

	//c. 
	char letters[26];
	//26 bytes



	//3. Declare an array with the values 1 - 10;
	int myArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	
	//4. Using the array created in problem 3 print the 5th index.
	std::cout << myArray[4] << std::endl;

	system("pause");
	
	
	
	//5. Using a loop, populate an array of size 10 with the values 10 - 1.
	
	int numbers[10];

	for (int i = 10; i > 0 ; i -= 1);
	{
		numbers[i] = i;
	}
	



	//6. Create an array of size five then ask the user to input five 
	//number into the array. Display the largest and smallest numbers 
	//to the console.
	
	int anArray[5];
	int minNum = anArray[0];
	int maxNum = anArray[0];
	for (int num = 0; num < 4; num++)
	{
		std::cout << "Input  five numbers.";
		std::cin >> anArray[num];
	}
	for (int iter = 0; iter < 4; iter++)
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
	
	
	//7. Create a program that creates a small 3x3 array of integers. Use a nested for 
		//loop to initialise the numbers 1 - 9. Output the numbers in a grid format.
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