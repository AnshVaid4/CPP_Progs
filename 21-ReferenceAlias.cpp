#include<iostream>
using namespace std;
int main()
{
	int i=10;
	int &j=i;
	cout<<i<<endl;
	cout<<j<<endl;
	cout<<++i<<endl;
	cout<<j<<endl;
	j+=10;
	cout<<i<<endl;
	cout<<j<<endl;
	
	cout<<endl;
	cout<<&i<<" "<<&j;
	
	return 0;
}
