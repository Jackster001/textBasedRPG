/*
The Character class is the base class of the derived classes, the Wizard Class and the
Warrior Class.
*/
#ifndef CHARACTER_H_
#define CHARACTER_H_
#include <string>

#include "Weapon.h"
using namespace std;

class Character
{
private:
	//This is a private static variable that is used to count the number of characters
	// or derived characters that were created
	static int Population;
protected:
	//A weapon object is aggregated here
	Weapon weaponEquipped;
	string characterType;
	string Name;
	int Health, Armour, Mana, Luck, Level;
public:
	Character();
	~Character();
	Character(string name);
	string getCharacterType();
	string getName();
	int getHealth();
	int getArmour();
	int getMana();
	int getLuck();
	int getLevel();
	Weapon& getWeapon();
	void changeWeapon(Weapon w);
	//this function is redefined in the derived classes
	void increLevel();
	void displaySpec();
	//this static function returns the number 
	static int getPopulation();

};
#endif 
