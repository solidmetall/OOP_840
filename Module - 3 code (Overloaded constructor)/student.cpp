#include <iostream>

using namespace std;

#include "student.h"

//no - argument constructor
Student::Student() : name ("No name provided"),gpa (0.0){}

/*Student::Student()
{
  name="No name provided";
  gpa=0.0;
}
*/


//2 Argument constructor:

Student::Student(string s, float f)
{
 name =s;
 gpa=f;
}

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