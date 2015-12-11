#ifndef WEAPON_H
#define WEAPON_H
#include "Dweller.h"
#include "Item.h"
#include <string>

using std::string;


class Weapon : public Item							//derives from item
{
public:
	Weapon();
	~Weapon();

	//getter
	const int getAttackDmg();							//literally
	Weapon(const string& kName, const int& durability_, const int& KAttackDmg);		// name of weapon and initial dur and damage


private:
	const int KAttackDmg;								// literally
	

protected:



};






#endif