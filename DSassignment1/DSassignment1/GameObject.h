#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include "Dweller.h"
#include <string>

using std::string;




class GameObject : public Dweller
{
public:
	GameObject();
	~GameObject();

	//getter
	virtual string getName(void);
	virtual int getCount();


private:
	int count_;
	virtual const string kName();

protected:
	GameObject(const string);

};




#endif