#include<iostream>
#include<fstream>
using namespace std;
 
 
/* // ofstream to write into the file

int main()
{
	ofstream fout;           //create object of ofstream class
	fout.open("diufile.dat"); //create file of name diufile
	fout<<"hello";            // write into file
	fout.close();
}

*/

// ifstream to read from the file
int main()
{
	ifstream fin;
	fin.open("diufile.dat");
	char ch;
	fin>>ch;        //read a char from the file
	cout<<ch;       // print the readed character
	
	fin>>ch;
	cout<<ch;
	
	while(!fin.eof())
	{
		ch=fin.get(); // also can write as fin>>ch //get() can also read space
		cout<<ch; 
	}
	fin.close();
}
