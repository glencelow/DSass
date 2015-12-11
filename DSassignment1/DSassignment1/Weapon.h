#ifndef WEAPON_H
#define WEAPON_H
#include "Dweller.h"
#include <string>

using std::string;


class Weapon : public Item							//derives from item
{
public:
	Weapon();
	~Weapon();

	//getter
	const int getAttackDmg();							//literally

private:
	const int KAttackDmg;								// literally
	Weapon(const string& kName, const int& durability_, const int& KAttackDmg);		// name of weapon and initial dur and damage

protected:



};






#endif