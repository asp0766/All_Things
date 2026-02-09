// 2D array
// find average of array elements and take input from user :---


#include <iostream>
using namespace std;
int main()
{
    int i,n;
    float num[100],sum=0.0,average;

    cout<<"enter the number of elements";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<i+1<<"enter number: ";
        cin>>num[i];
        sum+=num[i];

    }

    average=sum/n;
    cout<<"average is "<<average;

    return 0;


}