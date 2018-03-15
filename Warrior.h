#ifndef WARRIOR_H_
#define WARRIOR_H_
#include "Character.h"
#include <string>
#include "Weapon.h"
using namespace std;

class Warrior : public Character
{
public:
	Warrior();
	~Warrior();
	Warrior(string name);
	void trainCharacter(int hours);
	void increLevel();
};

#endif 
