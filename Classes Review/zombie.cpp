#include "Zombie.h"

Zombie::Zombie()
{
	mHealth = 100;
	mAttack = 100;
}

Zombie::Zombie(int health, int attack)
{
	mHealth = health;
	mAttack = attack;
}

int Zombie::GetHealth()
{
	return mHealth;
}

int Zombie::GetAttack()
{
	return mAttack;
}

void Zombie::SetHealth(int health)
{
	mHealth = health;
}

void Zombie::SetAttack(int attack)
{
	mAttack = attack;
}