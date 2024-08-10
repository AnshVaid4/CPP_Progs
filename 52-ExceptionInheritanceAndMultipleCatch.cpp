#include<iostream>
using namespace std;
class x
{
	int a;
	public:
		int print()
		{
			a=10;
			return a;
		}
};

class y:public x
{
	int a;
	public:
		int print()
		{
			a=20;
			return a;
		}
};


int main()
{
	int a,b;
	cout<<"Enter divident: ";
	cin>>a;
	cout<<"\nEnter divisor: ";
	cin>>b;
	try
	{
			if(b < 0)
		{
			throw y();
		}
		
		if(b == 0)
		{
			throw x();
		}
		
		if(b == 1)
		{
			throw 1;
		}
		
		if(b == 2)
		{
			throw 1.1;
		}
		
		cout<<"\nResult: "<<a/b;  //without try catch there will be no output
	}
	catch(y i)	//inherited class exception should be caught first otherwise its parent class would be called everytime
	{
		cout<<"Invalid value of divisor for division: Error code "<<i.print()<<endl;
	}
	catch(x i)
	{
		cout<<"Invalid value of divisor for division: Error code "<<i.print()<<endl;
	}
	catch(int i)
	{
		cout<<"Integer catch: Error code "<<i<<endl;
	}
	catch(...)
	{
		cout<<"Something went wrong!"<<endl;
	}
	
	return 0;
}
