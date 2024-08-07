#include<iostream>
using namespace std;

class alpha
{
	int a;
	static int x;
	public:
		alpha(int x=10)
		{
			a=x;
		}
		
		void geta()
		{
			cout<<"alpha a: "<<a<<endl;
			x++;
			cout<<"alpha static: "<<x<<endl;
		}
		
		static int upgrade()
		{
			x++;
			return x;
		}
};

int alpha::x=0;

int main()
{
	alpha x(10),y(20);
	x.geta();
	y.geta();
	
	cout<<x.upgrade()<<endl;
	cout<<y.upgrade()<<endl;
	
	cout<<alpha::upgrade();
}
