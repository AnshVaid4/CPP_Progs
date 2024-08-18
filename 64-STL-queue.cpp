#include <iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int> a; int l;
	cout<<"Empty: "<<a.empty()<<endl;
	a.push(1);
	cout<<"Empty: "<<a.empty()<<endl;
	a.push(2);
	a.push(3);
	a.push(4);
	a.push(5);
	
	cout<<"Number of elements in queue: "<<a.size()<<endl;
	cout<<"\nPushing 10 to queue "<<endl;
	a.push(10);																														//a.begin() returns the address of 1st element

	cout<<"Size of queue: "<<a.size()<<endl;
	cout<<"Front of queue: "<<a.front()<<endl;
	cout<<"Deleting front element in queue: "<<a.front()<<endl;a.pop();
	cout<<"Front of queue: "<<a.front()<<endl;
	cout<<"Empty? "<<a.empty()<<endl;
	
	cout<<"\nBack of queue: "<<a.back()<<endl;
	cout<<"Empty? "<<a.empty()<<endl;
	
	while(!a.empty())
	{
		cout<<"\nDeleting front element in queue: "<<a.front()<<endl;a.pop();
		cout<<"Front of queue: "<<a.front()<<endl;	
		cout<<"Empty? "<<a.empty()<<endl;
	}
	
	cout<<"Empty? "<<a.empty()<<endl;

//	stack<int>::iterator itr; //iterator is not present in stack
	
	return 0;
}
