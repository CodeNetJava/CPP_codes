#include<iostream>
using namespace std;

class complex
{
	int a,b;
	public:
		setdata(int x,int y){
			a=x;
			b=y;
		}
		showdata(){
			cout<<"\n"<<a<<"\n"<<b;
		}
		friend istream& operator >>(istream& , complex&);
		friend ostream& operator <<(ostream& , complex);
};

istream& operator>>(istream& din, complex &c){
	cin>>c.a>>c.b;
	return din;
}

ostream& operator<<(ostream& dout, complex c){
	cout<<"\n"<<c.a<<" "<<c.b;
	return dout;
}

int main()
{
	complex c1;
	cout<<"enter complex no";
	cin>>c1;  // operator >>(cin,c1)
	cout<<"you entered";
	cout<<c1; // operator <<(cout,c1)
	
}
