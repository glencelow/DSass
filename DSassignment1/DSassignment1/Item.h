#ifndef ITEM_H
#define ITEM_H
#include "Dweller.h"
#include <string>

using std::string;


class Item : public Dweller					//derives from gameoject
{
public:
	Item();
	~Item();


	//setter
	virtual void receiveDamage(const int &) = 0;

	//getter
	const int getDurability();

private:
	Item(const string&, const int&);		//name and initial dur

protected:
	int durability_;						//if <1 cant use

};







#endif