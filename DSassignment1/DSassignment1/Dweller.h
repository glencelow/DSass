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

	Dweller(const string&, const int&);// name then the special value

	//getter
	const int getSPECIAL();//literally
	const int getCurrentHealth();//literally
	const int getCurrentRadDamge();//literally
	const int getAttackDmg(); // literally

	//setter
	void setPosition(const Vec2D&); //literally
	const Vec2D setPosition();

	//receive
	void receiveHealthDamage(const int&); //+hp
	void receiveRadDamge(const int&); // +radiation
	void receiveEquipmentDamage(const int&); //-equ durability

	//add
	void addStimpak(const int&); // +1 stimpak
	void addRadAway(const int&); // +radiation


	//use
	void useStimpak(); // -1 stimpak
	void useRadAway(); // -radiation

	//assign
	Outfit* assignOutfit(Outfit*);
	Weapon* assignWeapon(Weapon*);

	//other
	bool isDead(); //hp<0 death



private:
	int SPECIAL_;				//attributes of dwe
	int health_;				//current hp
	int radiation_;				//current rad, start from 0 , determine what max hp a dwe can have 
	int stimpak_;				//total amount, start at 0, heals dwe
	int radaway_;				//start from 0 , - rad
	Outfit * outfit_;			//what dwe wearing
	Weapon * weapon_;			// what dwe weapon
	Vec2D position_;			//literally



protected:


};







#endif