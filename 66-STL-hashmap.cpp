#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int, string> a;
	cout<<"Empty? "<<a.empty()<<endl;
	a.insert(pair<int,string>(1,"Apple"));
	cout<<"Empty? "<<a.empty()<<endl;
	
	a.insert(pair<int,string>(2,"Banana"));
	a.insert(pair<int,string>(3,"Mango"));
	a.insert(pair<int,string>(4,"Grapes"));
	a.insert(pair<int,string>(5,"Orange"));
	
	cout<<a.begin()->first<<":"<<a.begin()->second<<endl<<endl;
//	cout<<a.end()->first<<":"<<a.end()->second<<endl;

	map<int,string>::iterator i;
	for(i=a.begin();i!=a.end();i++)
	{
		cout<<i->first<<":"<<i->second<<endl;
	}
	cout<<endl;
	
	
	i=a.find(2);
	if(i!=a.end())cout<<"Found";
	else cout<<"Not found";
	
	cout<<endl;
	
	return 0;
}
