#include <iostream>
using namespace std;

int main()
{
	int a,flag=0;
	cout<<"Enter a number to check if it is prime or not: ";
	cin>>a;
	
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==0)
	{
		cout<<"\nNumber is prime";
	}
	else
	{
		cout<<"\nNumber is not prime";
	}
	
	return 0;
}
