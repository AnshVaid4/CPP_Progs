#include<iostream>
using namespace std;

class alpha
{
	int a;
	public:
		alpha(int x=10)
		{
			a=x;
		}
		
		void geta()
		{
			cout<<"alpha "<<a<<endl;
		}
};

class beta:public alpha
{
	int a;
	public:
		beta(int x=20)
		{
			a=x;
		}
		
		void geta()
		{
			alpha::geta();//to get a value of alpha
			cout<<"beta "<<a<<endl;
		}
};

int main()
{
	alpha a;
	a.geta();
	
	beta b;
	b.geta();
	
	return 0;
}
