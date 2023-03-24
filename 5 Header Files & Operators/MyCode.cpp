#include <iostream>
// There are two types of Header Files
// 1. System Header files ---> it comes with the compiler 
// 2. User Defind Header Files ---> written by the Programmer 
#include "this.h"
// If include the above (this.h) file then the file should be present in current directory otherwise it will give an Error 

using namespace std;

int main (){

int a=4 , b=5 ;


cout<<endl<<endl;
cout<<"Operators in C++ "<<endl;
cout<<"\nFollowing Are the Operators in C++ "<<endl;
cout<<"\n Value Of a = "<<a;
cout<<"\n Value Of b = "<<b;
// 1) Arithmetic Operators
cout<<"\nThe Value of a+b = "<<a+b<<endl;
cout<<"The Value of a-b = "<<a-b<<endl;
cout<<"The Value of a*b = "<<a*b<<endl;
cout<<"The Value of a/b = "<<a/b<<endl;
cout<<"The Value of a%b = "<<a%b<<endl;
cout<<"The Value of a++ = "<<a++<<endl;
cout<<"The Value of a-- = "<<a--<<endl;
cout<<"The Value of ++a = "<<++a<<endl;
cout<<"The Value of --a = "<<--a<<endl;
cout<<endl<<endl;
// -----------------------------------------------------------------------------------------------------------

// 2) Assignment Operators ---> Used to assign values to the variables

// int a=3, b=9;
// char d='d';
// cout<<"values Assg Operators = "<<a<<b;


// -------------------------------------------------------------------------------------------------------------------

// 3) Comparison Operators 
cout<<"Following Are the types of Comparison Operators"<<endl;
cout<<"\nThe Value of a==b = "<<(a==b)<<endl;
cout<<"The Value of a!=b = "<<(a!=b)<<endl;
// !=  <----- This Means Not Equal To 
cout<<"The Value of a>=b = "<<(a>=b)<<endl;
cout<<"The Value of a<=b = "<<(a<=b)<<endl;
cout<<"The Value of a>b = "<<(a>b)<<endl;
cout<<"The Value of a<b = "<<(a<b)<<endl;
cout<<endl<<endl;
//If the Above Operators Give TRUE value the it will show(1)
// If FALSE then it will show (0) 

// -------------------------------------------------------------------------------------------------

// 4) Logical Operators 
// Here we Two or more operators at same time 
cout<<"Following Are the types of Logical Operators"<<endl;

cout<<"\nThe Value of Logical and Operator ((a==b)&&(a<b)) = "<<((a==b) && (a<b))<<endl;
// the value of all operators should be true to get whole statement true here in >>>>>>>  AND Logic 

cout<<"The Value of Logical or Operator ((a==b)||(a<b)) = "<<((a==b) || (a<b))<<endl;
// the value of any one operator should be true to get whole statement true in >>>>>> OR logic 

cout<<"The Value of Logical not Operator (!(a==b)) = "<<(!(a==b))<<endl;
//  This will invert the value if the statement is true it will make it false and vice versa in >>>>>>>>>> NOT Logic
cout<<endl<<endl;


return 0;}