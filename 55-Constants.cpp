#include <iostream>
using namespace std;

class alpha
{
	int a;
	public:
	alpha(int x=0)
	{
		a=x;
	}
	void inc(int &x) const	//1
	{
		++x;
		//		++a; This can't be done since member function is constant and data member can't be modified
		cout<<x<<" "<<a;
	}
};

int main()
{
	alpha x;
	const int a=10;
	int b=20,c=30;
	const int * ptr1=&b;	//  OR int const * ptr=&b
	int * const ptr2=&b;
	
	cout<<a<<endl;			//2	cout<<a++; variable a can't be modified
	
	cout<<*ptr1<<endl;
	ptr1=&c;
	cout<<*ptr1<<endl;		//3 cout<<++*ptr1<<endl; value of pointer can't be changed

	cout<<*ptr2<<endl;		//4 ptr2=&c; ptr2 is constant pointer and can't point other variable
	
	x.inc(b);
	return 0;
}
