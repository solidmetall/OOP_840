#include <iostream>
using namespace std;

class Date
{
private:
	int month, day, year;

public:
	Date();
	//Date(Date&);
	
	friend istream& operator>>(istream&, Date&);
	friend ostream& operator<<(ostream&, Date&);
	friend bool operator == (Date, Date);
	friend bool operator > (Date, Date);
	friend Date operator - (Date, Date);
	Date operator = (const Date&);
};