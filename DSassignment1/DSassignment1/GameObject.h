#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include "Dweller.h"
#include <string>

using std::string;




class GameObject : public Dweller //most important class (i think)
{
public:
	GameObject();
	~GameObject();

	//getter
	virtual string getName(void);	//literally
	virtual int getCount();			//literally


private:
	int count_;						//store number of object of this type instantited, dwe and weapon and outfit will + 1 to count
	virtual const string kName();

protected:
	GameObject(const string);

};



#endif