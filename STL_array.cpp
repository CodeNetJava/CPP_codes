#include<iostream>
#include<array>
using namespace std;
int main()
{
	array <int,5> data_array={11,22,33,44,55};
	array <int,5> data_array2={1,2,3,4,5};
	
/*	cout<<data_array.at(3);
	
 	cout<<"\n"<<data_array[3];
	
	cout<<"\n"<<data_array.front();
	
	cout<<"\n"<<data_array.back(); 
	
	cout<<"\n"<<data_array.size(); 
	
	
	
	data_array.fill(1);
	
	for(int i=0;i<5;i++)
	{
	cout<<" "<<data_array[i];
	}  
	
	*/
	
	
	data_array.swap(data_array2);
	
	for(int i=0;i<5;i++)
	{
	cout<<" "<<data_array[i];
	}
	
	cout<<endl;
	
	for(int i=0;i<5;i++)
	{
	cout<<" "<<data_array2[i];
	}
	
}


