#include<iostream>
using namespace std;

class alpha
{
	int a,b;
	
	public:
		alpha(int x=0,int y=0)
		{
			a=x;
			b=y;
		}
		
		int add()	//body of function is copied wherever the function is called
		{
			return a+b;
		}
		
		int mul();	//recommended way, since in machine code the body of function is not copied
};

int alpha::mul()	//definition of function where the pointer jumps to whenever called
{
	return a*b;
}


int main()
{
	alpha a(10,29);
	cout<<a.add()<<endl;
	cout<<a.mul()<<endl;
	
	return 0;
}

