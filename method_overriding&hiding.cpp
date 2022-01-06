#include<iostream>
using namespace std;

class car
{
	public:
		void gear()
		{
			cout<<"class car f1 \n";
		}
		
		void f2()
		{
			cout<<"class car  f2 \n";
		}
		
		void f3()
		{
			cout<<"class car  f3 \n";
		}
};

class sportcar : public car
{
	public:
		void gear()              //method overriding //same method in both the classes 
		{                        // use method overriding in case if sport car have some advance functionalty for gear //use the same fun name 
			cout<<"class sportcar f1 \n"; 
		}
		
		void f2(int x)         //method hiding          //same method in both the classes but argument passed are diff
		{
			cout<<"class sportcar  f2 \n";
		}		
};

int main()
{
 car o1;
 sportcar o2;
 o1.gear();       //execute the fubction of sportcar class
 o2.gear();      //execute the fubction of sportcar class
 //o1.f2();      // show error as argument is not passed but does not go for class f2
 o2.f2(5);	    // execute the fubction of sportcar class
 o2.f3();       // execute the fubction of car class
}
