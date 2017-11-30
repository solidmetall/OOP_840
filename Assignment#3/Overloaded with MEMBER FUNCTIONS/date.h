// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013


#include <iostream>
using namespace std;

class Date
{
private:
	int month, day, year;

public:
	Date(); //called when Date type is created
	Date(const Date&); //called when using copy of classes
	
	friend istream& operator>>(istream&, Date&);
	friend ostream& operator<<(ostream&, Date&);
	friend bool operator == (Date, Date);
	friend bool operator > (Date, Date);
	Date operator - (const Date&);
	Date operator = (const Date&);
};