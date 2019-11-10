//                 Program to demonstrate application of friend function	          //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//
#include<iostream>
using namespace std;
class DB;
class DM
{
	float meter, centimeter;
public:
	void get_data()
    {
        cout<<"\nEnter the distance : \n";
        cout<<" Meter : ";
        cin>>meter;
        cout<<" Centimeter : ";
        cin>>centimeter;
    }
    void display()
    {
        cout<<"\nThe distance is : ";
        cout<<meter<<" Meter and "<<centimeter<<" centimeter";
    }
    friend void add(DB &a, DM &b);
};
class DB
{
	float feet, inch;
public:
	void get_data()
    {
        cout<<"\nEnter the distance : \n";
        cout<<" feet : ";
        cin>>feet;
        cout<<" inch : ";
        cin>>inch;
    }
    void display()
    {
        cout<<"\nThe distance is : ";
        cout<<feet<<" feet and "<<inch<<" inches";
    }
    friend void add(DB &a, DM &b);
};
void add(DB &a, DM &b)
{
	int ch;
	int new_dist;
	DM d; 
	DB c;
	cout<<"\nOptions\n1. Get result in meter-centimeter\n2. Get result in feet-inch";
	cout<<"\nEnter your choice : ";
	cin>>ch;
	if(ch==1)	
	{
		new_dist = (b.meter*100 + b.centimeter + a.feet*30.48 + a.inch*2.54);
		if (new_dist>=100)
		{
			d.meter = new_dist/100;
			d.centimeter = new_dist%100;
		}
		else
		{
			d.meter = 0;
			d.centimeter = new_dist;
		}
		d.display();
	}
	else if(ch ==2)
	{
		new_dist = (b.meter*39.37+b.centimeter*.3937008+a.feet*12+a.inch);
		if(new_dist>=12)
		{
			c.feet = new_dist/12;
			c.feet = new_dist%12;
		}
		else
		{
			c.feet = 0;
			c.feet = new_dist;
		}
		d.display();
	}
	else
	{
		cout<<"!!! Invalid Choice !!!";
	}
}
int main()
{
	DB a;
	DM b;
	a.get_data();
	b.get_data();
	add(a,b);
	return 0;
}