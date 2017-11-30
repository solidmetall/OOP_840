#include <iostream>
using namespace std;
#include"professor.h"

void Professor::print()
{
	cout<<"Professor"<<endl;
	cout<<"Number of Publications: "<<numPublications<<endl;
	Person::print();
}

void Professor::setAmounts()
{
	Professor::setIncome();
	Professor::setExpense();
}

void Professor::setIncome()
{
	income=(BASE_SALARY+(PER_PUBLICATION*numPublications));
}

void Professor::setExpense()
{
	expense=(income*(1/10));
}