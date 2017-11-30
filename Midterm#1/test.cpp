//Evgeniy Petin
//840 Midterm, Spring 2013
//test.cpp – downloaded from website indicated on first page of exam

#include <iostream>
using namespace std;
#include "weight.h"
const int MAX = 3;

int main(void)
{
	Weight w[MAX];
	cin >> w[0];       //overloaded >> operator 
	w[1] = w[0];
	cin >> w[2];       //overloaded >> operator

	for (int x = 0; x < MAX; x++)
	{
		cout << "Animal #" << x + 1 << ": ";
		cout << w[x];   //overloaded << operator
	}
	
	for (int x = 0; x < MAX - 1; x++)
	{
		if (w[x] == w[x+1])    //overloaded == operator
			cout << "Animal " << x + 1
				<< " and Animal " << x + 2 
				<< " have the same weight\n";
		else if (w[x+1] > w[x])  //overloaded > operator
		{
			cout << "Animal " << x + 2 
				<< " is heavier  than Animal "
				<< x + 1 << " by ";
			cout << w[x+1] - w[x] << endl;  //overloaded subtraction operator
		}
		else
		{
			cout << "Animal " << x + 1
				<< " is heavier than Animal "
				<< x + 2<< " by ";
			cout << w[x] - w[x+1] << endl;  //overloaded subtraction operator
		}	
	}
	
	cout << "Incrementing weight of Animal # " <<  MAX  << " by 1 gives a weight of "
			<<  ++w[MAX -1];
			
	system ("pause");
        return 0;
}
