#include "Dweller.h"

Dweller::Dweller(){}
Dweller::~Dweller(){}

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
	position_.x = wherePlayerAt.x;
	position_.y = wherePlayerAt.y;
}




