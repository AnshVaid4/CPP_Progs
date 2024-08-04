#include<iostream>
using namespace std;

int add(int x, int y)
{
	return x+y;
}

float add(float x, float y)
{
	return x+y;
}

//Funtion templates help us to create generic functions which are compatible with different data types
template<class T>
T add(T x, T y, T z)
{
	return x+y+z;
}

int main()
{
	int a=10,b=20,c=30;
	float d=10.5,e=20.7,f=30.9;
	
	cout<<a<<"+"<<b<<"="<<add(a,b)<<endl;
	cout<<d<<"+"<<e<<"="<<add(d,e)<<endl;
	cout<<a<<"+"<<b<<"+"<<c<<"="<<add(a,b,c)<<endl;
	cout<<d<<"+"<<e<<"+"<<f<<"="<<add(d,e,f)<<endl;
	
	return 0;
}
