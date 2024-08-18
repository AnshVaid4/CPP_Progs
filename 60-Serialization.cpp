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
		
		void write()	//Not a feasable way since the file object truncate every time
		{
			ifstream in("serialize.txt");
			if(in)
			{
				ofstream out("serialize.txt",ios::app);
				out<<a<<endl<<b<<endl<<c<<endl;
				in.close();
				out.close();
			}
			else
			{
				ofstream out("serialize.txt",ios::trunc);
				out<<a<<endl<<b<<endl<<c<<endl;
				in.close();
				out.close();
			}
		}
		void read()
		{
			ifstream in("serialize.txt");
			string s;
			
			if(in)
			{
				while(!in.eof())
				{
					in>>s;
					cout<<s<<endl;
				}
				in.close();
			}
			else
			{
				cout<<endl<<"FIle not found";
			}
		}
		
//		ofstream & operator<<(ofstream &o, alpha a)
//		{
//			o<<a.a<<endl;
//			o<<a.b<<endl;
//			o<<a.c<<endl;
//			
//			return o;
//		}
		
};

int main()
{
	alpha a(1,"Ramesh",9936823234),b;
//	a.get();
	a.write();
	b.write();
	a.read();
	
//	ofstream out("searialize.txt")	;
//	out<<a;
	
	return 0;
}
