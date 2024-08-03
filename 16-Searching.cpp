#include<iostream>
using namespace std;

int main()
{
	int a[8],f,index=-1;
	cout<<"Enter 8 elements: ";
	
	for(int i=0;i<8;i++)
	{
		cin>>a[i];
	}
	
	cout<<endl;
	
	cout<<"Eyter the element to search: ";
	cin>>f;
	
	cout<<endl<<"Using linear search: ";
	for(int i=0; i<8;i++)
	{
		cout<<a[i]<<" ";
		if(a[i]==f)
		{
			index=i;
		}
	}
	if(index>-1)
	{
		cout<<endl<<"Found the element on "<<index<<" position!"<<endl;
		index=-1;
	}
	else
	{
		cout<<endl<<"Element not found!"<<endl;
	}
	
	
	
	cout<<endl<<"Using binary search";
	int max;
	for(int i=0; i<8;i++)
	{
		for(int j=i+1;j<=7;j++)
		{
			if(a[i]>a[j])	
			{
				max=a[i];
				a[i]=a[j];
				a[j]=max;
			}
		}
	}

	cout<<endl<<"Sorted array: ";	
	for(int i=0; i<8;i++)
	{
		cout<<a[i]<<" ";
	}
	
	int len=sizeof(a)/sizeof(int),ptr=len/2,mid;    //used 4 variables in total, but length can be directly used in ptr variablr
	
	for(int i=0;i<len;i++)
	{
		if(f==a[ptr])
		{
			index=ptr;
			break;
		}
		if(f>a[ptr] && ptr<len)
		{
			ptr+=1;
			mid=ptr+((len-ptr)/2);
		}
		else
		{
			ptr-=1;
			mid=ptr-((len-ptr)/2);
		}
		
	}
	if(index>-1)
	{
		cout<<endl<<"Found the element on "<<index<<" position!"<<endl;
		index=-1;
	}
	else
	{
		cout<<endl<<"Element not found!"<<endl;
	}
	
	
	return 0;
}
