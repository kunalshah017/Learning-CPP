#include <iostream>
using namespace std;
int sum(int a , int b);//function declaration
int main()
{int n1,n2,ans;

    cout<<"Enter Two Numbers = ";
    cin>>n1>>n2;
ans=sum(n1,n2);//function call
cout<<"Sum of Two numbers is = "<<ans;

return 0;
}
//function defination
int sum(int a, int b){ 
    int c;
    c=a+b;
    return c;


}