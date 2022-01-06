#include<iostream>
using namespace std;

/*   print savita
class greek
{
	public:
		string name;
		
	void print()
	{
		cout<<name;
	}
};

int main()
{
	greek g1;
	g1.name="savita";
	g1.print();
}

*/

// /* member fun outside the class  //print savita
class greek
{
	public:
		string name;
		
	void print();
};

	void greek::print()
	{
		cout<<name;
	}
int main()
{
	greek g1;
	g1.name="savita";
	g1.print();
}

//*/


