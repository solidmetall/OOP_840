// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013
// Assignment#4
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include "customer.h"
using namespace std;

class Account
{
protected:
	float balance;
	Customer cust;
public:
	//Account() : Customer() {}
	Account();
	//Account(float balance, char accountID[6], char name[99]): balance(balance), cust(accountID[6],name[99]){}
	Account (float, Customer);
	virtual void makeDeposit(float);
	virtual bool makeWithdrawal(float);
	virtual void view (); 
	float getBalance();
	virtual void adjustBalance() = 0;
	void serviceCharge();
};
#endif