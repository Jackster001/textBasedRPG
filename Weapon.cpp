#include <iostream>
#include "Weapon.h"
using namespace std;
//constructor
Weapon::Weapon()
{
	this->setWeaponName("stick").setWeaponType("stick").setDamage(5);
}
//deconstructor
Weapon::~Weapon(){}
//overloaded constructor
Weapon::Weapon(string name, string type, int dmg)
{
	this->setWeaponName(name).setWeaponType(type).setDamage(dmg);
}
//here is the copy constructor
Weapon::Weapon(const Weapon& w)
{
	this->setWeaponName(w.weaponName).setWeaponType(w.weaponType).setDamage(w.damage);
}
//setter for weapon name
Weapon& Weapon::setWeaponName(string s)
{
	weaponName = s;
	return *this;
}
//setter for damage 
Weapon& Weapon::setDamage(int x)
{
	damage=x;
	return *this;
}
//setter for weapon type
Weapon& Weapon::setWeaponType(string t)
{
	weaponType = t;
	return *this;
};
//shows all the specs of the weapon
void Weapon::weaponSpecs()
{
	cout << "Weapon Name: "<< weaponName <<endl;
	cout << "Weapon Type: " << weaponType << endl;
	cout << "Damage: " << damage <<endl;
}
//getter for weapon name
string Weapon::getWeaponName()
{
	return weaponName;
}
//getter for damage 
int Weapon::getDamage()
{
	return damage;
}
//getter for weapon type
string Weapon::getWeaponType()
{
	return weaponType;
}
//this increments the damage of the weapon
void Weapon::upgradeWeapon(int num)
{
	damage += num;
}


