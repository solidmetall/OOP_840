// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013

#include <iostream>
#include "date.h"

using namespace std;

Date::Date(int mo, int da, int yea)
{
	if (isValidEntry(mo,da,yea)) //if true, boolian function "date.cpp" Line: 22-32
	{
	month = mo;
	day = da;
	year = yea;
	}
	else
	{
		month = 1;
		day = 1;
		year = 2001;
	}
}

bool Date::isValidEntry(int checkm, int checkd, int checky) //Boolian input validation returns false or true
   {
	   if (checkm > 12 || checkm <1 )
		   return false;
	   if (checkd > monthDays[(checkm - 1)] || checkd < 1)
		   return false;
	   if (checky > MAX_YEAR || checky < MIN_YEAR)
		   return false;
	   else
	   return true;
   } 

// SetDateValues obtains the user input in this test driver -- NOT in the Date class
void setDateValues (int& m, int& d, int& y)

{

   cout << "Enter month: ";

   cin >> m;

   cout << "Enter day: ";

   cin >> d;

   cout << "Enter year: ";

   cin >> y;

}

void Date::printout() //Function declaration, prints in different formats
{
	if (format==numeric)
		cout<<month<<"/"<<day<<"/"<<year<<endl;
		if (format==standard)
			cout<<monthStr[month-1]<<" "<<day<<","<<year<<endl;
			if (format==alternative)
				cout<<day<<" "<<monthStr[month-1]<<" "<<year<<endl<<endl;
}