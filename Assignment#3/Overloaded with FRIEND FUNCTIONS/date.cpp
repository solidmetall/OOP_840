#include "date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	    month=1;
		day=1;
		year=2001;
}
/*
Date::Date(const Date& copy)
{
	month=copy.month;
	day=copy.day;
	year=copy.year;
}
*/

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

bool operator == (Date d1, Date d2)
{
	 return (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year);
}

bool operator > (Date dat1, Date dat2)
{
	return (dat1.day == dat2.day && dat1.month == dat2.month && dat1.year == dat2.year);
}

Date operator - (Date dta1, Date dta2)
{
	Date tempor;
	tempor.day=dta1.day-dta2.day;
	tempor.month=dta1.month-dta2.month;
	tempor.year=dta1.year-dta2.year;

	return tempor;
}

Date Date::operator=(const Date& right)
{
	this->day=right.day;
	this->month=right.month;
	this->year=right.year;
	return *this;
}