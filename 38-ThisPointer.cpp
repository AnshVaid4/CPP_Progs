#include<iostream>
using namespace std;

class alpha
{
	int x,y;
	public:
	alpha(int x, int y)	//if the parameter names are different then 'this' pointer is not needed
		{
			this->x=x;
			this->y=y;
		}
		
		void get()
		{
			cout<<x<<" "<<y;
		}
};

int main()
{
	alpha a(10,20);
	a.get();
	
	return 0;
}
