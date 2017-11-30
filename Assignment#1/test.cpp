// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013

#include <iostream>
#include "date.h"

void setDateValues (int&, int&, int&);

int main()
{
   int mth, day, yr;

   setDateValues (mth, day, yr);

   /* Create a Date instance (object) from the user input here*/
   Date d1 (mth,day,yr); //Using 3 argument constructor  "date.h" line: 35, "date.cpp" line: 6-20
						//Assigning users input to Date (Object) data type which is: d1

   cout << "Date is:\n";

   d1.format=numeric; //emun set "date.h" Line:5
   d1.printout();		//public function call with enum set to numeric, "date.h" Line: 34, "date.cpp" Line: 53-61.

   d1.format=standard; //enum set "date.h" Line:5
   d1.printout();		//public function call with enum set to standard, "date.h" Line: 34, "date.cpp" Line: 53-61.

   d1.format=alternative; //enum set "date.h" Line:5
   d1.printout();		//public function call with enum set to alternative, "date.h" Line: 34, "date.cpp" Line: 53-61.

  /* Call your print member function 3 separate times to test print the date in each of 3 formats */

   system ("pause");
   return 0;
}

 

