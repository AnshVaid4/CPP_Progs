#include <iostream>
using namespace std;
int main()
{
	int a=10;
	
	while(a>0)
	{
		cout<<a<<" ";
		a--;
	}
	
	cout<<endl;
	
	do
	{
		cout<<a<<" ";
		a--;
	}while(a>0);
	
	cout<<endl;
	
	for(int b=0;b<10;b++)
	{
		cout<<b<<" ";
	}

	
	return 0;
}
