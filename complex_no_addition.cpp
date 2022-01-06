#include<iostream>
using namespace std;

class complex 
{
	int a,b;
	
	public:
		void set(int x,int y)
		{
			a=x;
			b=y;
		}
	
		void show()
		{
			cout<<a<<endl<<b<<endl;
		}
	
		complex add(complex c)
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
};

int main()
{
	complex c1,c2,c3;
	c1.set(4,5);
c2.set(3,6);
c3=c1.add(c2);
c3.show();
}
