#ifndef ITEM_H
#define ITEM_H
#include "GameObject.h"
#include <string>


using std::string;


class Item : public GameObject				//derives from gameOject
{
public:
	Item();
	~Item();


	//setter
	virtual void receiveDamage(const int & minusItemDurability) = 0; // this is a abstract class

	//getter
	const int getDurability();
	Item(const string& kName, const int& durability_);		//name and initial dur

	

protected:
	int durability_;										//if <1 cant use


private:

};







#endif