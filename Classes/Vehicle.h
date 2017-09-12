#pragma once

class Vehicle
{
public:
	char mMaker[255];
	char mModel[255];
	int mYear;
	bool mEngineOn; 

	void IsEngineOn();
};
