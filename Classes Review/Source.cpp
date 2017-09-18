#include <iostream>
#include "Zombie.h"	
#include <time.h>
int main()
{
	srand(time(NULL));
	Zombie zombieOne;
	Zombie zombieTwo(50, 200);
	Zombie zombieThree;
	zombieThree.SetAttack(20);
	zombieThree.SetHealth(1000);
	std::cout << "Health = " << zombieThree.GetHealth() << std::endl;
	std::cout << "Attack = " << zombieThree.GetAttack() << std::endl;
	
	while (zombieOne.GetHealth() > 0 && zombieTwo.GetHealth() > 0)
	{
		zombieOne.SetHealth(zombieOne.GetHealth() - zombieTwo.GetAttack());
		zombieTwo.SetHealth(zombieTwo.GetHealth() - zombieOne.GetAttack());
	}

	Zombie zombies[5];
	
	for (int i = 0; i < 5; i++)
	{
		zombies[i].SetHealth(rand() % 10000);
		zombies[i].SetAttack(rand() % 9002);
	}
	bool winner = false;
	int zombiesLeft = 0;

	do
	{
		zombiesLeft = 0;
		int opponentOne = rand() % 5;
		int opponentTwo = rand() % 5;
		
		zombies[opponentOne].SetHealth(zombies[opponentOne].GetHealth() - zombies[opponentTwo].GetAttack());
		zombies[opponentTwo].SetHealth(zombies[opponentTwo].GetHealth() - zombies[opponentOne].GetAttack());
		
		for (int i = 0; i < 5; i++)
		{
			if (zombies[i].GetHealth() > 0)
			{
				zombiesLeft++;
			}
		}

		winner = (zombiesLeft > 1) ? false : true;
	} while (winner == false);
	
	system("pause");

}
