#include <iostream>
#include "Character.h"
using namespace std;

//constructor
Character::Character() {
	characterType = "n/a";
	Level = 1;
	Name = "player "+getPopulation();
	Health = 100;
	Armour = 0;
	Mana = 50;
	Luck = 0;
	Population++;
}
//deconstructor
Character::~Character() {}
// Overloaded Constructor
Character::Character(string name)
{
	characterType = "n/a";
	Level = 1;
	Name = name;
	Health = 100;
	Armour = 0;
	Mana = 50;
	Luck = 0;
	Population++;
}
void Character::displaySpec() {
	cout << "PLAYER SPECIFICATION" << endl;
	cout << "Character Type: " << getCharacterType()<< endl;
	cout << "Level: " << Level << endl;
	cout << "Name: "<< Name << endl;
	cout << "Health: " << Health << endl;
	cout << "Armour: " << Armour <<endl;
	cout << "Mana: " << Mana << endl;
	cout << "Luck: " << Luck << endl;
	cout << "WEAPON SPECIFICATION" << endl;
	weaponEquipped.weaponSpecs();
}
//character increlevel
void Character::increLevel()
{
	Level++;
} 

//static variable is initialized here
int Character::Population = 0;

// the getter for Population
int Character::getPopulation() { return Population; }

string Character::getName() {
	return Name;
};
int Character::getHealth() {
	return Health;
};
int Character::getArmour() {
	return Armour;
};
int Character::getMana() {
	return Mana;
};
int Character::getLuck() {
	return Luck;
};
int Character::getLevel() {
	return Level;
};
Weapon& Character::getWeapon()
{
	return weaponEquipped;
}
void Character::changeWeapon(Weapon w)
{
	weaponEquipped = Weapon(w);
}
string Character::getCharacterType()
{
	return characterType;
}

