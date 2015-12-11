#include "Dweller.h"

Dweller::Dweller()
{	
	position_.x = 0;
	position_.y = 0;
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

void Dweller::setPosition(const Vec2D& wherePlayerAt)
{
	position_ = wherePlayerAt;

}

void Dweller::receiveHealthDamage(const int& damageTook_)
{
	

}






