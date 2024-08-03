#include <iostream>
using namespace std;

int main()
{
	int a=10,*p=&a;	//p stores address of a
	cout<<"Value stored in 'a': "<<a<<endl;
	cout<<"Address of 'a': "<<&a<<endl;
	cout<<"Address stored in 'p': "<<p<<endl;
	cout<<"Address of 'p': "<<&p<<endl;
	cout<<"Value at p: "<<*p<<endl;		//dereferencing
	cout<<"Vaue at address of 'a': "<<*&a<<endl;
	
	return 0;
}
