
#include "Weapon.h"


Weapon::Weapon(const string& weaponName, const int& durability_, const int& kAttackDmg)
: Item(weaponName, durability_), kAttackDmg(kAttackDmg)
{}

Weapon::~Weapon()
{}

const int Weapon::getAttackDmg() 
{
	return kAttackDmg;
}

void Weapon::receiveDamage(const int& damage) //weapon dur is my half
{
	durability_ -= damage / 2;
	if (durability_ <= 0)
	{
		durability_ = 0;
	}
}
