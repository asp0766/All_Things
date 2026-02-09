// pointers
// print size of a array in bytes and take input from user
//program for dynamic allocation


#include <iostream>
using namespace std;
int main()
{
   int size;
   cout<<"enter number of elements ";
   cin>>size;
   int a[size];

   // cout<<sizeof(a);
   cout<<sizeof a<<endl;   // print size of array in output

   return 0;
}