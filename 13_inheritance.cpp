//                     Program to demonstrate inheritance in classes	             //
//***********************************************************************************//
//                    Copyright 2019, @ Avaneesh, All Rights reserved.               //
//***********************************************************************************//
#include<iostream>
using namespace std;
class father
{
protected:unsigned int age;
public:
	father()
	{
		age=60;
	}
	father(int x)
	{
		age=x;
	}
	virtual void iam()
	{
		cout<<"I AM THE FATHER,my age is:"<<age<<endl;
	}
};
class son:public father
{
	public:
	son()
	{
		age=30;
	}
	son(int x)
	{
		age=x;
	}
	void iam()
	{
		cout<<"I AM THE SON,my age is:"<<age<<endl;
	}
};
class daughter:public father
{
	public:
	daughter()
	{
		age=24;
	}
	daughter(int x)
	{
		age=x;
	}
	void iam()
	{
		cout<<"I AM THE DAUGHTER,my age is:"<<age<<endl;
	}
};
int main()
{
father f(50),*ptrf;
son s(23);
daughter d(16);
cout<<"\n\n******************************CALL BY FATHER OBJECT*****************************\n\n";
f.iam();
cout<<"\n\n*******************************CALL BY SON OBJECT*******************************\n\n";
s.iam();
cout<<"\n\n*****************************CALL BY DAUGHTER OBJECT****************************\n\n";
d.iam();
ptrf=&s;
cout<<"\n\n***************CALL BY POINTER TO FATHER WITH ADDRESS OF SON OBJECT*************\n\n";
ptrf->iam();//(*ptrf).iam();
cout<<"\n\n************CALL BY POINTER TO FATHER WITH ADDRESS OF DAUGHTER OBJECT***********\n\n";
ptrf=&d;
ptrf->iam();//(*ptrf).iam();
cout<<"\n\n================================================================================";
return 0;
}

/*class father
{
protected:
	int age;
public:
	father(int x)
	{
		age = x;
	}
	virtual void iam()
	{
		cout<<"I am the father, my age is "<<age<<endl;
	}
};
int main()
{
	
	
	return 0;
}*/