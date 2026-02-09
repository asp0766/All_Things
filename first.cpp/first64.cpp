//array
// print patterns by star
//square pattern

#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            cout<<"*"; 
        }
         cout<<endl;
    }
    return 0;
}


// Hollow Rectangle Pattern : -

#include<iostream>
using namespace std;
int main()
{
    int n = 4 ; 
    for ( int i  = 1 ; i<= n ; i++)
    {
       cout<<"*";  //  First

       for(int j = 1 ; j <= n-1 ; j++)
       {
        if( i == 1 || i == n)
        {
            cout<<"*";
        }

        else 
        {
            cout<<" ";
        }
       }
       cout<<"*"<<endl;  // Last
    }

    return 0 ;
}