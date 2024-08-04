#include<iostream>
using namespace std;

void add(int x, int y)		//Function overloading: polymorphism: same function name but different usage
{							//either data type or parameter list should be different
	cout<<"\nAdding "<<x<<" and "<<y<<": "<<x+y;
}

int add(int x,int y,int z)
{
	return x+y+z;
}

int main()
{
	int a=10,b=20,c=30;
	add(a,b);
	add(b,c);
	add(a,c);
	cout<<"\nAdding "<<a<<", "<<b<<" and "<<c<<": "<<add(a,b,c);
	
	return 0;
}
