#ifndef DWELLER_H
#define DWELLER_H
#include "Weapon.h"
#include "Outfit.h"
#include "GameObject.h"
#include "Vec2D.h"



class Dweller : public GameObject
{
public:
	Dweller();
	~Dweller();

	Dweller(const string& kName, const int& kSPECIAL);// name then the special value

	//getter
	const int getSPECIAL();//literally
	const int getCurrentHealth();//literally
	const int getCurrentRadDamage();//literally
	const int getAttackDmg(); // literally
	const Vec2D getPosition();//get dweller pos

	//setter
	void setPosition(const Vec2D& wherePlayerAt); //literally
	//receive
	void receiveHealthDamage(const int& damage); //-hp
	void receiveRadDamage(const int& health_); // +radiation
	void receiveEquipmentDamage(const int& durability_); //-equ durability


	//add
	void addStimpak(const int& totalStimpak); // +1 stimpak
	void addRadAway(const int& totalRadWay); // +1 radiation


	//use
	void useStimpak(); // -1 stimpak
	void useRadAway(); // -radiation

	//assign
	Outfit* assignOutfit(Outfit* newplayerOutfit_); //literally
	Weapon* assignWeapon(Weapon* newplayerWeapon_); // literally

	//other
	bool isDead(); //hp<0 death





private:
	Vec2D position_;			//literally
	int SPECIAL_;				//attributes of dwe
	int health_;				//current hp
	int radiation_;				//current rad, start from 0 , determine what max hp a dwe can have 
	int Stimpak_;				//total amount, start at 0, heals dwe
	int radAway_;				//start from 0 , - rad
	Outfit * outfit_;			//what dwe wearing
	Weapon * weapon_;			// what dwe weapon
	



protected:


};







#endif