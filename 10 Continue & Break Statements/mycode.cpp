#include <iostream>
using namespace std; 

int main(){
    int i; 
    for (int i = 6; i <= 11; i++)
    {
        
        if (i==5)
        {
           continue;
        }
        else{
            cout<<"ERROR";
            break;
        }
         
        
    }
    
    return 0;
}