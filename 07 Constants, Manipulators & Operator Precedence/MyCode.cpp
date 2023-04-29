#include<iostream>
#include<iomanip>
// #include<bits/stdc++.h>
// iomanip file is included for using "setw" manipulator
using namespace std;

int main (){
int a= 34;
cout<<"Value of a was = "<<a<<endl;
a=35;
cout<<"Updated Value is = "<<a;
// Here the Value of a updates 
// If we dont want to update the value we can use CONSTANTS in cpp 
//************************************CONSTANTS IN CPP************************************ 
const int b=3;
cout<<"\nValue of B = "<<b<<endl;
// after using const the value of variable cant be changed it will give errror if tried to change 
//************************************Manipulators in CPP************************************
int c=5,d=12,e=123,f=1234;

cout<<"Value of c is without setw "<<c<<endl;
cout<<"Value of d is without setw "<<d<<endl;
cout<<"Value of e is without setw "<<e<<endl;
cout<<"Value of f is without setw "<<f<<endl;

cout<<"Value of c is "<<setw(4)<<c<<endl;
cout<<"Value of d is "<<setw(4)<<d<<endl;
cout<<"Value of e is "<<setw(4)<<e<<endl;
cout<<"Value of f is "<<setw(4)<<f<<endl;

// Setw will add 4 blank characters before the output
// you can right justify using it 

// ************************************Operator Precedence************************************
// By using Precedence Table and Associativity 
int g =2, h=2;

int i = (g*h)+g; // Simple Expression (*) Have precedence therefore it is in bracket

int j = (g*h)+g+55-h;  
// OR 
int k = ((((g*h)+g)+55)-h);
// OR MORE COMPLICATED 
double l = ((((g*h)+h)*4)/2);


cout<<"Value of J is = "<<j<<endl;
cout<<"Value of k is = "<<k<<endl;
cout<<"Value of l is = "<<l<<endl;



    return 0;

}