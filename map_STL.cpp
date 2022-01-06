#include<iostream>
#include<map>
using namespace std;

int main()
{
 map<int,string> customer{{100,"sau"},{200,"diu"},{300,"chaku"},{400,"bhaiya"},{500,"ajya"}};  //two ways to initialize the map
 
 map<int,string> bacche;
 bacche[100]="sau";
 bacche[200]="diu";
 bacche[300]="chaku";
 bacche[400]="bhaiya";
 bacche[500]="ajya";
 bacche[600]="swara";
 
 
 map<int,string> ::iterator p=customer.begin();
 
 while(p!=customer.end())
 {
 	cout<<p->second<<endl;
 	p++;
 }       
 
 cout<<"\n"<<bacche[600];
 cout<<"\n"<<bacche[100];
 
 cout<<"\n"<<bacche.at(500);
 
 cout<<"\n"<<bacche.size();
  cout<<"\n"<<bacche.empty();
  cout<<"\n"<<bacche.size();
  
  cout<<endl;
  customer.insert(pair<int,string>(205,"shinde"));
  
  map<int,string> ::iterator q=customer.begin();
  while(q!=customer.end())
 {
 	cout<<q->second<<endl;
 	q++;
 }
 
}
