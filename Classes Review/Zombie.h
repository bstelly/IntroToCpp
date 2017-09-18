#pragma once

class Zombie
{
private:
	int mHealth;
	int mAttack;

public:
	Zombie();							//Sets health and attack to 100
	Zombie(int health, int attack);		//assigns health and attack values passed
	int GetHealth();					//returns value of health
	int GetAttack();					//returns value of attack
	void SetHealth(int health);			//assigns value of health passed in
	void SetAttack(int attack);			//assigns value of attack passed in
};
