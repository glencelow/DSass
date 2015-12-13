
#include "Outfit.h"

Outfit::Outfit()
:kSPECIAL(0)
{}
Outfit::~Outfit(){}


Outfit::Outfit(const string& kName, const int& durability_, const int& kSPECIAL)
: Item(kName, durability_), kSPECIAL(kSPECIAL)
{}


const int Outfit::getSPECIAL()
{
	return kSPECIAL;
}

void Outfit::receiveDamage(const int& damage)
{
	durability_ -= damage;
	if (durability_ < 0){
		durability_ = 0;
	}
}

