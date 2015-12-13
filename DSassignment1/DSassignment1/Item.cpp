#include "Item.h"

Item::Item(){}
Item::~Item(){}

Item::Item(const string& kName, const int& durability_)
: GameObject(kName), durability_(durability_)
{}


const int Item::getDurability()
{
	if (durability_ > 0)
	{
		return durability_;
	}
	else
	{
		return 0;
	}
}


void Item::receiveDamage(const int& minusItemDurability_)
{		
	durability_ -= minusItemDurability_;
}
