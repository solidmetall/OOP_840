//test.cpp
// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013


#include <iostream>
#include <iomanip>
#include "toll.h"

using namespace std;


void inputCourseData (TollBooth*, int);

void outputCourseInfo (TollBooth*, float&);

void displayAvgToll (float);

/*

Insert any additional function prototypes for functions called by main here

*/

 

int main()

{
	cout<<fixed<<setprecision(2);
    int maxCourses; //input for dynamic memory allocation

    float totalTollAmt = 0; //calculated for all courses

    cout << "How many courses maximum? ";

    cin >> maxCourses;

    TollBooth* tboothPtr;

	tboothPtr = new TollBooth[maxCourses];

	
     //Here you must dynamically create an array of TollBooth objects, pointed to by tboothPtr

	
	inputCourseData (tboothPtr, maxCourses);
	
	outputCourseInfo (tboothPtr, totalTollAmt);

	displayAvgToll (totalTollAmt);

 

      //Here you should release your dynamically allocated memory
	delete [] tboothPtr;

	system ("pause");
    return 0;

}
