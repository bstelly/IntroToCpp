#include <iostream>
#include "Zombie.h"


//Create a class representing a zombie.
//- Each zombie should have health and an attack value.
//- Ensure that the zombie's variables are private and you have functions that allow us to modify the zombie data.
//- Using the zombie class, create a game where a number of zombies attack each other until only one remains.
//- You must have a written UML of the zombie class.This can be done either on paper, google draw, gliffy.

int main
{
	Zombie zombie[5];
zombie[1] = {100, 30};
zombie[2] = { 200, 15 };
zombie[3] = { 1000, 2 };
zombie[4] = { 15, 150 };
zombie[5] = { 72, 28 };

bool winner = false;
int remaining = 0;


while (winner == false)
{
	int opponent = rand() % 5;
	int opponentTwo = rand() % 5;

	zombie[opponent].mHealth -= zombie[opponentTwo].mAttack;
	
	for (int i = 0; i < 7; i++)
	{
		if (zombie[i].mHealth > 0)
		{
			remaining++;
		}

		
	}
}



winner = (remaining < 1) ? true : false;


}