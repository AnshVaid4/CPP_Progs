#include<iostream>
using namespace std;

class alpha
{
	int a,b;

	public:	
	
	alpha(int x=0, int y=0)	
	{
		cout<<endl<<"Constructor Called";
		a=x;			
		b=y;			
	}
	
	~alpha()	//destrutor is called in descending order
	{
		cout<<endl<<"Destructor Called for object containing "<<a<<" and "<<b;
	}
	
	void get()
	{
		cout<<endl<<a<<" "<<b;
	}
};

int main()
{
	alpha a(10,20),b;
	a.get();
	
	return 0;
}
