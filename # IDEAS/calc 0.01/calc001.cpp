#include <iostream>
using namespace std;

int main ()
{
  int a,b;
 

  cout<<"Enter the First No. : "<< endl;
  cin>>a;

  cout<<"\nEnter the Second No. : "<< endl;
  cin>>b;

 int add = a+b;
 int  sub = a-b;
 int multi = a*b;
 int divi = a/b;
int remain = a%b;5
  
  cout<< "\nAddition result = " <<add<< endl;
  cout<< "subtraction result = " <<sub<< endl;
  cout<< "Multiplication result = " <<multi<< endl;
  cout<< "divison result = " <<divi<< endl;
  cout<< "Remainder is  = " <<remain<< endl;

return 0;
}