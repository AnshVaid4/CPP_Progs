#include<iostream>
using namespace std;
class x:public exception
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
		if(b == 0)
		{
			throw x();
		}
		cout<<"\nResult: "<<a/b;  //without try catch there will be no output
	}
	catch(x i)
	{
		cout<<"Invalid value of divisor for division: Error code "<<i.print()<<endl;
	}
	return 0;
}
