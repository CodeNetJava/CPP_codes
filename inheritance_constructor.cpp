#include<iostream>
using namespace std;
class b;
class A
{
	int a;
	public:
		A(int x)
		{
			a=x;
		}
		showdata()
		{
			cout<<a<<"\n";
		}
};
class B : public A
{
	int b;
	public:
		B(int x, int y):A(x)
		{
			b=y;
		}
		showvalue()
		{
			showdata();
			cout<<b;
		}
};

int main()
{
	B obj(2,3);
	 obj.showvalue();
}
