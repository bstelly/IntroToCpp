#include <iostream>

void main()
{
	//You can not print to the console unless the problem specifies.

	//1. Select suitable variable types and names for the following examples
	//a) The average height of students in your class
	float avgHeightYr1ProgClass;
	//b) The tax rate for incomes over $65000
	float incomeTaxRate_Over65k;
	//c) The tax rate for incomes below $5000
	float incomeTaxRate_Below5k;
	//d) The total cost of all the games on your Steam library
	float steamLibraryTotal;

		//2. Select suitable data types to hold the following values :
		//a) 121
	int aNumber = 121;
	//b) 9.4
	float floatValue = 9.4f;
	//c) r
	char aLetter;
	//d) 100000
	int aBiggerNumber = 100000;
	//e) False
	bool trueFalse = false;

	//3. Create a program that swaps two numbers. Ask the user for 2 numbers in the console window
	//and store the result in variables called “a” and “b” print the result to screen.Write code 
	//that swaps the values for these variables, then print the variables “a” and “b” again.
	//You should comment your code.
	std::cout << "Input two numbers.\n";
	int a, b;
	std::cin >> a >> b;
	std::cout << a << b << std::endl;
	int c;
	c = a;
	a = b;
	b = c;
	
	std::cout << a << b << std::endl;
	system("pause");



	//4. Ask the user for 5 numbers and output the average of these numbers.		
	int num1, num2, num3, num4, num5;
	std::cout << "Input five numbers.\n";
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
	int x = (num1 + num2 + num3 + num4 + num5) / 5;
	std::cout << x;
	system("pause");

	//5. Redo question 3 but allows the user to input the values to be swapped and provide information
	//in the console proving the data was swapped.
}