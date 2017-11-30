#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <iostream>
#include "person.h"
using namespace std;
	const int BASE_SALARY = 150000;
	const int PER_PUBLICATION = 5000;
class Professor : public Person
{
private:
	int numPublications;
public:
	
	void print();
	void setAmounts();
	void setIncome();
	void setExpense();

	Professor():Person(){numPublications=0;}

	Professor(string SSN, Date birthday, int publics):Person(SSN, birthday)
	{
		numPublications = publics;
	}
};
#endif