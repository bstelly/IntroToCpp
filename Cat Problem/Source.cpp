#include <iostream>
#include "Cat.h"

int main()
{
	char i = 65;
	char iter = 0;

	Cat cat[26];
	do
	{
		cat[iter].NameMe(i);
		i += 2;
		iter += 2;
	} while (i < 90);
	
	i = 98;
	iter = 1;
	
	do
	{
		cat[iter].NameMe(i);
		i += 2;
		iter += 2;
	} while (i < 123 && iter < 27);
	system("pause");
}
