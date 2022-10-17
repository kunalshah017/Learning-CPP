#include <iostream>
using namespace std;

int main (){
    int age;
    cout<<"Enter your age = ";
    cin>>age;

    switch (age)
    {
    case 18:
    cout<<"Your are an adult";
        break;
        case 22:
        cout<<"Your are 22 years old";
        break;
    
    default:
    cout<<"No special case";
        break;
    }
    return 0;
}