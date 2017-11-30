
#include <iostream>
using namespace std;
#include"date.h"
#include <string>

Date Date::operator=(const Date& right)
{
	this->day=right.day;
	this->month=right.month;
	this->year=right.year;
	return *this;
}

ostream& operator<<(ostream& out, Date& data)
{
	out<<data.month<<"/"<<data.day<<"/"<<data.year;
	return out;
}

istream& operator>>(istream& in, Date& data)
{
	cout<<"Enter month (1 - 12): ";
	in >> data.month;
	cout<<"Enter day (1 to maximum days in month): ";
	in>>data.day;
	cout<<"Enter year (>= 1800) : ";
	in>>data.year;
	return in;
}

Date::Date()
{
	    month=0;
		day=0;
		year=0;
}