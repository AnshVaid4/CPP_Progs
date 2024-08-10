//#include<iostream>
//using namespace std;
//
//class alpha
//{
//	int a;
//	float b;
//	char c;
//	
//	public:
//		alpha(int x=0,float y=0,char z='a')
//		{
//			a=x;
//			b=y;
//			c=z;
//		}
//		
//	alpha add(alpha l)		
//	{
//		alpha m;
//		m.a=a+l.a;
//		m.b=b+l.b;
//		m.c=c+l.c;
//		
//		return m;
//	}
//	
//	void get()
//	{
//		cout<<endl<<a<<" "<<b<<" "<<c<<"("<<int(c)<<")";
//	}
//};
//
//int main()
//{
//	alpha x(10,20.2,'A'), y(20,30.3,'0'),f;
//	
//	f=x.add(y);
//	x.get();
//	y.get();
//	f.get();
//	
//	return 0;
//	
//}
//
//Output:
//10 20.2 A(65)
//20 30.3 0(48)
//30 50.5 q(113)



#include<iostream>
using namespace std;

class alpha
{
	int a;
	float b;
	char c;
	
	public:
		alpha(int x=0,float y=0,char z='a')
		{
			a=x;
			b=y;
			c=z;
		}
		
	alpha operator+(alpha l)		
	{
		alpha m;
		m.a=a+l.a;
		m.b=b+l.b;
		m.c=c+l.c;
		
		return m;
	}
	
	friend alpha operator-(alpha x, alpha y);
	
	void get()
	{
		cout<<endl<<a<<" "<<b<<" "<<c<<"("<<int(c)<<")";
	}
};

alpha operator-(alpha x, alpha y)
{
	alpha z;
	z.a=x.a-y.a;
	z.b=x.b-y.b;
	z.c=x.c-y.c;
	
	return z;
}

int main()
{
	alpha x(10,20.2,'A'), y(20,30.3,'0'),f;
	
	f=x+y;
	x.get();
	y.get();
	f.get();
	
	f=x-y;
	f.get();
	
	return 0;
	
}
