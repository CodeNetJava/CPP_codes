#include<iostream>
#include<tuple>
//#include<fstream>

using namespace std;

class greek
{
	int a;
	string name;
	public:
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
	tuple <string,int,char>p1;
	tuple <string,float,int>p2;
	tuple <string,string,float>p3;
	tuple <int,greek,int >p4;
	
	p1=make_tuple("savita",29,'A');
	p2=make_tuple("yashvant",48,25);
	p3=make_tuple("ajay","vijay",5.6);
	greek s1(26,"divya");
	p4=make_tuple(37,s1,36);
	
	cout<<"\n"<<get<0>(p1)<<" "<<get<1>(p1)<<" "<<get<2>(p1);
	cout<<"\n"<<get<0>(p2)<<" "<<get<1>(p2)<<" "<<get<2>(p2);
	cout<<"\n"<<get<0>(p3)<<" "<<get<1>(p3)<<" "<<get<2>(p3);
	cout<<"\n"<<get<0>(p4)<<" ";
	greek s2;
	s2=get<1>(p4);
	s2.showdata();
	cout<<" "<<get<2>(p4);
	
}
