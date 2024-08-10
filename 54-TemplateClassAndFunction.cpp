#include<iostream>
using namespace std;

template <class T, class Y>
class alpha
{
	T x;
	Y y;
	public:
		alpha(T a, Y b)
		{
			x=a;
			y=b;
		}
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
};

template <class T>
void add(T x, T y)
{
	cout<<x+y<<endl;
}

int main()
{
	int a=10, b=20;
	add(a,b);
	float c=10.5,d=20.5;
	add(c,d);
	
	alpha <int,float> m(10,10.2);
	m.print();
	
	alpha <int,char> n(10,'a');
	n.print();
	
	alpha <float,char> o(10.2,'a');
	o.print();
	
	alpha <int,int> p(10,20);
	p.print();
		
	return 0;
}
