#include<iostream>
using namespace std;
#include<iomanip>
using std::setw;

main()
{
	cout<<setw(8)<<"elements"<<setw(10)<<"value"<<endl;
	
	//int a[];
	
	for(int i=1; i<=10;i++){
	cout<<setw(8)<<i<<setw(10)<<(100+i)<<endl;
	}
	
}
