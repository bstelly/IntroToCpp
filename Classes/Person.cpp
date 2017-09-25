#include "Person.h"
#include <iostream>
Person::Person()
{
	mAge = 18;
	mName = "Default";
	mColor[0] = { 255 };
	mColor[1] = { 205 };
	mColor[2] = { 140 };
}
Person::Person(int age, char* name, float* color)
{
	mAge = age;
	mName = name;
	mColor[0] = color[0];
	mColor[1] = color[1];
	mColor[2] = color[2];
}
void Person::DisplayInfo()
{
	std::cout << mAge << std::endl << mName << std::endl << "( " << mColor[0] << ", " << mColor[1]<< ", " << mColor[2] << " )" << std::endl;
}
