#pragma once
class Person
{
private:
	int mAge;
	char* mName;
	float mColor[3];

public:
	Person();
	Person(int age, char* name, float* color);
	void DisplayInfo();
	Person operator + (const Person & other)
	{
		Person temp;
		temp.mColor[0] = (mColor[0] + other.mColor[0]) / 2;
		temp.mColor[1] = (mColor[1] + other.mColor[1]) / 2;
		temp.mColor[2] = (mColor[2] + other.mColor[2]) / 2;
		temp.mAge = 0;
		temp.mName = "default";
		return temp;
	}
 };