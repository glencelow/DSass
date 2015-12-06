#ifndef WEAPON_H
#define WEAPON_H
#include "Dweller.h"
#include <string>

using std::string;


class Weapon : public Dweller
{
public:
	Weapon();
	~Weapon();

	//getter
	const int getAttackDmg(); //literally

private:
	const int KAttackDmg;
	Weapon(const string&, const int&);

protected:



};






#endif