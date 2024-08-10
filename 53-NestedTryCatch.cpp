#include<iostream>
using namespace std;
class x:public exception
{
	public:
		char * what()
		{
			return "Negative value entered!";
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
			throw 1;
		}
		
		try
		{
			if(b<0)
			{
				throw x();
			}
		}
		catch(x &i)
		{
			cout<<i.what();
		}
		
		cout<<"\nResult: "<<a/b;  //without try catch there will be no output
	}
	catch(int i)
	{
		cout<<"Invalid value of divisor for division: Error code "<<i<<endl;
	}
	return 0;
}
