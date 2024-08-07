#include<iostream>
using namespace std;

class alpha
{
	int x;
	public:
		static int s;
		
		alpha(int a=0)
		{
			x=a;
		}
		
		void get()
		{
			cout<<"alpha x: "<<x<<endl;
			cout<<"alpha nested beta y: "<<o1.gety()<<endl;
			o1.get();
			o1.puty(9);
			cout<<"alpha nested beta y: "<<o1.gety()<<endl;
		}
			
		void putx(int a)
		{
			x=a;
		}
		
		void puts(int a)
		{
			s=a;
		}
				
		class beta
		{
			int y;
			public:
				beta(int a=20)
				{
					y=a;
				}
				void get()
				{
					cout<<"beta y: "<<y<<endl;
				}
				
				int gety()
				{
					return y;
				}
				
				void puty(int a)
				{
					y=a;
				}
				
				
				//				void putx(int a)
				//				{
				//					x=a;		Can't be performed since x is non-static data member
				//				}
		};
		
		beta o1;
};

int s=23;

int main()
{
	alpha a(5);
	a.get();
	a.putx(10);
	a.get();

	
	
	return 0;
}
