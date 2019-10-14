//***********************************************************************************//
//                Program to calculate n^p using dynamic binding		             //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//
#include<iostream>
using namespace std;
double power(double n , int p=2);
int main()
{
	double n;
	int p;
	cout<<"Enter The Number (n) : ";
	cin>>n;
	cout<<"Enter The Power (p) : ";
	cin>>p;

	cout<<"\nWhen both arguments are given to the function : "<<power(n,p)<<endl;	//function call with both arguments
	cout<<"When One argument is given to the function : "<<power(n)<<endl;		//function call without both arguments
	return 0;
}

double power(double n , int p)
{
	double result=1;
	for(int i=0; i<p; ++i)
		result*=n;
	return result;

}
