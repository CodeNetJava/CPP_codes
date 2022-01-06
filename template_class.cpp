#include<iostream>
#include<conio.h>
using namespace std;

class arraylist
{
	public:
struct controlblock      // structure
{
	int capacity;
	int *arr_ptr;
};

controlblock *s;       //pointer s of data type controblock is declaired   //structure is a user defined data type
 arraylist(int capacity)
 {
 	s=new controlblock;    //by using new keyword make a variable controlblock of struct datatype
 	s->capacity=capacity;
 	s->arr_ptr=new int[s->capacity];
 }
 
 //template <class x>
 void addelement(int index, int data)
 {
 	if(index>=0 && index<=(s->capacity-1))
 	s->arr_ptr[index]=data;
 	
  	else
  	cout<<"array index is in valid\n";
 }
 
 void viewelement(int index, int &data)
 {
    if(index>=0 && index<(s->capacity))
 	data=s->arr_ptr[index];	
 	
 	else
  	cout<<"array index is in valid\n";
 }
 
 void viewarray()
 {
 	int i;
 	for(i=0;i<s->capacity;i++)
 	{
 		cout<<"  "<<s->arr_ptr[i];
	}
 }
 
};

int main()
{
	int data;
arraylist o1(4);
o1.addelement(0,78);
o1.addelement(1,88);
o1.addelement(2,2);
o1.addelement(3,6);
o1.viewelement(3,data);
cout<<"value in array at that index=  "<<data<<endl;
o1.viewarray();
}
