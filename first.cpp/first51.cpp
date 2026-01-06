//array
// print character values


#include <iostream>
using namespace std;
int main()
{
    char A[]={'A',66,'C',68};  // capital letters matters

    for(int x:A)       // if we take auto it will come in  = A B C D ,, int = 65 66 67 68
    cout<<x<<endl;      


    return 0;
}