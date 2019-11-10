//                    Program to store a phone number in given format	             //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//
#include<iostream>
#include<string.h>
using namespace std;
class employee
{
protected:
	char name[40];
	unsigned int salary;
};
class manager:public employee
{
	char department[100];
public:
	manager(char n[],unsigned int s,char d[])
	{
		strcpy(name,n);
		salary=s;
		strcpy(department,d);
	}
	void tostring()
	{
		cout<<"Name:"<<name<<endl<<"Deptt:"<<department<<endl<<"Salary:"<<"Rs."
		<<salary<<endl;
	}
};
class executive:public manager
{
	public:
	executive(char n[],unsigned int s,char d[]):manager(n,s,d)
	{
	}
	void tostring()
	{
		char s[]="Executive";
		cout<<s;
		//s.printOn(cout);
		cout<<endl;
		manager::tostring();
	}
};
int main()
{
	char d1[] = "Computer Engineering";
	char d2[]="Electrical Engineering";
	manager m("Shivam",15000,d1);
	executive e("Rahul Gandhi",21000,d2);
	cout<<"\n\n*****************************CALL BY MANAGER OBJECT*****************************\n\n";
	m.tostring();
	cout<<"\n\n******************CALL BY EXECUTIVE OBJECT DERIVED FROMMANAGER*****************\n\n";
	e.tostring();
	cout<<"\n\n================================================================================\n";
	return 0;
}