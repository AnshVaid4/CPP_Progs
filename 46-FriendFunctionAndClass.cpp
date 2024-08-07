#include<iostream>
using namespace std;

class beta;
class alpha
{
	int a;
	public:
		friend beta;
		friend void init(alpha,int);  //friend functions can access private and protected members directly through the object of class
		void out();
};

class beta
{
	int x;
	public:
		void set(alpha &x,int y)
		{
			x.a=y;
			this->x=y+10;
			
			cout<<x.a<<" "<<this->x;
		}
};

void init(alpha w, int x)
{
	w.a=x;
	cout<<w.a<<endl;
}

void alpha::out()
{
	cout<<a<<endl;
}

int main()
{
	alpha x;
	init(x,20);
	x.out();
	
	beta b;
	b.set(x,10);

	return 0;
}

