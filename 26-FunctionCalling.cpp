#include<iostream>
using namespace std;

void add(int a, int b)  //formal parameters
{
	cout<<"\nSum:"<<a+b;
}

void add2(int &a, int &b)
{
	cout<<"\nAddress of 'a':"<<&a<<" and 'b': "<<&b<<"\nSum:"<<a+b;
	//Changes performed on 'a' and 'b' will be performed below in main function as well
}

void add3(int *a, int *b)
{
	cout<<"\nAddress stored in 'a': "<<a<<" and 'b': "<<b<<"\nSum:"<<*a+*b;
	//Changes performed on 'a' and 'b' will be performed below in main function as well
}

void sum(int x[5])
{
	int s=0;

	cout<<"\n\nValues are: ";
	for(int i=0;i<5;i++)
	{
		s+=x[i];
		cout<<x[i]<<" ";
	}
	cout<<"\nSum is: "<<s;
}

int main()
{
	int x=10, y=20,z[5]={6,7,8,9,10};
	cout<<"\nCall by value "; add(x,y); //actual parameters
	cout<<"\n\nCall by refernce: "<<"Address of 'x': "<<&x<<" and 'y': "<<&y; add2(x,y);
	cout<<"\n\nCall by address: "; add3(&x,&y);
	
	sum(z);
	
	return 0;
}
