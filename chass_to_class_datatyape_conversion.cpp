#include<iostream>
using namespace std;

class D;
class C
{
	int a,b;
	public:
		void setdata(int a, int b)
		{
		this->a=a;
		this->b=b;
		}
		showdata()
		{
		cout<<"\na= "<<a<<"  b= "<<b<<"\n";
	}
	
	int geta()
	{
		return a;
	}
	
	int getb()
	{
		return b;
	}
	

};

class D
{
 int m,n;
 public:

	
	void showdata()
		{
		cout<<"\nm= "<<m<<" n= "<<n<<"\n";
	}
	
	D(){
	}
	
	D(C g)
	{
		m=g.geta();
		n=g.getb();
	}
	
};

int main()
{
	C c1;
	D d1;
	c1.setdata(5,6);
	c1.showdata();
	d1=c1; 
	d1.showdata();       //d2.C(d1)
	
	
}
