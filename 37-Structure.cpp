#include <iostream>
using namespace std;

struct alpha		//Unlike class, by default everything is public in a structure
{
	int a;
	int b;
	
	alpha()
	{
		cout<<endl<<"Constructor called for variable storing "<<a<<" and "<<b;
		a=10;
		b=10;
	}
	
	~alpha()
	{
		cout<<endl<<"Destructor Called for object containing "<<a<<" and "<<b;
	}
	
	void get()
	{
		cout<<endl<<a<<" "<<b;
	}
	
	void add();
};
void alpha::add()
{
	cout<<endl<<a+b;
}

int main()
{
	alpha a,b,c,d;
	a.a=30;
	a.b=40;
	a.get();
	a.add();
	
	b.get();
	b.add();
	
	return 0;
}
