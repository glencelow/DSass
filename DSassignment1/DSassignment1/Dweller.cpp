#include "Dweller.h"



Dweller::Dweller(const string& kName, const int& SPECIAL_)
:GameObject(kName), SPECIAL_(SPECIAL_), position_(Vec2D(0, 0)), outfit_(nullptr), weapon_(nullptr), health_(100), Stimpak_(0), radAway_(0), radiation_(0)
{}

Dweller::~Dweller(){}


const int Dweller::getSPECIAL()
{

	if (outfit_)
	{
		return SPECIAL_ + outfit_->getSPECIAL();
	}
	else
	{
		return SPECIAL_;
	}
}

const int Dweller::getCurrentHealth()
{
	return health_;
}

const int Dweller::getCurrentRadDamage()
{
	return radiation_;
}

const int Dweller::getAttackDmg()
{
	if (weapon_ && weapon_->getDurability() > 0){
		return weapon_->getAttackDmg();
	}
	else{
		return 1;
	}
}
const Vec2D Dweller::getPosition()
{
	return position_;
}

void Dweller::receiveHealthDamage(const int& damageTook)
{
	health_ -= damageTook;

}

void Dweller::receiveRadDamage(const int& radiationTook)
{
	radiation_ += radiationTook;
}

void Dweller::receiveEquipmentDamage(const int& eqDamage)
{
	if (outfit_ > 0)
	{
		weapon_->receiveDamage(eqDamage);
		outfit_->receiveDamage(eqDamage);
	}
}

void Dweller::setPosition(const Vec2D& wherePlayerAt)
{
	position_ = wherePlayerAt;
}

void Dweller::useStimpak()
{
	if (Stimpak_ >= 1)
	{
		--Stimpak_;
		health_ += 20;
	}
	else{}

}

void Dweller::useRadAway()
{
	if (radAway_ >= 1)
	{
		--radAway_;
		radiation_ += 10;
	}
	else{}
}

void Dweller::addStimpak(const int& totalStimpak)
{
	++Stimpak_;
}

void Dweller::addRadAway(const int& totalRadWay)
{
	++radAway_;
}

Outfit* Dweller::assignOutfit(Outfit* newplayerOutfit_)
{
	Outfit* oldOutfit = outfit_;
	outfit_ = newplayerOutfit_;
	return oldOutfit;
}

Weapon* Dweller::assignWeapon(Weapon* newplayerWeapon_)
{
	Weapon* oldWeapon = weapon_;
	weapon_ = newplayerWeapon_;
	return oldWeapon;
}

bool Dweller::isDead()
{
	if (health_ <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}







