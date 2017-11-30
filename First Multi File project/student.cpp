#include <iostream>

using namespace std;

#include "student.h"

 

void Student::setValues ()

{

   cout << "Enter student's name: ";

   getline (cin, name);

   cout << "Enter GPA: ";

   cin >> gpa;

   cin.ignore();

}

 

void Student::getValues ()

{

   cout << "Student's name is " << name

          << " and GPA is " << gpa << endl;

}