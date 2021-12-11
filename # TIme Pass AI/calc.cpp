# include <iostream>
using namespace std; 

int main (){
int num1, num2;
char op;
 cout<<"\nEnter the first number : \n";
cin>>num1;

cout<<"\nEnter the second number : \n";
cin>>num2;

cout<<"\nWhat you want to do : \n";
cin>>op;

cout<<"\nThe sum of number is= "<<num1<<op<<num2;
cout<<"\n\n       ";
return 0;
} 

// not working currently can only do calulations with one operator at a time 
// Goal - Make it a full flaged calculator
