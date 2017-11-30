// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013


#include <iostream>
using namespace std;

class Weight
{
private:
	int tons, pounds, ounces;
public:
	friend istream& operator >> (istream&, Weight&);
	friend ostream& operator << (ostream&, Weight&);
	Weight operator = (const Weight&);
	bool operator == (const Weight&);
	bool operator > (const Weight&);
	Weight operator - (const Weight&);
	Weight operator ++();
};