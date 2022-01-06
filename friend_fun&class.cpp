#include<iostream>
using namespace std;


/*
class greek
{
	int a,b;
	
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		
		void showdata()
		{
			cout<<"\n"<<a<<"\n"<<b;
		}
		
		friend void add(greek);
};

void add(greek d)
{
cout<<"sum= "<<(d.a+d.b);
}

int main()
{
	greek c1;
	c1.setdata(5,6);
	add(c1);
	
}
*/


/*  one function is friend of two classes

//class A;
class B;
class A
{
	int a;
	public:
	setdata(int x)
	{
		a=x;
	}
	friend void fun(A,B);
};

class B
{
	int b;
	public:
	setdata(int y)
	{
		b=y;
	}
	friend void fun(A,B);	
};

void fun(A m,B n)
{
cout<<"sum= "<<(m.a+n.b);
}

int main()
{
	A c1;
	B c2;
	c1.setdata(5);
	c2.setdata(6);
	fun(c1,c2);
	
}
*/


///*  one function is friend of two classes // two digit addition
//class A;
class A
{
	int a;
	int b;
	public:
	setdata(int x,int y)
	{
		a=x;
		b=y;
	}
	showdata()
	{
		cout<<"\n"<<a<<"\n"<<b;
	}
	friend A operator-(A);
};

A operator-(A m)
{
	A temp;
	temp.a=-m.a;
	temp.b=-m.b;
	return temp;
}

int main()
{
	A c1,c2;
	c1.setdata(5,6);
	c1.showdata();
	c2=-c1;
	c2.showdata();
}
//*/
