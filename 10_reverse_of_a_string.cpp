//                              Program to reverse a string	                         //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//
#include<iostream>
using namespace std;
void reversit(char array[])
{
	int n=0;
	char temp;
	for(int i=0; array[i]!='\0'; ++i)
	{
		n++;
	}
	cout<<n<<endl;
	for(int i=0; i<=n/2; ++i)
	{
		temp = array[i];
		array[i] = array[n-i];
		array[n-i] = temp;
	}
	for(int i=0; i<n+1; ++i)
		cout<<array[i]<<endl;
}

int main()
{
	char str[100];
	cout<<"Enter the string to be reversed : ";
	cin.getline(str,100);
	reversit(str);
	return 0;
}