#include "Dweller.h"

Dweller::Dweller():
position_(Vec2D(0, 0))
{	
	Stimpak_ = 0;
	radAway_ = 0;
}
Dweller::~Dweller(){}

Dweller::Dweller(const string& kName, const int& SPECIAL_)
:GameObject(kName), SPECIAL_(SPECIAL_)
{}

const int Dweller::getCurrentHealth()
{
	return health_;
}

const int Dweller::getCurrentRadDamge()
{
	return radiation_;
}

const int Dweller::getAttackDmg()
{
	return weapon_->getAttackDmg();
}
const Vec2D Dweller::getPosition()
{
	return position_;
}

void Dweller::receiveHealthDamage(const int& damageTook_)
{
	health_ -= damageTook_;

}

void Dweller::receiveRadDamge(const int& radiationTook_)
{
	radiation_ += radiationTook_;
}

void Dweller::receiveEquipmentDamage(const int& eqDamge_)
{
	weapon_->receiveDamage(eqDamge_);
	outfit_->receiveDamage(eqDamge_);
}

void Dweller::setPosition(const Vec2D& wherePlayerAt)
{
	position_=wherePlayerAt;
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
	if (radAway_ > 1)
	{
		--radAway_;
		radiation_ += 20;
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








