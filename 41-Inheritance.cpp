#include<iostream>
using namespace std;

class alpha
{
	int a;
	float b;
	
	protected:
		void setval(int x,float y)		//setval is made protected because we don't want people to call this function and chnge the values
		{
			a=x;
			b=y;
		}
	
	public:
		alpha(int x=0, float y=0)
		{
			a=x;
			b=y;
		}
		
		void geta()
		{
			cout<<endl<<a<<" "<<b;
		}
		
		float suma()
		{
			return float(a)+b;
		}
};

class beta:public alpha
{
	char c;
	
	public:
		beta(int x=0,float y=0,char z='0')
		{
			//a=x;			//a is private in alpha so it cannot be directly accessible by beta
			//b=y;			//b is private in alpha so it cannot be directly accessible by beta
			setval(x,y);	//therefore, a function setval is used to initialize alpha's a & b, which is protected, that's why accessivle in class beta, but not by public people
			c=z;
		}
		
		void getb()
		{
			//cout<<endl<<a<<" "<<b<<" "<<c;
			geta();
			cout<<" "<<c<<"("<<int(c)<<")";
		}
		
		void sumb()
		{
			//cout<<endl<<float(a)+b+float(c)<<" ("<<char(float(a)+b+float(c))<<")";
			cout<<endl<<suma()+float(c)<<" ("<<char(suma()+float(c))<<")";
		}
		
};

int main()
{
	alpha a(10,20.2);
	a.geta();
	//a.setval(13,2.3);		//This setval can't be used publicly since it is protected, and only be used within the classes
	cout<<endl<<a.suma();
	
	beta b(5,10.2,'A');
	b.geta();
	cout<<endl<<b.suma();
	b.getb();
	b.sumb();
	
	return 0;
}

//10 20.2
//30.2
//5 10.2
//15.2
//5 10.2 A(65)
//80.2 (P)
