#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("saufile.dat");
	fout<<"hello";
}
