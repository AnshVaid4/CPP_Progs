#include<iostream>
#define ___ cout

using namespace std;

namespace a
{
	void hey()
	{
		___<<"a says hello!"<<endl;
	}
}

namespace b
{
	void hey()
	{
		___<<"b says hello!"<<endl;
	}
}

//using namespace a;
int main() throw()
{
	a::hey();	//we can remove scope resolution for a
	b::hey();
	
	return 0;
}
