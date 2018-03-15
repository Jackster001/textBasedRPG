#ifndef WIZARD_H_
#define WIZARD_H_
#include "Character.h"
#include <string>
#include "Weapon.h"
using namespace std;

class Wizard : public Character
{
public:
	Wizard();
	~Wizard();
	Wizard(string name);
	void trainCharacter(int hours);
	void increLevel();
};

#endif 

