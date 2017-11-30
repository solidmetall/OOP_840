// person.cpp
#include "person.h"
#include <cstring>
using namespace std;
/*
Person::Person()
{
   name = new char[80];
   strcpy(name, "Godzilla");
}
*/


Person::Person(char* n) //converts "p1("Genghis")" to "Person"  (creates p1 basically)    -convert constructor
{
   name = new char[80];
   strcpy(name, n);
}
 

Person::~Person()
{ delete [] name; }


void Person::setName(char* s)
{ strcpy(name, s); }


void Person::print(void)

{ cout << "Name is " << name << endl; }


Person::Person(const Person& p) //overwrites default copy constructor
{
   name = new char[80];
   strcpy(name, p.name);
}
