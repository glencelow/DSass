#ifndef OUTFIT_H
#define OUTFIT_H
#include "Dweller.h"
#include <string>

using std::string;


class Outfit : public Item															//derives from item class
{		
public:
	Outfit();
	~Outfit();

	//getter
	virtual const int getSPECIAL();//literally



private:
	const int kSpecial;																// follows the rule of dwe special
	Outfit(const string& kName, const int& durability_, const int& kSpecial);		//name plus initial dur and its special value

protected:






};




#endif 