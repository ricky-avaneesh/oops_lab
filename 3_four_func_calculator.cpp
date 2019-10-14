//***********************************************************************************//
//                     			 Four Function Calculator		                     //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//

#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch,check;
	float x,y;
	do
	{
		cout<<"\nEnter First Number : ";
		cin>>x;
		cout<<"Enter Operation (+,-,*,/) : ";
		cin>>ch;
		cout<<"Enter Second Number : ";
		cin>>y;

		switch(ch)
		{
			case '+' : 
						cout<<"\nPerforming Addition ...\n";
						cout<<"Result  = "<<(x+y);
						break;
			case '-' : 
						cout<<"\nPerforming Subtraction ...\n";
						cout<<"Result  = "<<(x-y);
						break;
			case '*' : 
						cout<<"\nPerforming Multiplication ...\n";
						cout<<"Result  = "<<(x*y);
						break;
			case '/' : 
						if(y==0)
						{
							cout<<"\nCannot Divide By 0...";
							break;
						}
						cout<<"\nPerforming Divison ...\n";
						cout<<"Result  = "<<(x/y);
						break;
			default : cout<<"\nThe operation is not supported by the calculator..."; 
		};
	cout<<"\nDo you wish to continue  (y/n) :";
	cin>>check;
	}while(check!='y' || check!='Y');

	cout<<"\nCalculator terminated as per request...";
}