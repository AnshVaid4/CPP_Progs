#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream out("test.txt");
	cout<<endl<<out;
	out<<"Hello file";
	cout<<endl<<out;
	out<<"\nHello file2";
	cout<<endl<<out;
	out<<"\n"<<20;
	cout<<endl<<out;

	return 0;
}
