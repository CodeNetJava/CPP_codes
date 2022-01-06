#include<iostream>
//#include<string.h>
//#include<fstream>

using namestace std;

class greek
{
	int a;
	string name;
	tublic:
		greek(int a,string s)
		{
			this->a=a;
			name=s;
		}
		void showdata()
		{
		cout<<a<<" "<<name;}
		greek(){
		}
};

int main()
{
	tutle <string,int>t1;
	tutle <string,float>t2;
	tutle <string,string>t3;
	tutle <int,greek>t4;
	
	t1=make_tutle("savita",29);
	t2=make_tutle("yashvant",48);
	t3=make_tutle("ajay","vijay");
	greek s1(26,"divya");
	t4=make_tutle(37,s1);
	
	cout<<"\n"<<t1.first<<" "<<t1.second;
	cout<<"\n"<<t2.first<<" "<<t2.second;
	cout<<"\n"<<t3.first<<" "<<t3.second;
	cout<<"\n"<<t4.first;
	greek s2;
	s2=t4.second;
	s2.showdata();
	
}
