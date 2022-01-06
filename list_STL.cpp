#include<iostream>
#include<list>
#include<conio.h>
using namespace std;

int main()
{
	list<int>l1;
	list<int>l2{11,22,33,44};
	list<string>l3{"sau","diu","didi","bhaiya"};
	list<int>l4{34,54,98,45,76,24};

	list<int> ::iterator p=l4.begin();
	
	while(p!=l4.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	cout<<endl;
	l4.sort();
	
	list<int> ::iterator q=l4.begin();
	
	while(q!=l4.end())
	{
		cout<<*q<<" ";
		q++;
	}
	
	cout<<"\nsize of list l2 = "<<l2.size()<<endl;
	
l2.push_back(200);
l2.push_front(100);
l2.push_back(999);
l2.push_front(111);

list<int> ::iterator r=l2.begin();
	
	while(r!=l2.end())
	{
		cout<<*r<<" ";
		r++;
	}
	
		cout<<endl;
l2.pop_back();
l2.pop_front();

list<int> ::iterator s=l2.begin();
	
	while(s!=l2.end())
	{
		cout<<*s<<" ";
		s++;
	}
cout<<endl;	
l3.reverse();

list<string> ::iterator t=l3.begin();
	
	while(t!=l3.end())
	{
		cout<<*t<<" ";
		t++;
	}
cout<<endl;	
l2.remove(44);
list<int> ::iterator u=l2.begin();
	
	while(u!=l2.end())
	{
		cout<<*u<<" ";
		u++;
	}
cout<<endl;

l3.clear();
list<string> ::iterator v=l3.begin();
	
	while(v!=l3.end())
	{
		cout<<*v<<" ";
		v++;
	}


		
getch();	
}
