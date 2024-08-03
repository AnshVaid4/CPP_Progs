#include <iostream>
using namespace std;

int main()
{
	int a[5]={4,5,6,7,8};					//memory allocated in stack
	int *p=new int [5]{10,20,30,40,50};	//memory allocated in heap
	
	cout<<a<<" "<<a+1<<" : "<<*a<<" "<<*(a+1)<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
	cout<<*p<<" "<<*(p+1)<<" "<<*(p+2)<<" "<<p[3]<<" "<<p[4];
	
	delete p;
	p=NULL;
	return 0;
}
