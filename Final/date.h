#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int month, day, year;
public:
	Date();
	Date operator = (const Date&);
	friend ostream& operator<<(ostream&, Date&);
	friend istream& operator>>(istream&, Date&);
};
#endif