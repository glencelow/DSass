#include "Weapon.h"

Weapon::Weapon(){}
Weapon::~Weapon(){}

Weapon::Weapon(const string& kName, const int& durability_, const int& KAttackDmg)
: Item(kName, durability_), KAttackDmg(KAttackDmg)
{}

const int Weapon::getAttackDmg()
{
	return KAttackDmg;
}
