#include<iostream>
using namespace std;

class alpha
{
	int x,y;
	public:
		void put(int a,int b)
		{
			x=a;
			y=b;
		}
		
		int add()
		{
			return x+y;
		}
		
		int sub()
		{
			return x-y;
		}
		
		int mul()
		{
			return x*y;
		}
};

int main()
{
	alpha *ptr,a1;
	ptr=&a1;
//	a1.x=10;  Can't be done since x is private
	ptr->put(20,10);
	cout<<endl<<ptr->add();
	cout<<endl<<ptr->sub();
	cout<<endl<<a1.mul();
	
	return 0;
}
