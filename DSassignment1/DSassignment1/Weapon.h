#ifndef WEAPON_H
#define WEAPON_H
#include "Dweller.h"
#include <string>

using std::string;


class Weapon : public Dweller							//derives from item
{
public:
	Weapon();
	~Weapon();

	//getter
	const int getAttackDmg();							//literally

private:
	const int KAttackDmg;								// literally
	Weapon(const string&, const int&, const int&);		// name of weapon and initial dur and damage

protected:



};






#endif