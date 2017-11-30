//persontest.cpp
#include "person.h"
#include <iostream>
using namespace std;
 
int main(void)
{
   Person p1("Genghis");

   Person p2 = p1;

   cout << "After copy constructor\n";

   cout << "pl name is ";

   p1.print();

   cout << "p2 name is ";

   p2.print();

   p2.setName("New Name");

   cout << "After setName called\n";

   cout << "pl name is ";

   p1.print();

   cout << "p2 name is ";

   p2.print();
   system("pause");
}
