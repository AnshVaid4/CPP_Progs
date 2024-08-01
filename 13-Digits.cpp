#include<iostream>
using namespace std;

int main()
{
	int i,r,s=0,count=0;
	cout<<"Enter a number: ";
	cin>>i;
	
	cout<<"Digits are: ";
	while(i>0)
	{
		r=i%10;
		i=i/10;
		count++;
		s+=r;
		cout<<r<<" ";
	}
	
	cout<<"\nSum of digits: "<<s;
	
	return 0;
	
}
