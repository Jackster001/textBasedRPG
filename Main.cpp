#include <iostream>
#include <string>
#include "Character.h"
#include "Wizard.h"
using namespace std;

int main()
{
	Character p1 = Character();
	Wizard w1 = Wizard(p1);
	Character p2 = Character();
	Wizard w2 = Wizard(p1);
	w1.increWizLevel(2);
	w2.increWizLevel(5);
	w1.WizDisplay();
	w2.WizDisplay();
	system("pause");
	return 0;
}