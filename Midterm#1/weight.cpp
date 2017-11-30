// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013

#include "weight.h"
#include <iostream>
#include <iomanip>
using namespace std;

istream& operator >> (istream& in, Weight& anWeight)
{
	cout<<"Enter the zoo animal's weight in tons, pounds, and ounces: ";
	in>>anWeight.tons;
	in>>anWeight.pounds;
	in>>anWeight.ounces;
	return in;
}

Weight Weight::operator=(const Weight& right)
{
	this->tons=right.tons;
	this->pounds=right.pounds;
	this->ounces=right.ounces;
	return *this;
}

Weight Weight::operator-(const Weight& right)
{
	Weight result;
	result.tons = this->tons-right.tons;
	result.pounds=this->pounds-right.pounds;
	result.ounces=this->ounces-right.ounces;
	
	if (result.ounces<0)
	{
		(result.ounces+16);
		(result.pounds-1);
	}
	if (result.pounds<0)
	{
		(result.pounds+2000);
		(result.tons-1);
	}
	
	return result;
}

bool Weight::operator==(const Weight& right)
{
	if (this->tons == right.tons && this->pounds == right.pounds && this->ounces == right.ounces)
		return true;
	else
		return false;
}

bool Weight::operator>(const Weight& right)
{
	if (this->tons > right.tons)
		return true;
	if (this->tons == right.tons && this->pounds > right.pounds)
		return true;
	if (this->tons == right.tons && this->pounds == right.pounds && this->ounces>right.ounces)
		return true;
	else
		return false;
}

ostream& operator << (ostream& out, Weight& Weightan)
{
	out<<Weightan.tons<<" ton(s), "<<Weightan.pounds<<" pound(s), "<<Weightan.ounces<<" ounce(s).";
	cout<<endl;
	return out;
}

Weight Weight::operator++()
{
	ounces ++;
	if (ounces>=16)
	{
		(ounces=0);
		(pounds+1);
	}
	if (pounds>=2000)
	{
		(pounds=0);
		(tons+1);
	}
	return *this;
}