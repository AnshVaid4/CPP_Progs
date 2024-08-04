#include <iostream>
using namespace std;

int x=10;
void inc()
{
	x+=10;
}

int main()
{
	int x=5;
	cout<<x<<endl;
	cout<<::x<<endl;
	inc();
	cout<<x<<endl;
	cout<<::x<<endl;
	
	return 0;
}
