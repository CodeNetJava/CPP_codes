#include<iostream>
#include<conio.h>
using namespace std;

template <class x, class y> 
x big(x a, y b)
{
	if(a>b)
	return a;
	
	else 
	return b;
	 
}

int main()
{
	cout<<big(4,5.5)<<"\n";
	cout<<big(5.6,4);
	getch();
}
