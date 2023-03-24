#include <iostream>
#include <string.h>
using namespace std;
int main()
{
char name[100];
cout<<"Enter Your Name : ";
cin>>name;
cout<<endl<<"Your Name is : "<<name;

string n;

n=name;
cout<<endl<<"Your Name is (string): "<<n;
cout<<endl<<"Reverse string : "<<strrev(name);
cout<<endl<<"string Length : "<<strlen(name);

// int aray[20];
// int i;
// cout<<"Enter 20 numbers = ";
// for(i=0;i<20;i++){
//     cin>>aray[i];
// }
// cout<<"Reversed Array is = ";
// for(i=19;i>=0;i--){
//     cout<<aray[i]<<endl;
// }



return 0;

}