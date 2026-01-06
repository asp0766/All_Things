//array
//binary search


#include <iostream>
using namespace std;
int main()
{
    int a[10]={6,8,13,17,20,22,25,28,30,35};
    int l=0,h=9,key,mid;    // l=low, h=high ,mid=middle of array

    cout<<"enter key : ";
    cin>>key;

    while(l<=h)    // if low is greater than high then we can understand key is not available in array
    {
        mid=(l+h)/2;

        if(key==a[mid])
        {
            cout<<"found at "<<mid;
            return 0;                                 // we can write here exit(0) instead of return 0
        }
        else if (key<a[mid])
                h=mid-1;
        else 
                l=mid+1;
    }
    cout<<"not found";

    return 0;
}