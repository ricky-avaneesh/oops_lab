//                        Program demonstrating Operator overloading 	                 //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//
#include<iostream>
using namespace std;
class Complex
{
private:
	float real;
	float imag;
public:
	Complex(): real(0), imag(0){ }
	void input()
	{
		cout << "Enter real part : ";
		cin >> real;
		cout<<"Enter imaginary part : ";
		cin >> imag;
	}
	Complex operator - (Complex c2)
	{
		Complex temp;
		temp.real = real - c2.real;
		temp.imag = imag - c2.imag;
		return temp;
	}
	Complex operator + (Complex c2)
	{
		Complex temp;
		temp.real = real + c2.real;
		temp.imag = imag + c2.imag;
		return temp;
	}
	void output()
	{
		if(imag < 0)
		   cout << "Output Complex number: "<< real << imag << "i";
		else
		   cout << "Output Complex number: " << real << "+" << imag << "i"<<endl;
	}
};
int main()
{
    Complex c1, c2, result,result1;
    cout<<"Enter first complex number:\n";
    c1.input();
    cout<<"\nEnter second complex number:\n";
    c2.input();

    cout<<"\nPerforming Addition...\n";
    result = c1 + c2;
    result.output();

    cout<<"\nPerforming Subtraction...\n";
    result1 = c1 - c2;
    result1.output();
    return 0;
}