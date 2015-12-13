#ifndef WEAPON_H
#define WEAPON_H
#include "Item.h"

class Weapon : public Item															//derives from item
{
public:
	Weapon();
	~Weapon();


	Weapon(const string& weaponName, const int& durability_, const int& weaponDmg);		// name of weapon and initial dur and damage
	 void receiveDamage(const int& minusItemDurability);

	//getter
	const int getAttackDmg();														//literally
	

private:
	const int kAttackDmg;														// literally
	

protected:



};


#endif