//                    Program to store a phone number in given format	             //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//

#include<iostream>
using namespace std;
class phone
{
	int area_code,exchange,number;
public:
	phone(int a = 212, int b = 234, int c = 5678);
	void show_data()
	{	cout<<endl<<"Data ...";
		cout<<"\nArea Code : "<<area_code;
		cout<<"\nExchange Code : "<<exchange;
		cout<<"\nNumber : "<<number<<endl;
	}
};

phone::phone(int a, int b, int c)
{
	area_code = a;
	exchange = b;
	number = c;	
}
int main()
{
	char array[10];
	int a, b, c, i;
	a=b=c=0;
	cout<<"Enter Your 10-Digit Phone Number : ";
	for(int i=0; i<10; ++i)
	{
		cin>>array[i];
	}

	for(int i=0; i<3;++i)
	{
		a*=10;
		a+= int(array[i] - '0');
	}
	for(int i=3; i<6;++i)
	{
		b*=10;
		b+= int(array[i] - '0');
	}
	for(int i=6; i<10;++i)
	{
		c*=10;
		c+= int(array[i] - '0');
	}

	phone x;
	phone y(a,b,c);
	x.show_data();
	y.show_data();
	return 0;
}