//  18  EXCEPTION HANDLING 

// exception are runtime errors
// try an catch blocks are used for handling exceptions 
// if exception are not handled then program may crash 
// exceptions must give a messsage to the user , giving correct reason on cause of exception 
// a try block can have multiple catch blocks 
// catch all can catch all exception 
// catch all must be a last block 
// if classes in inheritance are used in catch block then child class should come first



// exception handling construct 
#include<iostream>
using namespace std;
int main()
{
    int x=10,y=2,z;
    try 
    {
        if(y==0)
          throw 1;

        z=x/y;
        cout<<z<<endl;
    }

    catch(int e)
    {
        cout<<"division by zero "<<e<<endl;
    }

    cout<<"bye"<<endl;
}


