# include <iostream>
using namespace std;

int c=25;
int main (){
// ******************************* Built In Data Types *****************************************
int a , b, c  ;
cout<<"Enter Value of A = ";
cin>>a;
cout<<"Enter Value of B = ";
cin>>b;

c=a+b;
cout<<"Sum of The Values = "<<c<<endl;

cout<<"Global Values of C = "<<::c<<endl;
//( :: )This is Scope Resolutio Operator it prints gloab value of a variable

// ******************************* Float, Double , Long double Literals *****************************************

float d=34.4f;
double e=34.4l;
double f=34.4;

// F and L after the numbers a called as literals it makes number consider as floting or double value 
// F - floating && L - Long Double && no literal - Double 


cout<<"Value of Float Variable D is = "<<d<<endl<<"Value of long double variable E is = "<<e<<endl<<"Value of Double Variable F is = "<<f; 

cout<<"\nSize of Float Variable = "<<sizeof(d)<<endl;
cout<<"Size of Double Variable = "<<sizeof(f)<<endl;
cout<<"Size of Long Double Variable = "<<sizeof(e)<<endl;

// ******************************* Refrence Variables *****************************************
// Used when you have to assign a value of variable to a variable 
 int x = 455;
cout<<x<<endl;

int & y = x; 
// now y is assigned with the value of x (& is used to do this)
cout<<y<<endl;

// ******************************* Type Casting *****************************************
// use to convert variable of one data type to another 

int k = 45 ;
double s = 45.46;

cout<<"Value of K = "<<(float)k<<endl;
            //   OR                  Both are Same 
cout<<"Value of K = "<<float(k)<<endl;

cout<<"Value of z = "<<(int)s  <<endl;
        //     OR                   Both are same 
cout<<"Value of z = "<<int(s)  <<endl;

int j = int (k);

cout<< "Expression K + S is = "<<k+s<<endl;
cout<< "Expression K + (int)S is = "<<j+(int)s<<endl;
cout<< "Expression K + int(S) is = "<<j+int(s)<<endl;






  return 0;

}