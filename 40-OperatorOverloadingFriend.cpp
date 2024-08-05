#include<iostream>
using namespace std;

class alpha
{
	int x,y;
	public:
		alpha(int x=23,int y=27)
		{
			this->x=x;
			this->y=y;
		}
		
		void get()
		{
			cout<<endl<<x<<" "<<y;
		}
		
		friend alpha operator+(alpha t1, alpha t2);
};

alpha operator+(alpha t1, alpha t2)
{
	alpha t;
	t.x=t1.x+t2.x;
	t.y=t1.y+t2.y;
	
	return t;
}

int main()
{
	alpha x,y(20,40),z;
	z=x+y; //OR z=operator+(x,y);
	x.get();
	y.get();
	z.get();
	
	return 0;
}
