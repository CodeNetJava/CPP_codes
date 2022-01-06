#include<iostream>
#include<conio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

 /*
struct student
{
	int rollno;
	char name[10];
	float pointer;
};

int main()
{
	//clrscr();
	student s1={39,"savita",5.8};
	cout<<s1.rollno<<endl<<s1.name<<endl<<s1.pointer<<endl;
	return 0;
	getch();
}

 */

 /*
struct student
{
	int rollno;
	char name[10];
	float pointer;
}s1;

int main()
{
	//clrscr();
	s1.rollno=39;
	//s1.name="savita";
	strcpy(s1.name,"savita");
	s1.pointer=6.4;
	cout<<s1.rollno<<endl<<s1.name<<endl<<s1.pointer<<endl;
	return 0;
	getch();
}

*/


 /*
struct student
{
	int rollno;
	char name[10];
	float pointer;
}s1;

int main()
{
	//clrscr();
	s1.rollno=39;
	//s1.name="savita";
	strcpy(s1.name,"savita");
	s1.pointer=6.4;
	cout<<s1.rollno<<endl<<s1.name<<endl<<s1.pointer<<endl;
	return 0;
	getch();
}

*/

 /*
struct student
{
	int rollno;
	char name[10];
	float pointer;
	
	void input();
	void display()
	{
	cout<<rollno<<endl<<name<<endl<<pointer<<endl;	
	}
	
}s1;

	void student:: input()
	{
	cin>>rollno>>name>>pointer;	
	}-
	
int main()
{
	s1.input();
	s1.display();
	
	return 0;
	getch();
}

*/


struct student
{
	int rollno;
	string name;
	float pointer;
	

};

int main()
{
	//clrscr();
	student s1;
	s1.name="savita";
	cout<<s1.name<<endl;
	return 0;
	getch();
}



