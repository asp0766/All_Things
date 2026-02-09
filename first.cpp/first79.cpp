// POINTER
// arthimetic operation  q-p ,p-q



#include <iostream>
using namespace std;
int main()
{
    
    int a[]={2,4,6,8,10};
    int *p=a,*q=&a[4];    

    cout<<p-q;       // it's show to where is element in begging and compare boths location


    return 0;
}