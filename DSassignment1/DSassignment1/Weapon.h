#ifndef WEAPON_H
#define WEAPON_H
#include "Item.h"
#include <string>

using std::string;

		
class Weapon : public Item															//derives from item
{
public:
	Weapon();
	~Weapon();


	Weapon(const string& kName, const int& durability_, const int& kAttackDmg);		// name of weapon and initial dur and damage
	virtual void receiveDamage(const int & minusItemDurability);

	//getter
	const int getAttackDmg();														//literally
	

private:
	const int kAttackDmg;														// literally
	

protected:



};


#endif