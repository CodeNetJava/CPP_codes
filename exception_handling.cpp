#include<iostream>
using namespace std;

/*
int main()
{
	
	cout<<"welcome";
	int p=6;
	
	try{
		if(p==3)
		throw 3;
		
		if(p==5)
		throw 5;
		
		if(p==6)
		throw 6;
		
		if(p==7)
		throw 7;
		
		cout<<"in try";
	}
	
	catch(int a){
		cout<<"\nexception no: "<<a;
	}
	
	catch(float a){
		cout<<"\nexception no: "<<a;
	}
	
	cout<<"\nlast line";
}
*/


int main()
{
	
	cout<<"welcome";
	int p=6;
	
	try{
	if(p==3)
		throw 3;
		
		if(p==5)
		throw 5.6;
		
		if(p==6)
		throw "hello";
		
		
		}
	catch(...)
	{
	cout<<"\nexception no: ";
}
}
