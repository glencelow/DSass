#ifndef OUTFIT_H
#define OUTFIT_H
#include "Dweller.h"
#include <string>

using std::string;


class Outfit : public Dweller
{
public:
	Outfit();
	~Outfit();

	//getter
	virtual const int getSPECIAL();



private:
	Outfit(const string&, const int&, const int&);
	const int kSpecial;

protected:






};




#endif 