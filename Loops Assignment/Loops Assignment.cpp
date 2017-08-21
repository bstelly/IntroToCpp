#include <iostream>

int main()
{
	//1. What is the out put of the following code samples?
	//a. 
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
	}
	//The output will be 0 and continue counting up to 99.

	//b. 
	for (int i = 100; i >= 0; i -= 2)
	{
		std::cout << i << std::endl;
	}
	//The ouput will be 100 and count down by 2 until it reaches 0.
	
	//c.
	int iter = 0;
	while (iter != 25)
	{
		std::cout << iter << std::endl;
		iter += 5;
	}
	//The output will start at 0 and count up by five until the number reaches 20



	//d. 
	int counter = 0;
	do
	{
		counter++;
		if (counter == 1)
			break;
		else
			std::cout << counter << std::endl;
	} while (counter < 10);
	//There will be no output since the conditions were not met

	
	//2. Using a for loop, iterate through numbers 0 to 100.
	//-For multiples of 3 print “Fizz”
	//- For multiples of 5 print “Buzz”
	//- For multiples of 3 and 5 print “FizzBuzz”
	//- Otherwise print the number.
	//Note, you will need to use the modulus operator (%)

	for (int x = 0; x >= 100; x++)
	{
		if (x % 3)
		{
			std::cout << "Fizz";
		}
		else if (x % 5)
		{
			std::cout << "Buzz";
		}
		else if (x % 3||5)
		{
			std::cout << "FizzBuzz";
		}
		else
		{
			std::cout << x;
		}
	
	}


	//3. Repeat problem 2 using a while loop and a do while loop.
	//while loop



	//4. Create a loop that prints all even numbers between 0 and 100, without printing 0 or 100
	system("pause");

	for (int aNum = 0; aNum >= 100; aNum += 2)
	{
		std::cout << aNum;
	}
}
