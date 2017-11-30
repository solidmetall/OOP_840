#include <iostream>
using namespace std;
#include"person.h"
#include <string>


int Person::count=0;

Person::Person()
{
	ssNum = "";
	income = 0;
	expense = 0;
	count = 0;
	Date::Date();
}

Person::Person(string snum, Date birthd)
{
	ssNum=snum;
	income = 0;
	expense = 0;
	count++;
	bDay=birthd;
}

void Person::print()
{
	cout<<"SS#: "<<ssNum<<endl;
	cout<<"Birthday: "<<bDay;
	cout<<"Income: "<<income<<endl;
	cout<<"Expenses: "<<expense<<endl;
}

int Person::getCount()
{
	return count;
}

int Person::getIncome()
{
	return income;
}

int Person::getExpense()
{
	return expense;
}