#include <iostream>

using namespace std;

#include "student.h"

 

int main()

{

   Student s1;

   //s1.setValues();

   Student s2 ("Genghis Khent", 3.1);

   cout << "Ouputting student's data\n";

   s1.getValues();
   s2.getValues();

   system ("pause");

   return 0;

}

 