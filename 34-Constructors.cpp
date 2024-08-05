#include<iostream>
using namespace std;

class alpha
{
	int a,b;

	public:	
	alpha()
	{
		a=0;
		b=0;
	}
	
	alpha(int x, int y)	//Parameterized functions can be given default values
	{					//if non-parameterized contructor is present then default values
		a=x;			//can't be added in parameterized constructor unless non-parameterized
		b=y;			//constructor is removed
	}
	
	alpha(alpha &x)
	{
		a=x.a;
		b=x.b;
	}
	
	void get()
	{
		cout<<a<<" "<<b;
	}
};

int main()
{
	alpha a(10,20),	//Parameterized constructor called
	b,  //Non-parameterized constructor called
	c(30,40);
	
	alpha d(c); //Copy constructor called
	
	a.get();
	cout<<endl;
	b.get();
	cout<<endl;
	c.get();
	cout<<endl;
	d.get();
	
	return 0;
}
