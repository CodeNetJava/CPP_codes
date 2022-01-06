#include<iostream>
using namespace std;

class A
{
	int a,b;
	int *p;
	public:
		A(int a,int b,int c)
		{
			this->a;
			this->b;
			p=new int;
			*p=c;
		}
		A()
		{
		}
		void showdata()
		{
				cout<<a<<" "<<b<<" "<<*p;
		}
};

int main()
{
	A o1,o2,o3(1,2,3);
	o3.showdata();

}
