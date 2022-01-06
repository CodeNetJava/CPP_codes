#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int rollno;
	char name[20];
	class address
	{
		int houseno;
		char street[20];
		char city[15];
		char state[15];
		char pincode[9];
		
		public:
			void setaddress(int h,char *s,char *c,char *st,char *p)
			{
				houseno=h;
				strcpy(street,s);
				strcpy(city,c);
				strcpy(state,st);
				strcpy(pincode,p);
			}
			void showaddress()
			{
				cout<<" \n"<<houseno<<" \n"<<street<<" \n"<<city<<" \n"<<state<<" \n"<<pincode;
			}
			
	}add;
	
	public:
	void setaddress(int h,char *s,char *c,char *st,char *p)
	{
		add.setaddress(h,s,c,st,p);
	}
	
	void setrollno(int r)
	{
		rollno=r;
	}
	
	void setname(char *n)
	{
		strcpy(name,n);
	}
	
	void showstudent()
	{
		cout<<"student data ";
		cout<<"\nrollno= "<<rollno;
		cout<<"\nname= "<<name<<"\n";
		add.showaddress();
		
	}
};

int main()
{
	student s1;
	s1.setrollno(29);
	s1.setname("savita shinde");
	s1.setaddress(345,"old z p school","pattiwadgaon","maharashtra","431519");
	s1.showstudent();
	
}



