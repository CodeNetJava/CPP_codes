#include<string>
#include<iostream>
using namespace std;
main ()
{
int a,b;
cout<<"enter a ";
cin>>a;
cout<<"enter b ";
cin>>b;
char operation;
cout<<"enter operation ";
cin>> operation;

switch(operation)
{
	    case '+':
		cout<<"addtion is= "<<a+b;
		break;
		case '-':
		cout<<"substration is= "<<a-b;
		break;
		case '*':
		cout<<"multiplication is= "<<a*b;
		break;
		case '/':
		cout<<"division is= "<<a/b;
		break;
}

}
