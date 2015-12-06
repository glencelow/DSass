#ifndef OUTFIT_H
#define OUTFIT_H
#include "Dweller.h"
#include <string>

using std::string;


class Outfit : public Dweller							//derives from item class
{
public:
	Outfit();
	~Outfit();

	//getter
	virtual const int getSPECIAL();//literally



private:
	Outfit(const string&, const int&, const int&);		//name plus initial dur and its special value
	const int kSpecial;									// follows the rule of dwe special

protected:






};




#endif 