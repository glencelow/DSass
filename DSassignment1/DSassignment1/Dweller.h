#ifndef DWELLER_H
#define DWELLER_H
#include <string>
#include "Weapon.h"
#include "Outfit.h"
#include "Item.h"
#include "GameOject.h"

using std::string;


class Dweller
{
public:
	Dweller();
	~Dweller();

	Dweller(const string&, const int&);

	//getter
	const int getSPECIAL();
	const int getCurrentHealth();
	const int getCurrentRadDamge();
	const int getAttackDmg();

	//setter
	void setPosition(const Vec2D&);
	const Vec2D setPosition();
	
	//receive
	void receiveHealthDamage(const int&);
	void receiveRadDamge(const int&);
	void receiveEquipmentDamage(const int&);

	//add
	void addStimpak(const int&);
	void addRadAway(const int&);


	//use
	void useStimpak();
	void useRadAway();

	//assign
	Outfit* assignOutfit(Outfit*);
	Weapon* assignWeapon(Weapon*);

	//other
	bool isDead();



private:
	int SPECIAL_;
	int health_;
	int radiation_;
	int stimpak_;
	int radaway_;
	Outfit * outfit_;
	Weapon * weapon_;
	int SPECIAL_;
	Vedc2D position_;




protected:


};







#endif