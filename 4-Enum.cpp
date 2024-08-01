#include <iostream>
using namespace std;

enum malware {trojan_horse,ransomware,rootkit,fileless};	//enum is user defined constants || const int trojan_horse=0, ransomware=1, rootkit=2, fileless=3;

int main() 
{
	malware x;												//now x can't be redeclared
	cout<<x;
	
	malware y=ransomware;
	cout<<endl<<y;
	
	malware z=rootkit;
	cout<<endl<<z;
	
	return 0;
}
