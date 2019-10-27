//                    Program to store a phone number in given format	             //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//
#include<iostream>
using namespace std;
class rational
{
	private:
		int numerator;
		int denominator;
	public:
		rational();
		rational(int,int);
		friend ostream &operator<<( ostream &output, const rational &R)
		{
			output<<"Rational numnber : "<<R.numerator<<"/"<<R.denominator;
			return output;
		}
		friend istream &operator>>( istream &input, rational &R)
		{
			cout<<"Enter Numerator :";
			input>>R.numerator;
			cout<<"Enter Denominator :";
			input>>R.denominator;
			return input;
		}
		rational operator + (rational const &obj)
		{
			rational a;
			a.denominator = denominator*obj.denominator;
			a.numerator = numerator*obj.denominator + obj.numerator*denominator;
			a.reduce();
			return a;
		}
		//function overloading for (+)
		void reduce();
		void display();


};
rational::rational()
{
	numerator=1;
	denominator=1;
	cout<<"\nDefault Constructor...\n";
}

rational::rational(int a, int b)
{
	numerator = a;
	denominator = b;
}
void rational::display()
{
	cout<<"Numerator = "<<numerator<<endl;
	cout<<"Denominator = "<<denominator<<endl;
	cout<<"Rational number ="<<numerator<<"/"<<denominator<<endl;
}
void rational::reduce()
{
	int flag,num;
	flag = 0;
	num = numerator<denominator?numerator:denominator; //to get lowest of the two numerator and denominator
	cout<<"\nIn function reduce ...\n";
	for(int i=num;i>1;i--)
	{
		if(numerator%i==0 && denominator%i==0)
		{
			numerator/=i;
			denominator/=i;
		}
	}
	display();
}
int main()
{
	rational a;
	rational b(8,4);
	rational c = a+b;
	c.display();
	return 0;
}