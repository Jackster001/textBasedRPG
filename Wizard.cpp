#include <iostream>
#include "Wizard.h"
using namespace std;

Wizard::Wizard()
{
	c1=Character();
}
Wizard::Wizard(Character c)
{
	c1 = c;
}
void Wizard::WizDisplay()
{
	c1.displaySpec();
}
void Wizard::increWizLevel(int x){
	c1.increLevel(x);
}
