#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in("test.txt");  	//default delimiter is space
	if(in)						//in.eof()
	cout<<endl<<"File is present";
	else
	cout<<endl<<"File is not present";
	cout<<endl<<in;
	string x;
	in>>x;  //hello
	cout<<"\n"<<x;
	
	in>>x;  //file
	cout<<endl<<in;
	cout<<"\n"<<x;
	
	in>>x;  //hello
	cout<<"\n"<<x;
	
	in>>x;  //file2
	cout<<"\n"<<x;
	
	in>>x;  //20
	cout<<"\n"<<x;
	
	in.close();
	
	return 0;
}
