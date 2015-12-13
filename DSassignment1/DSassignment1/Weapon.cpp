
#include "Weapon.h"

Weapon::Weapon()
:kAttackDmg(0)
{}
Weapon::~Weapon(){}

Weapon::Weapon(const string& kName, const int& durability_, const int& kAttackDmg)
: Item(kName, durability_), kAttackDmg(kAttackDmg)
{}

const int Weapon::getAttackDmg()
{
	return kAttackDmg;
}