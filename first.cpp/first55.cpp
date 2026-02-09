// array
// linear search


#include <iostream>
using namespace std;
int main()
{
    int a[10],n=10,i;   // here we only define size of an array and not give a list of array
    int key;
    cout<<"enter numbers";  // here we take input from user of numbers that they want to einclude and add in array
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter key";   // key = which number do u want to found ?
    cin>>key;


    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"found at"<<i;
             return 0;         // we can't write here else statement if we write here then we got not found many times 
        }                      // return 0 write here is complusory if we don't then found and not found both are print
    }

    cout<<"not found";       // here we can write not found statement
    return 0;
}