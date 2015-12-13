#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <string>

using std::string;

class GameObject	//most important class (i think)
{
public:
	GameObject();
	virtual ~GameObject();

	//getter
	virtual string getName(void);		//literally
	static int getCount();				//literally


private:
	static int count_;							//store number of object of this type instantited, dwe and weapon and outfit will + 1 to count
	const string kName;					//name of the object

protected:
	GameObject(const string& kName);
	
};



#endif