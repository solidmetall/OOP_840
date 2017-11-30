// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013

#include <string>

using namespace std;

enum DateFormat {numeric, standard, alternative}; //enum in class: Date, "date.h" Line: 26-36


const int MIN_YEAR = 1900;

const int MAX_YEAR = 2015;

const string monthStr [] =

{"January", "February", "March", "April", "May", "June",

"July", "August", "September", "October", "November",

"December"};

const int monthDays [] =

{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};



class Date //Class declaration
{
private:
	int month, day, year;
	bool isValidEntry (int, int, int);
public:
	DateFormat format;
	void setDateValues (int&,int&,int&);
	void printout ();
	Date(int,int,int);
};