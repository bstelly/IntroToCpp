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

	//There will be no output because the variable "counter" does not meet the condition for "do".


	


	
	//2. Using a for loop, iterate through numbers 0 to 100.
	//-For multiples of 3 print “Fizz”
	//- For multiples of 5 print “Buzz”
	//- For multiples of 3 and 5 print “FizzBuzz”
	//- Otherwise print the number.
	//Note, you will need to use the modulus operator (%)

	system("pause");

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
		else if (x % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
	
		else
		{
			std::cout << x << std::endl;
		}
	
	}

	system("pause");
	//3. Repeat problem 2 using a while loop and a do while loop.
	//do while loop

	int num = 0;
	{
		do
		{
			if (num % 15 == 0)
			{
				std::cout << "FizzBuzz" << std::endl;
			}
			else if (num % 3 == 0)
			{
				std::cout << "Fizz" << std::endl;
			}
			else if (num % 5 == 0)
			{
				std::cout << "Buzz" << std::endl;
			}

			else
			{
				std::cout << num << std::endl;
			
			}
			num++;
		}

		while (num <= 100);
	}
		system("pause");
	
		//While Loop
		while (num <= 100)
		{
			if (num % 15 == 0)
			{
				std::cout << "FizzBuzz" << std::endl;
			}
			else if (num % 3 == 0)
			{
				std::cout << "Fizz" << std::endl;
			}
			else if (num % 5 == 0)
			{
				std::cout << "Buzz" << std::endl;
			}

			else
			{
				std::cout << num << std::endl;

			}
			num++;
		}
		
		system("pause");
		
		
		
		//4. Create a loop that prints all even numbers between 0 and 100, without printing 0 or 100

	int evenNum = 0;
	while (evenNum != 100)
	{
		std::cout << evenNum << std::endl;
		evenNum += 2;
	}
	
	
	system("pause");

	}
