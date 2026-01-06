// POINTER
// by for loop display all the elements of array in pointers



#include <iostream>
using namespace std;
int main()
{
    int a[]={2,4,6,8,10};
    int *p=a;

    for(int i =0; i<5;i++)
    {
        cout<<a[i]<<endl;   // we can write here instead of a[i]= i[a]  , *(a+i) , *(p+i), p[i]
    }                       // we write a+i   or (p+i) then we get address of array element

    return 0;
}