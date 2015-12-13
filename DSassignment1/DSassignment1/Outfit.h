#ifndef OUTFIT_H
#define OUTFIT_H
#include "Item.h"
#include <string>

using std::string;


class Outfit : public Item																//derives from item class
{		
public:
	Outfit(const string& kName, const int& durability_, const int& kSPECIAL);			//name plus initial dur and its special value
	virtual ~Outfit();

	//getter
	virtual const int getSPECIAL();//literally
	
	virtual void receiveDamage(const int & damge);

private:
	const int kSPECIAL;																// follows the rule of dwe special
	

protected:






};




#endif 