#include <iostream>
using namespace std;
#include"savings.h"

//Savings::Savings()
//{
//	interestRate=0.00;
//}

void Savings::makeDeposit(float depAm)
{
		Account::makeDeposit(depAm);
}

bool Savings::makeWithdrawal(float withAm)
{
	if (withAm<=Account::getBalance())
	{
		Account::makeWithdrawal(withAm);
	return true;
	}
	else
		return false;
	}

void Savings::adjustBalance()
{
	balance+=(balance*interestRate);
}

void Savings::view()
{
		cout<<"Savings Account:"<<endl;
		Account::view();
}
