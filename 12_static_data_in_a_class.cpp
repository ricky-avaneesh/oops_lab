//                 Program to demonstrate usability of static data members	         //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//
#include<iostream>
using namespace std;
class cont
{
public:
	static int cnt;
	cont()
	{
		cnt++;
	}
	~cont()
	{
		cnt--;
	}
	static void showcnt()
	{
		cout<<"No. of objects = "<<cnt<<endl;
	}
};
int cont::cnt=0;
int main()
{
	
	cont a;
	cont v;
	v.showcnt();
	a.showcnt();

	return 0;
}