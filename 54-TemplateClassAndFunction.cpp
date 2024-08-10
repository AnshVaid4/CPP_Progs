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
		
		T incT();
		Y incY();
};

template <class T, class Y>
T alpha<T,Y>::incT()
{
	return x+1;
}

template <class T, class Y>
Y alpha<T,Y>::incY()
{
	return y+1;
}

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
	cout<<m.incT()<<" "<<m.incY()<<endl<<endl;
	
	alpha <int,char> n(10,'a');
	n.print();
	cout<<n.incT()<<" "<<n.incY()<<endl<<endl;
	
	alpha <float,char> o(10.2,'a');
	o.print();
	cout<<o.incT()<<" "<<o.incY()<<endl<<endl;
	
	alpha <int,int> p(10,20);
	p.print();
	cout<<p.incT()<<" "<<p.incY()<<endl<<endl;
	
	return 0;
}
