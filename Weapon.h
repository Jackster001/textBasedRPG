#ifndef WEAPON_H
#define WEAPON_H
#include <string>
using namespace std;

class Weapon 
{
private:
	int damage;
	string weaponName;
	string weaponType;
public:
	Weapon();
	~Weapon();
	Weapon(string name, string type, int dmg);
	Weapon(const Weapon &w);
	void weaponSpecs();
	void upgradeWeapon(int num);
	Weapon& setWeaponName(string s);
	Weapon& setDamage(int x);
	Weapon& setWeaponType(string s);
	string getWeaponName();
	string getWeaponType();
	int getDamage();
}; 


#endif WEAPON_H