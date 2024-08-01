#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter 3 positive numbers: ";
	cin>>a>>b>>c;
	
	if(a>=0 && b>=0 && c>=0)
	{
		if (a>b && a>c)
		{
			cout<<"\nThe greatest number is "<<a;
		}
		else if (b>c)
		{
			cout<<"\nThe greatest number is "<<b;
		}
		else
		{
			cout<<"\nThe greatest number is "<<c;
		}
	}
	else
	{
		cout<<"\nEnter the positive integers only";
	}
	
	return 0;
}
