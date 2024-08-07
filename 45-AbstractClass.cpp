#include <iostream>
using namespace std;

class alpha
{
	int a;
	public:
		virtual void print()=0;		//abstract function
		virtual void init(int x)=0;
};

class beta:public alpha
{
	int y;
	public:
		void print()
		{
			cout<<y<<endl;
		}
		void init(int l)
		{
			y=l;
		}
};

class gamma:public alpha
{
	int z;
	public:
		void print()
		{
			cout<<z<<endl;
		}
		void init(int l)
		{
			z=l;
		}
};

int main()
{
//	alpha a;
//	a.print();
//	a.init(2);
//	a.print();
	
	beta b;
	b.print();
	b.init(4);
	b.print();
	
	gamma g;
	g.print();
	g.init(6);
	g.print();
	
	return 0;
	
}
