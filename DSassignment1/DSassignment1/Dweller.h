#ifndef DWELLER_H
#define DWELLER_H
#include <string>
#include "Weapon.h"
#include "Outfit.h"
#include "Item.h"
#include "GameOject.h"


using std::string;


class Dweller : public GameObject
{
public:
	Dweller();
	~Dweller();

	Dweller(const string& kName, const int& kSpecial);// name then the special value

	//getter
	const int getSPECIAL();//literally
	const int getCurrentHealth();//literally
	const int getCurrentRadDamge();//literally
	const int getAttackDmg(); // literally

	//setter
	void setPosition(const Vec2D& position_); //literally
	const Vec2D setPosition();

	//receive
	void receiveHealthDamage(const int& damageTook_); //-hp
	void receiveRadDamge(const int& radiationTook_); // +radiation
	void receiveEquipmentDamage(const int& eqDamge_); //-equ durability

	//add
	void addStimpak(const int& totalStimpak); // +1 stimpak
	void addRadAway(const int& totalRadiation); // +radiation


	//use
	void useStimpak(); // -1 stimpak
	void useRadAway(); // -radiation

	//assign
	Outfit* assignOutfit(Outfit* Outfit_);
	Weapon* assignWeapon(Weapon* Weapon_);

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