#include <iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a; int l;
	cout<<"Empty: "<<a.empty()<<endl;
	a.push_back(1);
	cout<<"Empty: "<<a.empty()<<endl;
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	
	cout<<"Number of elements in vector: "<<a.size()<<endl;
	cout<<"\nInserting 10 at beginning of vector "<<endl;
	a.insert(a.begin(),10);																														//a.begin() returns the address of 1st element

	cout<<"1st element of vector: "<<a[0]<<endl;
	cout<<"Number of elements in vector: "<<a.size()<<" Element at index 1: "<<a.at(1)<<endl;
	
	cout<<"Front element: "<<a.front()<<endl;																									//1st value of vector
	cout<<"Back element: "<<a.back()<<endl;																										//last value of vector
	
																																				//cbegin, cend, crbegin, crend
	
	cout<<"Reverse end iterator at theorotical element before 1st element (value at that element): "<<*a.rend()<<" "<<*(&a.front()-1)<<endl;	//value pointed before reverse end (beginning) //checking value before 1st value
	cout<<"Reverse begin iterator at the end of vector: "<<*a.rbegin()<<endl;																	//value pointed by reverse beginning (end)
	
	cout<<"\nIteration using rend: "<<*(a.rend()-1)<<" "<<*(a.rend()-2)<<" "<<*(a.rend()-3)<<" "<<*(a.rend()-4)<<
	" "<<*(a.rend()-5)<<" "<<*(a.rend()-a.size())<<endl;
	cout<<"Iteration using end: "<<*(a.end()-1)<<" "<<*(a.end()-2)<<" "<<*(a.end()-3)<<" "<<*(a.end()-4)<<" "<<*(a.end()-5)<<" "
	<<*(a.end()-6)<<endl;
	
	cout<<"Iteration using rbegin: "<<*(a.rbegin())<<" "<<*(a.rbegin()+1)<<" "<<*(a.rbegin()+2)<<" "<<*(a.rbegin()+3)<<" "<<*(a.rbegin()+4)
	<<" "<<*(a.rbegin()+5)<<endl;
	cout<<"Iteration using begin: "<<*(a.begin())<<" "<<*(a.begin()+1)<<" "<<*(a.begin()+2)<<" "<<*(a.begin()+3)<<" "<<*(a.begin()+4)<<" "
	<<*(a.begin()+5)<<endl;
		
		
		
	cout<<"\nEnd iterator at theorotical element after end (value at theat element)"<<*a.end()<<" "<<*(&a.back()+1)<<endl;						//end + 1 value
	cout<<"Iterator at the beginning of vector"<<*a.begin()<<endl;
	
	//cbegin, cend, crbegin, crend

	cout<<"\nRemoving element from end"<<endl;
    a.pop_back();
	cout<<"Number of elements in vector: "<<a.size()<<" Element at end: "<<a.at(a.size()-1)<<endl;												//actual size of vector (number of elements)
	cout<<"Capacity: "<<a.capacity()<<endl;																										//number of elements without extending limit
	cout<<"\nIncreasing capacity"<<endl;
	a.push_back(40);	//6
	a.push_back(50);	//7
	a.push_back(60);	//8
	a.push_back(70);	//9th element added, which will now increase the capacity to 16 elements
	cout<<"Number of elements in vector: "<<a.size()<<endl;
	cout<<"Capacity: "<<a.capacity()<<endl;
	cout<<"Max elements that can be entered in vector: "<<a.max_size()<<endl;
	
	vector<int>::iterator itr;																													//creating an iterator to traverse vector
	itr=a.begin();
	cout<<endl<<*itr<<" "<<*(itr+1)<<" "<<itr[2]<<" "<<itr[a.size()-1]<<endl;
	
	for(;itr<a.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;				//10 1 2 3 4 40 50 60 70
	
	itr=a.begin();
	a.erase(itr+5,itr+7);	//Range is [5,7)
	for(;itr!=a.end();itr++)
	{
		cout<<*itr<<" ";
	}
	
	cout<<endl;
	
	a.clear();
	for(itr=a.begin();itr!=a.end();itr++)
	{
		cout<<*itr<<" ";
	}
	
	return 0;
}
