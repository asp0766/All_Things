// array
// finding max in array  also scroll down then you get how to find minimum value in array


#include <iostream>
using namespace std;
int main()
{
    int a[7]={4,8,6,9,5,2,7};
    int max=4;
    for (int i=0 ;i<7;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    cout<<"max is "<<max;

    return 0;

}


// finding minimum in array
#include <iostream>
using namespace std;
int main()
{
 int a[]={23,45,6,7,3433,67};
 int n=6,min=23;
 for(int i=0;i<6;i++)
 {
    if(min>a[i])
    {
        min=a[i];
    }
 }
 cout<<"min is "<<min;

    return 0;
}