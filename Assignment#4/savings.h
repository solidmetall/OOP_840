// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013
// Assignment#4
#ifndef SAVINGS_H
#define SAVINGS_H
#include <iostream>
#include "account.h"
using namespace std;

class Savings : public Account
{
private:
	float interestRate;
public:
	Savings():Account(){interestRate=0.00;}
	Savings(Customer cus, float balans, float interate):Account(balans,cus)
	{
		interestRate=interate;
	}
	void Savings::makeDeposit(float);
	bool Savings::makeWithdrawal (float);
	void Savings::adjustBalance();
	void Savings::view();	
};
#endif