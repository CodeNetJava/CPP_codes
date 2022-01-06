#include<iostream>
using namespace std;

class B
{
	int a,b;
	public:
		setdata(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		showdata()
		{
			cout<<a<<"  "<<b<<"\n";
		}
		operator int()
		{
			return a;
			return b;
		}
	
};

int main()
{
	B c1;
	int x,y;
	c1.setdata(3,4);
	c1.showdata();
	x=c1;
	//y=c1;
	c1.showdata();
	
}
