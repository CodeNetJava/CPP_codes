#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		A(int a)
		{
			this->a=a;
		}
		A(){
		}
		void showdata()
		{
			cout<<a;
		}
};

int main()
{
A c1;
int x=5;
c1=x;    //c1.complex(x)
c1.showdata();	
}

