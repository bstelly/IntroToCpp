#pragma once

class Zombie
{
private:
	int mHealth;
	int mAttack;

public:
	void TakeDamage(int amount);
};