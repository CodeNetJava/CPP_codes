#include<iostream>
using namespace std;

/*
namespace savita
{
	int a,b,c;
//	public:
		void f1()
		{
			cout<<"\n"<<a<<" "<<b<<" "<<c;
		}
		void f2();
	class A
	{
		//int x,y;
		public:
			void d1();
			void d2()
			{
				cout<<"\nfunction d2";
			}
			
	};
}
void savita::f2()
{
	cout<<"\nfunction f2";
}
void savita::A::d1()
{
	cout<<"\nfunction d1";
}

int main()
{
   savita::a=5;
   savita::b=6;
   savita::c=7;
   savita::A obj;
   obj.d2();
  
   savita::f1();
   savita::f2();
}

*/

namespace savita
{
	int a,b,c;
//	public:
		void f1()
		{
			cout<<"\n"<<a<<" "<<b<<" "<<c;
		}
		void f2();
	class A
	{
		//int x,y;
		public:
			void d1();
			void d2()
			{
				cout<<"\nfunction d2";
			}
			
	};
}

using namespace savita;
void savita::f2()
{
	cout<<"\nfunction f2";
}
void savita::A::d1()
{
	cout<<"\nfunction d1";
}

int main()
{
   a=5;
   b=6;
   c=7;
   A obj;
   obj.d2();
  
   f1();
   f2();
}






