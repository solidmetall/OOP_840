#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student
{
private:
	string name;
	float gpa;

public:
	void setValues()
	{
		cout<<fixed<<setprecision(1);
		cout<<"Enter student's name: ";
		getline (cin, name);
		cout<<"Enter GPA: ";
		cin >> gpa;
		cin.ignore();
	}

	void getValues()
	{
		cout<<"Students's name is "<<name <<" and GPA is "<< gpa<<endl;
	}
};

int main()
{
	Student s1;
	s1.setValues();
	cout<<endl<<"Outputting student's data\n"<<endl;
	s1.getValues();
	cout<<endl;

	system ("pause");
	return 0;
}