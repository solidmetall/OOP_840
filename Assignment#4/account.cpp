#include <iostream>
using namespace std;
#include"account.h"

Account::Account()
{
	balance = 0.00;
	Customer::Customer();
}

Account::Account(float bal, Customer cus)
{
	balance = bal;
	cust=cus;
}

void Account::makeDeposit(float depAm)
{
	balance+=depAm;
}

bool Account::makeWithdrawal(float withAm)
{
	balance-=withAm;
	return true;
}

void Account::view()
{
	cust.view();
	cout<<endl<<"Balance: $"<<balance<<endl<<endl;
}

float Account::getBalance()
{
	return balance;
}

void Account::serviceCharge()
{
	if (balance<1000.00)
	{
		balance-=10.00;
	}
}
