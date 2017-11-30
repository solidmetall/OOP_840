// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013
// Assignment#4
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
using namespace std;

class Customer
{
private:
	char accountID[7];
	char name[99];
public:
	
	Customer(); //done
	//Customer(char[],char[]); //done
	Customer (char*,char*);
	

	void view();
	Customer operator = (const Customer&);

	//~Customer();
};
#endif