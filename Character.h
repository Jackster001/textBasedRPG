#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
using namespace std;
class Character
{
private: 
	static int Population;
protected:
	string Name;
	int Health, Armour, Mana, Luck, Level;
	
	//void levelUp();
public:
	Character();
	Character(string name, int health, int armour, int mana, int luck);
	void displaySpec();
	void setHealth(int x);
	void increLevel(int x);
};

#endif CHARACTER_H
