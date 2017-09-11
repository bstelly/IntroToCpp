#include <iostream>

struct Player
{
	int mHealth;
	int mResource;
	int mStrength;
	int mLevel;
	float mMoveSpeed;
	int mArmor;
};

Player CreatePlayer();
Player CreatePlayer(int health, int strength, float moveSpeed);

struct Enemy
{
	float mHealth;
	int mAttackPower;
};

struct Student
{
	char mName[255];
	char mId[255];
	int mAge;
};

struct Item
{
	char mName[255];
	int mCost;
	int mQuantity;
};
struct Shop
{
	int mTotalGold;
	Item mItems[5];
};

void PrintShopInventory(Shop shopData)
{
	std::cout << "Current shop funds: " << shopData.mTotalGold << std::endl;
	std::cout << std::endl;
	std::cout << "Items in stock: " << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Item: " << shopData.mItems[i].mName << std::endl;
		std::cout << "Cost: " << shopData.mItems[i].mCost << " Gold" << std::endl;
		std::cout << shopData.mItems[i].mQuantity << " left" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}
}


struct Vehicle
{
	int mNumTires;
	int mNumSeats;
	char mMakerName[255];
	char mModelName[255];
	int mModelYear;
};

void CarInformation(Vehicle vehicle)
{
	std::cout << "Number of tires:     " << vehicle.mNumTires << std::endl;
	std::cout << "Number of seats:     " << vehicle.mNumSeats << std::endl;
	std::cout << "Maker Name:          " << vehicle.mMakerName << std::endl;
	std::cout << "Model Name:          " << vehicle.mModelName << std::endl;
	std::cout << "Model Year:          " << vehicle.mModelYear << std::endl;
	
}

int main()
{
	Shop blacksmith = { 2000 };
	blacksmith.mItems[0] = { "Stick", 1, 1 };
	blacksmith.mItems[1] = { "Wand", 5, 1 };
	blacksmith.mItems[2] = { "Knife", 15, 1 };
	blacksmith.mItems[3] = { "Sword", 20, 1 };
	blacksmith.mItems[4] = { "Excalibur", 1500, 1 };

	PrintShopInventory(blacksmith);
	system("pause");
	blacksmith.mItems[0].mCost = 6;
	std::cout << "Changing Prices" << std::endl;
	system("pause");
	PrintShopInventory(blacksmith);
	system("pause");
	
	Vehicle ebayAutomotive[15];
	ebayAutomotive[0] = { 2, 4, "Porshe", "911", 2016 };
	ebayAutomotive[1] = { 2, 4, "McLaren", "720s", 2018 };
	ebayAutomotive[2] = { 4, 4, "Honda", "Civic", 2017 };
	ebayAutomotive[3] = { 4,4,"Nissan", "Sentra", 2012 };
	ebayAutomotive[4] = { 2,4, "Ford", "Mustang", 1965 };
	ebayAutomotive[5] = { 2, 4, "Audi", "S8", 2017 };
	ebayAutomotive[6] = { 2, 2, "Ford", "GT", 2017 };
	ebayAutomotive[7] = { 2,4,"Toyota", "Supra", 1998 };
	ebayAutomotive[8] = { 4,4,"Ford", "Fiesta", 2005 };
	ebayAutomotive[9] = { 2, 1, "YuGiOh", "Duel Runner", 2025 };
	ebayAutomotive[10] = { 2, 3, "UNSC", "Warthog", 2500 };
	ebayAutomotive[11] = { 2, 1, "Moongoose", "Legion L40", 2017 };
	ebayAutomotive[12] = { 2, 2, "Ferrari", "La Farrari", 2015 };
	ebayAutomotive[13] = { 2, 2, "TVR", "Sergis", 2013 };
	ebayAutomotive[14] = { 1, 0, "US Army", "M1 Abrams", 2018 };
	
	char input[255];
	std::cout << "Enter a vehicle maker.\n";
	std::cin >> input;
	bool carFound = false;
	for (int i = 0; i < 15; i++)
	{
		if (strcmp(input, ebayAutomotive[i].mMakerName) == 0)
		{
			CarInformation(ebayAutomotive[i]);
			std::cout << std::endl;
			carFound = true;
		}
	}
	if (carFound == false)
	{
		std::cout << "No results found." << std::endl;
		
	}
	system("pause");
	Vehicle BrettCar = { 4, 5, "Toyta", "Camry", 2004 };
	Vehicle MatthewCar = { 4, 2, "Nissan", "Frontier", 2001 };
	Vehicle LukeCar = { 4, 4, "Subaru", "BRZ", 2014 };
	Vehicle StevenCar = { 2, 1, "Mongoose", "Legion L40", 2017 };
	
	CarInformation(BrettCar);
	
	
	Student classRoom[7];
	classRoom[0] = { "Zach", "s171", 18 };
	classRoom[1] = { "Luke", "s172", 18 };
	classRoom[2] = { "Matthew", "s173", 18 };
	classRoom[3] = { "TJ", "s174", 21 };
	classRoom[4] = { "Steven", "s175", 18 };
	classRoom[5] = { "Ralenski", "s176", 20 };
	classRoom[6] = { "Brett", "s177", 18 };
	int oldestStudent = 0;
	int oldestAge = classRoom[0].mAge;
	int i;
	for (i = 0; i < 7; i++)
	{
		if (classRoom[i].mAge > oldestAge)
		{
			oldestAge = classRoom[i].mAge;
			oldestStudent = i;
		}
	}
	std::cout << "The oldest student is " << classRoom[oldestStudent].mName << ". Their id is " << classRoom[oldestStudent].mId << ". Their age is " << classRoom[oldestStudent].mAge << std::endl;
	system("pause");
	
	
	Player matthew = {};
	Player steven = CreatePlayer();
	Player tj = CreatePlayer(100, 9001, 420);
	steven = tj;
	system("pause");

	Enemy zombie = { 50.0f, 5 };
	Enemy zombieTwo = { 100.0f, 15 };

	while (zombie.mHealth > 0 && zombieTwo.mHealth > 0)
	{
		zombie.mHealth -= zombieTwo.mAttackPower;
		zombieTwo.mHealth -= zombie.mAttackPower;
	}

	Enemy fightClub[7];
	fightClub[0] = { 911, 69 };          //TJ
	fightClub[1] = { 0.1f, 5000 };       //Matthew
	fightClub[2] = { 42.4f, 86 };        //Luke   
	fightClub[3] = { 4500.5f, 1 };       //Steven
	fightClub[4] = { 400, 400 };         //Zach
	fightClub[5] = { 9000, 500 };        //Ralenski
	fightClub[6] = { 2, 30 };            //Brett

	//Check remaining fighters

}
Player CreatePlayer()
{
	Player newPlayer = {};
	return newPlayer;
}
Player CreatePlayer(int health, int strength, float moveSpeed)
{
	Player newPlayer{};
	newPlayer.mHealth = health;
	newPlayer.mStrength = strength;
	newPlayer.mMoveSpeed = moveSpeed;
	return newPlayer;
}
