#ifndef ITEM_H
#define ITEM_H
#include "GameObject.h"


class Item : public GameObject				//derives from gameOject
{
public:
	Item();
	~Item();

	Item(const string& kName, const int& durability_);		//name and initial dur


	//setter
	virtual void receiveDamage(const int& durability_) = 0; // this is a abstract class

	//getter
	const int getDurability();
	
	

protected:
	int durability_;										//if <1 cant use


private:

};







#endif