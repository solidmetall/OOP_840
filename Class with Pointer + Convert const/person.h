//person.h
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person
{
   private:
      char* name;
   public:
     // Person();

      Person(char*); //converts "p1("Genghis")" to "Person"   (creates p1 basically)   -convert constructor

      ~Person();

	  Person(const Person&); //overwrites default copy constructor

      void setName(char*);

      void print(void);
};
#endif
