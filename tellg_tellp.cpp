#include<iostream>
#include<fstream>
using namespace std;

/*// tellp

int main()
{
	ofstream myfile;
	myfile.open("diufile.dat",ios::app);
	cout<<myfile.tellp();
	myfile<<" student";
	cout<<myfile.tellp();
	myfile.close();
}

*/

 // tellg()
int main()
{
	ifstream myfile;
	myfile.open("diufile.dat");
	cout<<myfile.tellg();
	char c;
	c=myfile.get();
	cout<<myfile.tellg();
	c=myfile.get();
	cout<<myfile.tellg();
	myfile.close();
}

