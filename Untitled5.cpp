#include<iostream>
using namespace std;

class Demo
{
	public:
		int x,y;
		
    public:
    	Demo(int x1,int y1)
    	{
    		x=x1;
    		y=y1;
		}
    
};

int main()
{
	Demo obj(10,15);
	cout<<obj.x<<endl;
	cout<<obj.y;
	
	return 0;
	
}
