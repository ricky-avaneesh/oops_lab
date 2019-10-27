//                    Program to store a phone number in given format	             //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//
#include<iostream>
using namespace std;
class tollbooth
{
	unsigned int total_no_car;
	double total_amt_money;
public:
	tollbooth();
	void paying_car();
	void nonpaying_car();
	void display();
};
tollbooth::tollbooth()
{
	total_amt_money = 0;
	total_no_car = 0;
}
void tollbooth::paying_car()
{
	total_no_car++;
	total_amt_money += 0.5;

}
void tollbooth::nonpaying_car()
{
	total_no_car++;
}
void tollbooth::display()
{
	cout<<"\n\t*****************************"<<endl;
	cout<<"\t*Total Number of Cars : "<< total_no_car<<" *"<<endl;
	cout<<"\t*****************************"<<endl;
	cout<<"\t*Total Amount of Money : "<< total_amt_money<<" *"<<endl;
	cout<<"\t*****************************"<<endl;
}
int main()
{
	char ch;
	int flag = 1;
	tollbooth a;
	do
	{	
		cout<<"Options : \n  1. Non-paying Car\n  2. Non-paying Car\n ESC(key) to exit\nEnter Your Choice : ";
		cin>>ch;
		switch(int(ch))
		{
			case 49 :a.nonpaying_car();
						break;
			case 50 :a.paying_car();
						break;
			case 27 : flag = 0 ;
						a.display();
						break;
			default : cout<<"Invalid Choice...\nChoose Again\n";
						break;
		}
	}while(flag);
	return 0;
}