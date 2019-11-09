//                          Program to demonstrate file handling	                 //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//
#include<iostream>
#include<fstream>
using namespace std;
class student
{
	int roll_no;
	char name[30];
public:
	void getdata(void);
};
void student::getdata(void)
{
	cout<<"\nEnter Roll Number of the student = ";
	cin>>roll_no;
	getchar();
	cout<<"Enter Name of the student = ";
	cin.getline(name,30);
}
int main()
{
	student clas[10];
	int i=0;
	int ch;
	fstream file;
	file.open("new_file.dat",ios::out|ios::binary);
	if(!file)
	{
		cout<<"Error in creating file... exiting!!!\n";
	}
	do
	{
		cout<<"\nOptions \n 1. Get Student Data\n 2. Write In File \n 3. Exit\n";
		cout<<"Enter your choice : ";
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1 : clas[i].getdata();
					cout<<i+1<<"Number of student's data added in buffer...\n";
					i++;
					break;
			case 2 : file.write((char*)&clas,sizeof(clas[0])*(i+1));
					cout<<"Data of "<<i+1<<" students written in file...\n";
					i=0;
					break;
			case 3 : 
						cout<<"\n!!!Exiting!!!\n"; break;
			default : cout<<"\n!!!Invalid choice Enter Again!!!\n";
		}
		if(i==10)
		{
			file.write((char*)&clas,sizeof(clas[0])*(i+1));
			cout<<"Buffer length at MAX\nFlushing the data in File";
			i=0;
		}
	}while(ch!=3);
	file.close();
	return 0;
}