#include<iostream>
using namespace std;


// get to know when the constructor is called  // print the a and b 
class greek
{
	int a;
	int b;
	 
	public:
	// default constructor
	greek()
	{
		cout<<"default constructor is called"<<endl;
	}
	
	// parametrized constructor
	greek(int x, int y)
	{
		a=x;
		b=y;
		cout<<"parameterized constructure is called"<<endl<<a<<endl<<b<<endl;
	}
	
	//copy constructor
	greek(greek &g)
	{
		a=g.a;
		b=g.b;
		cout<<"copy constructure is called"<<endl;
		cout<<a<<endl<<b<<endl;
	}
	
	// distructor 
	~greek()
	{
		cout<<"distructor is called"<<endl;
	}
};

int main()
{
	greek g1;
	greek g2(10,20);  // can also write // greek g2= greek(10,20) 
						// if only one parameter // greek g2=18 
    greek g3(g2);
	
}


