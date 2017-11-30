#include <iostream>

using namespace std;

#include "student.h"

 

int main()

{

   Student s1;

   s1.setValues();

   cout << "Ouputting student's data\n";

   s1.getValues();

   system ("pause");

   return 0;

}

 