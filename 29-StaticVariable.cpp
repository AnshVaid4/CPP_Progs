#include<iostream>
using namespace std;

void check()
{
	static int x;	//default value is 0
	int y=10;
	++x;
	
	cout<<x<<" "<<y<<endl;
}

int main()
{
	check();
	check();
	check();
	check();
	check();
}
