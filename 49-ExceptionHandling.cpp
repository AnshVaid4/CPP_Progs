#include<iostream>
using namespace std;

int mod(int,int);
int main()
{
	int a,b;
	cout<<"Enter divident: ";
	cin>>a;
	cout<<"\nEnter divisor: ";
	cin>>b;
	try
	{
		if(b == 0)
		{
			throw 1;
		}
		cout<<"\nResult: "<<a/b;  //without try catch there will be no output
	}
	catch(int i)
	{
		cout<<"Invalid value of divisor for division: Error code "<<i<<endl;
	}
	
	try
	{
		cout<<endl<<mod(a,b); //terminate called after throwing an instance of 'int'
	}
	catch(int i)
	{
		cout<<"Invalid value of divisor for mod. Error code "<<i<<endl;
	}
	
	
	return 0;
}

int mod(int x,int y) throws(int) 
{
	if(y==0)
	{
		throw 1;
	}
	
	return x%y;
}
