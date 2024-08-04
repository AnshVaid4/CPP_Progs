#include <iostream>
using namespace std;

char * arr(int size)
{
	char *p=new char [size];
	cout<<"\nEnter the values: ";
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	return p;
}

int main()
{
	int s=0;
	char *a;
	cout<<"Enter the size of array you wanna create: ";
	cin>>s;
	a=arr(s);
	
	cout<<"\nValues stored: ";
	for(int i=0; i<s; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
