#include <iostream>
#include "checking.h"


//Checking::Checking()
//{
//	overdraftProtection=false;
//}

void Checking::makeDeposit(float depam)
{
	Account::makeDeposit(depam);
}

bool Checking::makeWithdrawal(float wAm)
	{
		if (wAm<=Account::getBalance())
		{
			Account::makeWithdrawal(wAm);
			return true;
		}

		if (overdraftProtection==true)
		{
			Account::makeWithdrawal(wAm);
			return true;
		}

		else 
			return false;
		/*if (wAm>Account::getBalance())
		{
		cout<<"Withdrawal not made -- balance too low"<<endl;
		cout<<"and no overdraft protection"<<endl;
		return false;
		}
		if (overdraftProtection==true)
		{
			Account::makeWithdrawal(wAm);
			return true;
		}
		else
			return false;*/
	}

void Checking::view()
	{
		cout<<"Checking Account:"<<endl;
		Account::view();
	}