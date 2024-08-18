#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> a;
	cout<<"Empty? "<<a.empty()<<endl;
	a.push_front(1);
	a.push_front(2);
	a.push_front(3);
	a.push_back(4);
	a.push_back(5);
	a.push_back(6);
	
	cout<<"Empty? "<<a.empty()<<endl;
	cout<<"Front: "<<a.front()<<endl;
	cout<<"Back: "<<a.back()<<endl;
	
	cout<<"begin: "<<*a.begin()<<" "<<*(a.begin()+1)<<" "<<a.begin()[2]<<" "<<a.begin()[3]<<" "<<a.begin()[4]<<" "<<a.begin()[a.size()-1]<<endl;	//end points to value after end item
	cout<<"rbegin: "<<*a.rbegin()<<" "<<*(a.rbegin()+1)<<" "<<*(a.rbegin()+2)<<" "<<*(a.rbegin()+3)<<" "<<*(a.rbegin()+4)<<" "<<*(a.rbegin()+5)<<endl;
	
	cout<<"end: "<<*(a.end()-1)<<" "<<*(a.end()-2)<<" "<<*(a.end()-3)<<" "<<*(a.end()-4)<<" "<<*(a.end()-5)<<" "<<*(a.end()-6)<<endl;
	cout<<"rend: "<<*(a.rend()-1)<<" "<<*(a.rend()-2)<<" "<<*(a.rend()-3)<<" "<<*(a.rend()-4)<<" "<<a.rend()[-5]<<" "<<a.rend()[-6]<<endl;	//end points to value after end item
	
	cout<<endl<<"Pop front\n";
	a.pop_front();
	deque<int>::iterator i;
	for(i=a.begin();i<a.end();i++)
	{
		cout<<*i<<" ";
	}

	cout<<endl<<"Pop back\n";
	a.pop_back();
	for(i=a.begin();i<a.end();i++)
	{
		cout<<*i<<" ";
	}
	
	cout<<endl<<"Value at 2nd position: "<<a.at(2);
	
	a.clear();
	cout<<endl<<a.empty();
	
	return 0;
}
