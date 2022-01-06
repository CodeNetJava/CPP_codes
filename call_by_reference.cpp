#include<iostream>
using namespace std;
int sum(int&,int&);

int main()
{
	int a=5,b=6;
	cout<<"sum="<<sum(a,b);
}

int sum(int &x,int &y)
{
	return (x+y);
}
