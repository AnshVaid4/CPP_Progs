//Calculate net salary program

#include <iostream>
using namespace std;
int main()
{
	int bs,pa,pd,ns;
	cout<<"Enter basic salary: ";
	cin>>bs;
	
	cout<<"\nEnter percentage of allowances: ";
	cin>>pa;
	
	cout<<"\nEnter percentage of deductions: ";
	cin>>pd;
	
	ns=bs+bs*(pa/100)-bs*(pd/100);
	
	cout<<"\n\nNet salary is: "<<ns;
	
	return 0;
}
