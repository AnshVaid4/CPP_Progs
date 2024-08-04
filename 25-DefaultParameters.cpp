#include<iostream>
using namespace std;

void add(int x=10, int y=20)
{
	cout<<endl<<x+y;
}

int main()
{
	int a=23,b=22;
	add(a,b);
	add();
	
	return 0;
}
