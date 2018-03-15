#include <iostream>
#include "Warrior.h"
using namespace std;

Warrior::Warrior()
{
	characterType = "Warrior";
	Level = 1;
	Name = "player " + getPopulation();
	Health = 100;
	Armour = 20;
	Mana = 25;
	Luck = 3;
}
Warrior::~Warrior() {}
Warrior::Warrior(string Name1)
{
	characterType = "Warrior";
	Level = 1;
	Name = Name1;
	Health = 100;
	Armour = 20;
	Mana = 25;
	Luck = 3;
}
//redefintion of public function from base class
void Warrior::increLevel() {
	Level++;
	Health += 20;
	Armour += 10;
	Mana += 15;
	Luck += 1;
}
void Warrior::trainCharacter(int Hours)
{
	cout << "Your character has trained for " << Hours << endl;
	int i = 0;
	while (i < Hours)
	{
		increLevel();
		i++;
	}
}
