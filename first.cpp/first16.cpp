//conditional statements 1.2

#include <iostream>
using namespace std;
int main()
{
    int roll;
    cout<<"enter your roll number";
    cin>>roll;

    if(roll<1)
    {
        cout<<"invalid roll number";

    }
    else{
        cout<<"valid roll number";

    }
    return 0 ;
}