//***********************************************************************************//
//                     Program to calculate output sum of two points		         //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//
#include<iostream>
using namespace std;
struct point
{
	int x;
	int y;
};
int main()
{
	point p1,p2,p3;
	cout<<"Enter X-coordinate of First Point : ";
	cin>>p1.x;
	cout<<"Enter Y-coordinate of First Point : ";
	cin>>p1.y;

	cout<<"Enter X-coordinate of Second Point : ";
	cin>>p2.x;
	cout<<"Enter Y-coordinate of Second Point : ";
	cin>>p2.y;

	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;

	cout<<"X-coordinate of result Point : "<<p3.x<<endl;
	cout<<"Y-coordinate of result Point : "<<p3.y<<endl;

	return 0;
}