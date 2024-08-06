#include<iostream>
using namespace std;

class alpha
{
	int a;
	protected:
		int geta()
		{
			return a;
		}

	public:
		alpha()
		{
			a=0;
			cout<<endl<<"Default alpha constructor";
		}
		
		alpha(int x)
		{
			a=x;
			cout<<endl<<"Parameterized alpha constructor";
		}
		void get()
		{
			cout<<endl<<a;
		}
};

class beta:public alpha
{
	int b;
	public:
		beta()
		{
			b=0;
			cout<<endl<<"Default beta constructor";
		}
		
		beta(int x)
		{
			b=x;
			cout<<endl<<"Parameterized beta constructor";
		}
		void get()
		{
			cout<<endl<<geta()<<" "<<b;
		}
};

int main()
{
	alpha a,b(10);
	a.get();
	b.get();
	beta c,d(20);
	c.get();
	d.get();
	
	return 0;
}
