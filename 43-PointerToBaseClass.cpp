#include<iostream>
using namespace std;

class alpha
{
	int a;
	public:
		alpha(int x=100)
		{
			a=x;
		}
		void geta()
		{
			cout<<endl<<a;
		}
		
		void inca()
		{
			cout<<endl<<++a;
		}
};


class beta:public alpha
{
	int b;
	public:
		beta(int x=200)
		{
			b=x;
		}
		void getb()
		{
			cout<<endl<<b;
		}
		
		void incb()
		{
			cout<<endl<<++b;
		}
};

int main()
{
	alpha *a=new beta(10),*b;
	beta x;
	b=&x;
	//alpha *a=new beta(10); is invalid
	a->geta();
	a->inca();
	b->geta();
	b->inca();
	x.getb();
	x.incb();
//	a->getb();	alpha doesn'e have getb
//	a->incb();	alpha doesn't have incb
}
