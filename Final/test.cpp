//Petin Evgeniy
//840 Final Exam, Spring 2013
//test.cpp

#include <iostream>
using namespace std;
#include <string>
#include "person.h"
#include "student.h"
#include "professor.h"
const int MAX = 100;

int main()
{
	Person* persPtr[MAX];
	string ssN;
	Date tempBirthDate;
	bool validChoice = true;
	char choice;
	for (int i = 0; i < MAX && validChoice; i++)
	{
		cout << "\nWelcome to the University of Substantial Cash (USC)\n";
		cout << "Type S or s to enter a student\n";
		cout << "Type P or p to enter a professor\n";
		cout << "Type any other key to stop entering data: ";
		cin >> choice;
		
		switch (choice)
		{
			case 'P':
			case 'p':
				{
					int publications;
					char response;
					cout << "Enter social security number: ";
					cin >> ssN;
					cout << "Enter birthday\n";
					cin >> tempBirthDate;
					cout << "How many publications in recognized academic journals? ";
					cin >> publications;
					persPtr[i] = new Professor (ssN, tempBirthDate, publications);
					persPtr[i]->setAmounts();
					break;
				}
			
			case 'S':
			case 's':
				{
					char status;
					bool res;
					int units;
					cout << "Enter social security number: ";
					cin >> ssN;
					cout << "Enter birthday\n";
					cin >> tempBirthDate;
					cout << "Enter residency status (y/n): ";
					cin >> status;
					res = tolower(status) == 'y' ? true : false;
					cout << "Enter number of units: ";
					cin >> units;
					persPtr[i] = new Student (ssN, tempBirthDate, res, units);
					persPtr[i]->setAmounts();
					break;
				}
				

				
			default: 
				validChoice = false;
		}
	}
	for (int i = 0; i < Person::getCount(); i++)
	{
		persPtr[i]->print();
		cout << "Balance: " << persPtr[i]->getIncome() - persPtr[i]->getExpense() << endl;
	}
	
	int total = Person::getCount();

	for (int i = 0; i < total; i++)
		delete persPtr[i];
	return 0;
}

