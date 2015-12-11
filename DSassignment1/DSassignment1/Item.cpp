#include "Item.h"

Item::Item(){}
Item::~Item(){}

Item::Item(const string& kName, const int& durability_)
: GameObject(kName), durability_(durability_)
{}


void Item::receiveDamage(const int & minusItemDurability)
{		
	durability_ -= minusItemDurability;
}

const int Item::getDurability()
{
	return durability_;
}

