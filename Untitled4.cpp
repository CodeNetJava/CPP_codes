#include<iostream>
using namespace std;

main()
{
	int a[3][3];
	int rowcount=3,columncount=3;
	
	cout<<"enter array elements\n";
	for(int i=0;i<rowcount;i++)
	{
		
		for(int j=0;j<columncount;j++)
		{
			cin>>a[i][j];
		}
		
	}
	
	
	cout<<"print array elements\n";
	for(int i=0;i<rowcount;i++)
	{
		
		for(int j=0;j<columncount;j++)
		{
			cout<<a[i][j];
		}
		
	}
 
	
}
