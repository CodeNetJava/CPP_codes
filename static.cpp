#include<iostream>
//#include<conio.h>
//#include<string.h>
//#include<bits/stdc++.h>
using namespace std;

/* if the static variable is public without using object
class Book
{
	public:
		static float r;
		
};

float Book::r;

int main()
{
	Book::r=5.6;
	cout<<Book::r;
}

*/

//* if the static variable is private without using object
class Demo
{
	private:
		static int x;
		static int y;
		
	public:
		static void print()
		{
			cout<<x;
			cout<<y;
		}
};

int Demo:: x=10;
int Demo:: y=20;


int main()
{
	Demo::print();
	return 0;
}

//*/
