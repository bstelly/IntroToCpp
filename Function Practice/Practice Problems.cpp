#include <iostream>


//Sum of all the values in an array
int ArraySum(int arrayVar[], int arrayLength)
{
	int sum = 0;
	for (int i = 0; i < arrayLength; i++)
	{
		sum += arrayVar[i];
	}
	return sum;

}

//Adds two numbers
int AddTwoNumbers(int a, int b)
{
	int result = a + b;
		return result;
}

//Subtracts three numbers
int SubThreeNumbers(int m, int j, int r)
{
	int result = m - j - r;
	return result;
}

//Multiplies any number by 10
int MultANumByTen(int a)
{
	int result = a * 10;
	return result;
}

//Halves any Value
float HalveAnyNumber(int a)
{
	float HalveAnyNumber = a / 2;
	return HalveAnyNumber;
}

//Create two functions:
// - First function returns a value passed in doubled
// - The second takes in an array and the length of the array
// - Using the first function double the values in the array passed in
int Double(int a)
{
	return a * 2;
}
int DoubleArray(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		array[i] = Double(array[i]);
	}
}

//Create a function that allows you to input a name and have the output reverse the name
void ReverseString(char arrayName[], int length)
{
	int backIter = length;
	for (int i = 0; i < length / 2; i++)
	{
		char helper = arrayName[i];
		arrayName[i] = arrayName[backIter];
		arrayName[backIter] =
	}
}


{

}

int main()
{
	int myArray[] = { 2, 4, 6, 8, 10 };
	std::cout << ArraySum(myArray, 5) << std::endl;
	system("pause");

		std::cout << AddTwoNumbers(2, 5) << std::endl;
		std::cout << SubThreeNumbers(25, 5, 10) << std::endl;
		std::cout << MultANumByTen(43) << std::endl;
		std::cout << HalveAnyNumber(100) << std::endl;
		system("pause");


}