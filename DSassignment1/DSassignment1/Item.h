#ifndef ITEM_H
#define ITEM_H
#include "Dweller.h"
#include <string>

using std::string;


class Item : public Dweller
{
public:
	Item();
	~Item();

	Item(const string&, const int&);

	//setter
	virtual void receiveDamage(const int &) = 0;

	//getter
	const int getDurability(); //literally

private:


protected:
	int durability_;

};







#endif