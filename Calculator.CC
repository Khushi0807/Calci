#include<iostream>
using namespace std;
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);

int main()
{
	int choice=0;
	int a=0,b=0;
	cout<<"Enter the choice\n1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n5.QUIT\n";
	cin>>a>>b;
	switch(choice)
	{
	
		case 1:cout<<"Addition of two number= "<<add(a,b);break;
		case 2:cout<<"Subtraction of two number= "<<subtract(a,b);break;
		case 3:cout<<"Multiplication of two number= "<<multiply(a,b);break;
		case 4:cout<<"Division of two number= "<<divide(a,b);break;
		case 5:exit(0);
		default : cout<<"Invalid Input";
	}
}

int add(int a,int b)
{
	return(a+b);
}

int subtract(int a,int b)
{
	return(a-b);
}

int multiply(int a,int b)
{
	return(a*b);
}

int divide(int a,int b)
{
	return(a/b);
}

