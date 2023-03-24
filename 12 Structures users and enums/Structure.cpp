#include <iostream>
using namespace std;


// stucture is just like upgrade version of functions and downgrade version of array d
typedef struct student{
    int studentid;
    int studentclass;
    char studentName[50];

}st;

int main()
{
    // struct student Kunal;
    // can also be written as 
    st Kunal;
    
    Kunal.studentid=211010;
    Kunal.studentclass=12;
    

    cout<<"Enter Student Name = ";
    cin>>Kunal.studentName;
    cout<<"\nStudent Name = "<<Kunal.studentName;
    cout<<"\nStudent Id = "<<Kunal.studentid;
    cout<<"\nStudent Class = "<<Kunal.studentclass;


  

return 0;
}