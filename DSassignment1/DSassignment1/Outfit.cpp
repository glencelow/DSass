#include "Outfit.h"

Outfit::Outfit(){}
Outfit::~Outfit(){}


Outfit::Outfit(const string& kName, const int& durability_, const int& kSpecial)
: Item(kName, durability_), kSpecial(kSpecial)
{}


const int Outfit::getSPECIAL()
{
	return kSpecial;
}