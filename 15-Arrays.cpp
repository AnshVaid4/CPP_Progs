#include<iostream>
using namespace std;

int main()
{
	int a[5],b[]={1,2},c[3]={1,2};
	char d[5]={65,'C','G',99,105};
	a[2]=5;
	
	for(int i=0; i<sizeof(a)/sizeof(int);i++)
	{
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	
	for(int i=0; i<sizeof(b)/sizeof(int);i++)
	{
		cout<<b[i]<<" ";
	}
	
	cout<<endl;
	
	for(int i=0; i<sizeof(c)/sizeof(int);i++)
	{
		cout<<c[i]<<" ";
	}
	
	cout<<endl;
	
	for(int i=0; i<sizeof(d)/sizeof(char);i++)
	{
		cout<<(int) d[i]<<":"<<d[i]<<" ";
	}
	
	
	
//	for(int x:a)
//	{
//		cout<<x<<" ";
//	}
	
	return 0;
}
