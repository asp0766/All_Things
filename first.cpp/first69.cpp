//2D array
// in 2D array take input from user and print it in output by using FOR EACH LOOP :---


#include <iostream>
using namespace std;
int main()
{
    int a[2][3];
    for(auto& x:a)
    {
        for(auto& y:x)
        {
            cin>>y;
        }
        cout<<endl;
    }

    for(auto& x:a)
    {
        for(auto& y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;


}