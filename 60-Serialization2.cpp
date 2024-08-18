#include<iostream>
#include<fstream>
using namespace std;

class alpha
{
	int a;
	string b;
	unsigned long long int c;
	
	public:
		alpha(int x=0,string y="na", unsigned long long int z=0000000000)
		{
			a=x; b=y; c=z;
		}
		
		void get()
		{
			cout<<endl<<a<<endl<<b<<endl<<c;
		}
		
		void put(int x=0,string y="na", unsigned long long int z=0000000000)
		{
			a=x; b=y; c=z;
		}
		
		
		ofstream & operator<<(ofstream &out, alpha &a)
		{
			out<<a.a<<endl;
			out<<a.b<<endl;
			out<<a.c<<endl;
			
			return out;
		}
		
};

int main()
{
	alpha a(1,"Ramesh",9936823234),b;
	a.get();
	
	ofstream out("searialize.txt")	;
	out<<a;
	
	return 0;
}
