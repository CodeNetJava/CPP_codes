#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

int main()
{
	vector<int>v1;
	vector<int>v2{10,20,30,40,50};
	vector<char>v3(5);
	vector<string>v4(5,"sau");
	
	// subscript operator
	cout<<v2[0]<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<" "<<v2[i];
	}
	
	cout<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<" "<<v4[i];
	}
	cout<<"\ncapacity of v2 "<<v2.capacity();
	cout<<"\ncapacity of v1  "<<v1.capacity();
	cout<<"\ncapacity of v3 "<<v3.capacity();
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	cout<<"\ncapacity of v1 "<<v1.capacity();
	cout<<"\nsize of v1"<<v1.size();
	v1.pop_back();
	v1.pop_back();
	cout<<"\ncapacity of v1 "<<v1.capacity();
	cout<<"\nsize of v1 "<<v1.size();
	cout<<"\nin v2 element at 3rd place "<<v2.at(3); //count from 0,1,2,3
	cout<<"\nin v2 1st element is "<<v2.front();
	cout<<"\nin v2 last element is "<<v2.back()<<endl;
	
	vector<int>::iterator it=v2.begin();
	v2.insert(it+3,35);
	
	for(int i=0;i<5;i++)
	{
		cout<<" "<<v2[i];
	}
getch();	
}


