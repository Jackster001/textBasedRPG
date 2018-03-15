/*
Name: Wei Lin
Project: Character Creation
Date: 12/14/2017
Description:  In this application, you will be going through an interface that 
lets you pick and create types of characters and train them to level up their 
specifications such as health, mana, armour, luck, and etc. There are two types 
of characters that you can create: Wizards and Warriors. 
*/

#include <iostream>
#include <string>
#include "Character.h"
#include "Wizard.h"
#include "Warrior.h"
#include "Weapon.h"
#include <vector>
using namespace std;

//This functions lets me start the program where you get to create and train Characters
void program()
{
	//These vectors hold pointers to Wizard and Warriros that were created
	vector <Wizard*> group1 = {};
	vector <Warrior*> group2 = {};
	//this vector holds a list of weapons that were created
	vector <Weapon> weaponsList = {};
	bool start = true;
	cout << "Welcome to the MY FANTASY WORLD" << endl;
	//this while loops keeps the code within to keep 
	//program running until start is false or when break is used
	while (start)
	{
		//these are temporary variables used to store datatypes that will be used 
		//by the base class, the derived classes and the wepons class
		string name;
		string characterType;
		string weaponType;
		string weaponName;
		//these series of outputs, displays options for the user
		cout << endl;
		cout << "POPULATION: " << Character::getPopulation() << endl;
		cout << endl;
		cout << "Create your character (1)" << endl;
		cout << "Play character        (2)" << endl;
		cout << "Weapons Market        (3)" << endl;
		cout << "End the Game          (4)" << endl;
		//this lets the user enter a number which we will then use for our if statements
		int choice;
		cin >> choice;
		//this option lets you choose your character and weapon
		if (choice == 1)
		{
			//these are a series of outputs and inputs that will be used to create the 
			//character and the weapon
			cout << endl;
			cout << "Enter username for you character" << endl;
			cin >> name;
			cout << endl;
			int temp;
			cout << "Pick your character type:\nWarrior    (1)\nWizard    (2)"<<endl;
			cin >> temp;
			//checks the character input
			if (temp == 1){
				characterType = "Warrior";
				//adds the warrior into the warrior vector
				group2.push_back(new Warrior(name));
			}
			else if (temp == 2){
				characterType="Wizard";
				//adds the wizard into the wizard vector
				group1.push_back(new Wizard(name));
			}
			else{cout << "Invald input" << endl; break;}
			cout << "Choose your Weapon" << endl;
			cout << "--------------------" << endl;
			// array of weapons for the wizard and the warrior
			string WizWeapons[3] = { "Magic Staff","Spell Book","Magic Sword" };
			string WarWeapons[3] = { "Long Sword", "Battle Axe", "Spear" };
			//this checks the character type that the user has chosen and this decides what 
			//what list of weapons to display
			if (characterType.compare("Wizard")==0)
			{
				cout << endl;
				cout << "Magic Staff        (0)" << endl;
				cout << "Spell Book         (1)" << endl;
				cout << "Wand               (2)" << endl;
				cout << endl;
				int weaponSelect;
				cin >> weaponSelect;
				weaponType = WizWeapons[weaponSelect];
			}
			else
			{
				cout << endl;
				cout << "Long Sword        (0)" << endl;
				cout << "BattleAxe         (1)" << endl;
				cout << "Spear             (2)" << endl;
				cout << endl;
				int weaponSelect;
				cin >> weaponSelect;
				weaponType = WarWeapons[weaponSelect];
			}
			cout << "What is the name of your Weapon?" << endl;
			cin >> weaponName;
			//this checks the charactertype and adds the weapon to the character
			if (characterType == "Wizard") 
			{
				Weapon a = Weapon(weaponName, weaponType, 10);
				//copy constructor
				Weapon temp = Weapon(a);
				weaponsList.push_back(temp);
				group1.back()->changeWeapon(a);
			}
			else {
				Weapon a = Weapon(weaponName, weaponType, 20);
				//copy constructor
				Weapon temp = Weapon(a);
				weaponsList.push_back(temp);
				group2.back()->changeWeapon(a); 
			}
			cout << endl;
			cout << "Character and Weapon Created!" << endl;
		}
		//this lets you select the character that you want to play
		else if (choice == 2)
		{
			cout << "\nCHARACTER SELECTION" << endl;
			cout << "--------------------" << endl;
			int count = 0;
			int selection;
			//tell the user to select the type of wizard they want to play
			cout << "Select type of character you want to play" << endl;
			cout << "\nWarrior    (1)\nWizard    (2)" << endl;
			int tempNum;
			cin >> tempNum;
			//To go through the retrieved vector and displays all characters
			//an iterator allows me to go iterate through a set of elements escpecially if it is pointers
			cout << "\nCHARACTER SELECTION" << endl;
			//these if statements checks the selection you chose and displays 
			//all the characters of the selected type
			if (tempNum == 1) {
				characterType = "Warrior";
				for (vector<Warrior*>::iterator i = group2.begin(); i != group2.end(); i++)
				{
					cout << endl;
					cout << "Level: " << (*i)->getLevel() << "   " << "Name: " << (*i)->getName() << "   " << "Type: " << (*i)->getCharacterType() << "   (" << count << ")" << endl;
				}
			}
			else if (tempNum == 2) {
				characterType = "Wizard";
				for (vector<Wizard*>::iterator i = group1.begin(); i != group1.end(); i++)
				{
					cout << endl;
					cout << "Level: " << (*i)->getLevel() << "   " << "Name: " << (*i)->getName() << "   " << "Type: " << (*i)->getCharacterType() << "   (" << count << ")" << endl;
				}
			}
			cout << "Quit Selection  (-1)" << endl;
			//here you make the selection of the character
			cin >> selection;
			if (selection < 0|| selection >group1.size()) {}
			else {
				//truth value for the while loop
				bool keep=true;
				//This while loop keeps the code within running
				//In this loop, you are able to train your character  
				//and look at your specifications of that character
				while (keep)
				{
					int tempNum;
					cout << "\nFANTASY WORLD" << endl;
					cout << "--------------------" << endl;
					cout << "Train Your Character   (1)" << endl;
					cout << "Upgrade Weapon         (2)" << endl;
					cout << "Character Specs        (3)" << endl;
					cout << "Exit Character         (4)" << endl;
					cin >> tempNum;
					//these if statements determine what your character type is
					//and lets you find and select the right character
					//group 1 is the vector of wizards and group 2 is the vector of warriors
					if (characterType == "Wizard")
					{
						if (tempNum == 1)
						{
							int hours;
							cout << "How many hours do you want to train your character?" << endl;
							cin >> hours;
							group1[selection]->trainCharacter(hours);
						}
						else if (tempNum == 2)
						{

							group1[selection]->getWeapon().upgradeWeapon(20);
							cout << "Your weapon's damage has increased by " << 20<< endl;
						}
						else if (tempNum == 3)
						{
							group1[selection]->displaySpec();
						}
						else { keep = false; }
					}
					else if (characterType == "Warrior")
					{
						if (tempNum == 1)
						{
							int hours;
							cout << "How many hours do you want to train your character?" << endl;
							cin >> hours;
							group2[selection]->trainCharacter(hours);
						}
						else if (tempNum == 2)
						{

							group2[selection]->getWeapon().upgradeWeapon(30);
							cout << "Your weapon's damage has increased by " << 30 << endl;
						}
						else if (tempNum == 3)
						{
							group2[selection]->displaySpec();
						}
						else { keep = false; }
					}
					else{cout << "invalid" << endl;}
				}
			}
		}
		//this lets you see all copies of weapons that exist in the in all the characters
		else if(choice == 3)
		{
			cout << "HERE IS A LIST OF REPLICA WEAPONS" << endl;
			cout << "---------------------------------------------------" << endl;
			for (int i=0; i<weaponsList.size();i++)
			{
				cout << endl;
				cout <<  "Weapon Name: " << weaponsList.at(i).getWeaponName() << "   " << "Weapon Type: " << weaponsList.at(i).getWeaponType() 
					<<"  Damage: "<< weaponsList.at(i).getDamage()<< endl;
			}
			cout << "\n Exit  (0)" << endl;
			int temp;
			cin >> temp;
			if (temp == 1) {}
		}
		//this ends the program
		else if (choice == 4)
		{
			cout << "Thanks for Playing" << endl;
			break;
		}
		else { cout << "invalid input" << endl; break; }
	}
}


int main()
{
	// 1)Aggregation 
	//Wizard p1 = Wizard("DumbleDore");
	//p1.displaySpec();
	
	// 2) Method Chaining and 3) Copy Constructor
	/*
	Weapon w1 = Weapon("Pecker", "Spear", 50);
	w1.setWeaponName("darkBlade").setWeaponType("Long Sword").setDamage(100);
	Weapon w2 = Weapon(w1);
	w1.weaponSpecs();
	w2.weaponSpecs();
	*/

	// 4) Redefinition of the function increLevel();
	/*
	Warrior p2 = Warrior("Jon Snow");
	p1.displaySpec();
	p2.displaySpec();
	p1.increLevel();
	p2.increLevel();
	//p1.displaySpec();
	//p2.displaySpec();
	*/
	// 5) static variable and static method
	//cout << Character::getPopulation() << endl;

	//Character custimization and game interface
	program(); 
	system("pause");
	return 0;
}

