#include <string>

using namespace std;

 

class Student

{

   private:

      string name;

      float gpa;

   public:

	   Student();	//no argument constructor
	   Student (string, float); //2 argument constructor

      void setValues();

      void getValues();

}; //end class declaration