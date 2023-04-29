#include <iostream>
using namespace std;
// the variable written outside of the main function is considered as global variable

int glo=2;
void sum(){
  
int a;
cout<<glo; 

// after writing this above command it will provide us value - 254 
// this will happen due to sum function which we called out in main function....
// the compiler will leave the main function in between and will start executing sum function 
// as there no value of (glo) is present in sum function it will print the (global) value of glo which is 2
// after printing that it will again start compiling the main function and will proivde us the updated value of glo which is - 54 
// therefore the final comeout will we - 254 

}



int main(){

int glo=5;

// in this the above 👆👆 int in main function is a local function and now if we print the value of glo 
// it will give us the value 5 
// because local variable always dominates over global variable 

glo=54;

// after writing this 👆 it will update the value of local variable (glo) and will provide us the new value 


// int a=4;
// int b=2;
// Or we can write the above code as .....

// ----------------------------------------------------------------------------------------------------

int a=5 , b=6;

float pi=3.14 ; 
int c=22 ,d=7 ;
char e='I';
char f='N';
char g='D';
char h='I';
char i='A';

// --------------------------------------------------------------------------------------------------

bool torf=true; 
bool fal=false; 

// the bool function will give the value of <1> if it is true or it will give the value of <0> if it is false 

 cout<<"the value of bool is true here = ";
 sum();
 cout<<glo<< torf;

 cout<<"\n\nthe value of bool is false here = ";
 sum();
 cout<<glo<< fal;

 

// after giving command to print bool var (torf) it will provie us the value 2541 <---- this 1 is added 
// bcoz the bool var is true / if the bool var is false it will provide us the value as 2540 <---- 0 




// ------------------Commented Below code to use sum function-------------------------------------- 
    // cout<<"My Name is Kunal.\n\nThis Code Holds Value of a as = "<<a<< ". and value of b as = "<<b;
    
    // // here \n is a escape character used to start on new line same as enter works 
    
    // cout<<"\n\nThe Value of Pi is = " <<pi<< " .And another value of pi is = " <<c<<"/"<<d ;
    // cout<<"\n\nI am citizen of country - " <<e;
    // cout<<f;
    // cout<<g;
    // cout<<h;
    // cout<<i;

    // Spent half hour on 👆👆 writing this code for INDIA.... 🤦‍♂️
    // east code for the same 👇👇

    // cout<<"\n\n(Easy code) I am citizen of country - INDIA";
    // return 0;
// -------------------------------------------------------------------------------------------------

}