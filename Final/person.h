#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include "date.h"
using namespace std;

class Person
{

protected:
	string ssNum;
	static int count; //static
	int income;
	int expense;
	Date bDay;
public:
	Person();
	
	Person(string, Date);
	static int getCount();
	void print();
	//int getCount();
	int getIncome();
	int getExpense();
	void virtual setAmounts()=0;
};
#endif