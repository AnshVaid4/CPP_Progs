#include<iostream>
using namespace std;

int main()
{
	for(int i=3;i>=0;i--)
	{
		for(int j=i;j>0;j--)
		{
			cout<<" ";
		}
		
		for(int k=0;k<4-i;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
