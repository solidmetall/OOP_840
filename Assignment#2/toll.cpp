//track.cpp
// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013


#include <iostream>
using namespace std;
#include "toll.h"
int TollBooth::m_nCourseCount=0;
int count=1;
/*
TollBooth::TollBooth()
{
	count=1;
}
*/

int TollBooth::Get_m_nCourseCount()
{
return m_nCourseCount;
}

void TollBooth::setValues()
{
	cout<<"For course "<<m_nCourseCount+1<<endl;
	cout<<"How many students entered the room? ";
	cin>>entered;
	cout<<"How many students paid? ";
	cin>>m_nPayingStus;
	while (m_nPayingStus>entered)
	{
		cout<<"*** Invalid input: more paying than entered! ***"<<endl;
		cout<<"How many students entered the room? ";
		cin>>entered;
		cout<<"How many students paid? ";
		cin>>m_nPayingStus;
	}
	m_nDeadbeatStus=entered-m_nPayingStus;
	m_nCourseCount++;	
}

void inputCourseData(TollBooth* arr, int num)
{
	
	for (int i=0; i<num; i++)
	{
		cout<<"Now creating an uninitialized course element ...."<<endl;
	}

		for (int i=0; i<num; i++)
		{
		char choice;
		cout<<"Enter 'y' to initialize new course data any other character to quit: ";
		cin>>choice;

		
			if (choice=='y'||choice=='Y')
			{
			arr[i].setValues();
			}
	
		else
		break;
		}
}


void outputCourseInfo(TollBooth* arik, float& a)
{
	if (TollBooth::Get_m_nCourseCount()==0)
	{
		cout<<"No actual courses"<<endl;
	}

	else
	
	for (int x=0; x<TollBooth::Get_m_nCourseCount(); x++)
	{

		 arik[x].ReSetValues();
		 a+=arik[x].total();
		//a+=TollBooth::ReSetValues();
	}
}


void TollBooth::ReSetValues()
	//float
{
		cout<<"For course "<<count<<":"<<endl;
		cout<<entered<<" students are in the course"<<endl;
		cout<<"The toll collected is $"<<m_nPayingStus*0.5<<endl;
		cout<<m_nDeadbeatStus<<" students didn't pay"<<endl;
		count++;
		//return (m_nPayingStus*0.5);
	
}

void displayAvgToll (float Avtotal)
{
	if (TollBooth::Get_m_nCourseCount()>0)
	cout<<"The Average toll per course is $"<<(Avtotal / TollBooth::Get_m_nCourseCount()) <<endl;
}

float TollBooth::total()
{
	return (m_nPayingStus*0.5);
}