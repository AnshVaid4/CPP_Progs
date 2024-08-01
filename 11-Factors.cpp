#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a number whose factor has to be calculated: ";
	cin>>a;
	
	cout<<"\nFactors are:";
	
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			cout<<i<<" ";
		}
	}
	
	return 0;
}
