#include "Zombie.h"

void Zombie::TakeDamage(int amount)
{
	mHealth -= amount;
}

Zombie::Zombie(int health, int attack)
{
	mHealth = health;
	mAttack = attack;
}

Zombie::Zombie()
{
	mHealth = 100;
	mAttack = 20;
}