#include<iostream>
using namespace std; 

int main(){
int a; 

cout<<"Tell me your age = ";
cin>>a;

cout<<"Your Age is = "<<a<<endl;

if(a<18 && a>2)
{
    cout<<"Your Are a Teenager";

}
else if(a==18)
{
    cout<<"You are becoming an Adult";

}
else if (a>18)
{
    cout<<"Your are an Adult Mature Person"<<endl;

}
else
{
    cout<<"Fake";
}
    return 0; 
}