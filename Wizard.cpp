#include <iostream>
#include "Wizard.h"
using namespace std;

Wizard::Wizard()
{
	characterType = "Wizard";
	Level = 1;
	Name = "player "+ getPopulation();
	Health = 75;
	Armour = 10;
	Mana = 50;
	Luck = 5;
}
Wizard::~Wizard() {}
Wizard::Wizard(string Name1)
{
	characterType = "Wizard";
	Level = 1;
	Name = Name1;
	Health = 75;
	Armour = 10;
	Mana = 50;
	Luck = 5;
}
//redefintion of public function from base class
void Wizard::increLevel(){
	Level++;
	Health += 10;
	Armour += 5;
	Mana += 25;
	Luck += 2;
}
void Wizard::trainCharacter(int Hours)
{
	cout << "Your character has trained for " << Hours << endl;
	int i = 0;
	while (i < Hours)
	{
		increLevel();
		i++;
	}
}






