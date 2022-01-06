#include<iostream>
#include<fstream>
using namespace std;

//*  // seekg
int main()
{
	ifstream m;
	m.open("diufile.dat");
	cout<<m.tellg()<<endl;
	char c;
	
	cout<<m.tellg()<<endl;
	c=m.get();
	cout<<c<<endl;

	m.seekg(6);
	//c=m.get();
	//cout<<c<<endl;
	 //same meaning as further two lines //c=m.get(); //cout<<c<<endl;
	cout<<m.tellg()<<endl; 
	cout<<(char)m.get()<<endl;
	
	m.seekg(2,ios_base::cur); // from current leave two char start from next one
	
	cout<<m.tellg()<<endl;
	cout<<(char)m.get()<<endl;

	m.seekg(2,ios_base::beg); //from beginning leave two char and start from 3rd 
	
	cout<<m.tellg()<<endl;
	cout<<(char)m.get()<<endl;
	

	
	m.seekg(-2,ios_base::end);  // from end leave two and start from previous
	
	cout<<m.tellg()<<endl;
	cout<<(char)m.get()<<endl;
	
	m.close();
}

//*/

/*  // seekg

int main()
{
	ofstream n;
	n.open("diufile.dat",ios::app);
	cout<<n.tellp()<<"\n";
	n<<"good morning";
	cout<<n.tellp()<<"\n";
	n.seekp(7);
	cout<<n.tellp()<<"\n";
}

*/
