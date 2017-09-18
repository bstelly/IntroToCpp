#pragma once

class Zombie
{
private:
	int mHealth;
	int mAttack;

public:
	Zombie();
	void TakeDamage(int amount);
	Zombie(int health, int attack);
};