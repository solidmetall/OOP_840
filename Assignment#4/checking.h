// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013
// Assignment#4
#ifndef CHECKING_H
#define CHECKING_H
#include <iostream>
#include "account.h"
using namespace std;

class Checking:public Account
{
private:
	bool overdraftProtection;
public:
	Checking():Account()
	{
		overdraftProtection=false;
	}

	Checking(Customer custom, float starbal, bool overdraftprot):Account(starbal, custom)
	{
		overdraftProtection=overdraftprot;
	}

	/*Checking(bool ovprot, float balla, Customer casta):Account( float balans, char acctID[6], char nemo[99])
	{
		overdraftProtection=overdraftOk;
	}*/

	

	//Checking (bool overdraftProtection
	/*Checking(*/
	void makeDeposit (float);
	//looks like its right, work on next one >>>>>>>









	bool makeWithdrawal (float);
	

	void adjustBalance()
	{
		Account::serviceCharge();
	}

	void view();
	

};

#endif