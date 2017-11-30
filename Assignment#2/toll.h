//track.h
// Petin Evgeniy	CSIT-840
//Section#:			7028
//Spring 2013


#include <iostream>
#include <string>
using namespace std;


class TollBooth
{

private:
	static int m_nCourseCount;
	int m_nPayingStus, m_nDeadbeatStus;
	
public:
	//TollBooth();
	static int Get_m_nCourseCount();
	int entered;
	void setValues();
	void ReSetValues();
	//float
	float total();
};