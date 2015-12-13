<<<<<<< HEAD
#include "Outfit.h"
=======
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
>>>>>>> origin/master
