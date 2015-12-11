#ifndef OUTFIT_H
#define OUTFIT_H
#include "Item.h"
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
	Outfit(const string& kName, const int& durability_, const int& kSpecial);		//name plus initial dur and its special value
	const int kSpecial = 0;																// follows the rule of dwe special
	

protected:






};




#endif 