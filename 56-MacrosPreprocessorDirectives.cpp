#include<iostream>
#define g 9.8
#define c std::cout<<
#define e std::endl
#define sq(x) x*x
#ifndef g				//if not defined
	#define g 10
#endif
#define m "hello"
#define msg(x) #x

//using namesapace std;

int main()
{
	c"abc";
	c "\n";
	c g;
	c e;
	c sq(2);
	c e;
	c m;
	c e;
	c msg(hello world);
	
	return 0;
}
