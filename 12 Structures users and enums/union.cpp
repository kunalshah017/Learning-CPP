#include <iostream>
using namespace std;

// union is also like structure but in union only one data member is used at a time and therefore
// only one data member is created at a time so that space can be saved 
// when we use more than one data member then the first data member is overwritten by the new one
union money{
    int dollar;
    int rupee;
    char currency;


};



int main()
{ union money india;
india.dollar=80;
cout<<"\nUSD in india = "<<india.dollar;
india.rupee=1;
cout<<"\nUSD in india = "<<india.dollar;//this will give garbage value as it is overwritten by rupee
cout<<"\nIndia Rupee = "<<india.rupee;
india.currency='R';
cout<<"\nUSD in india = "<<india.dollar;//this will give garbage value as it is overwritten by rupee
cout<<"\nIndia Rupee = "<<india.rupee;//garbage value 
cout<<"\nCurrency = "<<india.currency;
return 0;
}