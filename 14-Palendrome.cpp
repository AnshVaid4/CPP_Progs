#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int i,r,s=0,num;
	cout<<"Enter a number: ";
	cin>>i;
	num=i;
	cout<<"Digits are: ";
	while(i>0)
	{
		r=i%10;
		i=i/10;
		s=(s*10) + r;
		cout<<r<<" ";
	}
	
	
	if(s==num)
	{
		cout<<"\nNumber is palendrome";
	}
	else
	{
		cout<<"\nNumber is not palendrome";
	}
	
	return 0;
	
}
