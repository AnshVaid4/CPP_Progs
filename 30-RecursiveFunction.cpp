#include<iostream>
using namespace std;

void check(int x)
{
	if(x>0)
	{
		cout<<endl<<x;
		x--;
		check(x);
	}
}

int main()
{
	int s;
	cout<<"Enter a number: ";
	cin>>s;
	check(s);
	
	return 0;
}
