#include<iostream>
using namespace std;

void hw(string n)
{
	cout<<"\nHello "<<n;
}

int add(int x, int y)
{
	return x+y;
}

int main()
{
	void (*fp)(string);
	string name;
	cout<<"Enter your name: ";
	getline(cin,name);
	fp=hw;
	fp("Ansh");
	
	int (*p)(int, int);
	p=add;
	cout<<endl<<p(2,3);
	
	return 0;
}
