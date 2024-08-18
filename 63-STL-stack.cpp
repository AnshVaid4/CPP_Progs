#include <iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> a; int l;
	cout<<"Empty: "<<a.empty()<<endl;
	a.push(1);
	cout<<"Empty: "<<a.empty()<<endl;
	a.push(2);
	a.push(3);
	a.push(4);
	a.push(5);
	
	cout<<"Number of elements in stack: "<<a.size()<<endl;
	cout<<"\nPushing 10 to stack "<<endl;
	a.push(10);																														//a.begin() returns the address of 1st element

	cout<<"Size of stack: "<<a.size()<<endl;
	cout<<"Top of stack: "<<a.top()<<endl;
	cout<<"Deleting top element in stack: "<<a.top()<<endl;a.pop();
	cout<<"Top of stack: "<<a.top()<<endl;
	cout<<"Empty? "<<a.empty()<<endl;
	
	while(!a.empty())
	{
		cout<<"\nDeleting top element in stack: "<<a.top()<<endl;a.pop();
		cout<<"Top of stack: "<<a.top()<<endl;	
		cout<<"Empty? "<<a.empty()<<endl;
	}
	
	cout<<"Empty? "<<a.empty()<<endl;

//	stack<int>::iterator itr; //iterator is not present in stack
	
	return 0;
}
