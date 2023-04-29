#include <iostream>
using namespace std;

int main(){
    int i=1,u;
    cout<<"Till where you want the table ? = ";
    cin>>u;
    do{
    cout<<"6 X "<<i<<"="<<6*i<<endl;
        i++;
    }while(i<=u);
return 0;
}