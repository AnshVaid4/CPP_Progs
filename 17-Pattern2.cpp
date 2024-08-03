#include <iostream>
using namespace std;

int main()
{
	char a[5][9];
	for(int i=0; i<5; i++)
	{
		for(int j=0;j<9;j++)
		{
			if(i==0)
			{
				a[i][j]='*';
			}
			else if(i==j)
			{
				a[i][j]='*';
				a[i][8-i]='*';
			}
			else
			{
				if(j!=8-i)
				a[i][j]=' ';
			}
		}
	}
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
