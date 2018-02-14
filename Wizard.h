#ifndef WIZARD_H
#define WIZARD_H
#include "Character.h"
#include <string>
using namespace std;

class Wizard : protected Character
{
private:
	Character c1;
public:
	Wizard();
	Wizard(Character c);
	void WizDisplay();
	void increWizLevel(int x);
};

#endif WIZARD_H

