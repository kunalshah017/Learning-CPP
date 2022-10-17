#include <iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter a = ";
cin>>a;
int* b=&a;
cout<<"Addreas of a "<<b<<endl;
cout<<"Addreas of a "<<&a<<endl;
cout<<"Value of addreas "<<*b<<endl;
cout<<"Value of addreas "<<*&a<<endl;

return 0;
}