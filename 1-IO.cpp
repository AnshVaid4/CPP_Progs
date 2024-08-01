//Displaying output and taking user input

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
	cout <<"Enter two numbers to add:"; 		//Displaying output
	int a,b;
	string s;	
	cin>>a>>b;									//Taking input in variables
	cout<<"\nSum is: "<<a+b;
	
	
	cout<<endl<<endl<<"What's your name?\n";
	cin>>s;										//delimiter is space character
	cout<<"Hello "<<s<<"!";
	getch();
	
	cout<<endl<<endl<<"What's your name?\n";
	cin.ignore();
	getline(cin,s);								//delimiter is newline character

	cout<<"Hello "<<s<<"!";

	
	return 0;
}
