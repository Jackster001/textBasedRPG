#include <iostream>
#include "Character.h"
using namespace std;

Character::Character() {
	Level = 1;
	Name = "player1";
	Health = 100;
	Armour = 0;
	Mana = 50;
	Luck = 0;
}
Character::Character(string name, int health, int armour, int mana, int luck)
{
	Level = 1;
	Name = name;
	Health = health;
	Armour = armour;
	Mana = mana;
	Luck = luck;
}
void Character::displaySpec() {
	cout << "Level: " << Level << endl;
	cout << "Name: "<< Name << endl;
	cout << "Health: " << Health << endl;
	cout << "Armour: " << Armour <<endl;
	cout << "Mana: " << Mana <<endl;
	cout << "Luck: " << Luck << endl;
}
void Character::setHealth(int x) 
{
	Health += x;
}
void Character::increLevel(int x)
{
	Level+= x;
}