// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013
// Assignment#4
#include <iostream>
#include <cstring>
#include"customer.h"
using namespace std;

//Customer::~Customer()
//{
//	//destructor just in case
//}

//Customer::Customer(char ACCID[6], char NAME[99])
//{
//	//two argument constructor
//	//strcpy(accountID[6],ACCID[99]);
//	accountID[6] = ACCID[6];
//	//strcpy(name[99],NAME[99]);
//	name[99]=NAME[99];
//}

//: accountID[6](accid[6]), nm[99](name[99]){}
Customer::Customer(char nm[99],char accid[7] )
	{
		for (int i=0; i<7; i++)
		{accountID[i]=accid[i];}
		for (int y=0; y<99; y++)
		{name[y]=nm[y];}
	}

Customer::Customer()
{
	//no argumen constructor
	for (int i=0; i<7; i++)
	{
	accountID[i]=NULL;
	}
	for (int i=0; i<99; i++)
	{
	name[i]=NULL;
	}
}

Customer Customer::operator=(const Customer& right)
{
	//Customer temp;
	for (int i=0; i<7; i++)
	this->accountID[i] = right.accountID[i];

	for (int x=0; x<99; x++)
	this->name[x] = right.name[x];

	return *this;
}

void Customer::view()
{
	int namelen=strlen(name);

	cout<<"Name: ";
	for(int i=0; i<namelen; i++)
	{
		cout<<name[i];
	}

	cout<<endl<<"Account#: ";
	for (int x=0; x<7; x++)
	{
		cout<<accountID[x];
	}
}