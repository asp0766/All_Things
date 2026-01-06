// sum of n natural numbers;
// by using FOR LOOP



#include <iostream>
using namespace std;
int main()
{
   int n,i,sum=0;
   cout<<"enter n ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
    sum+=i;
   }
   cout<<"sum of n natural is "<<sum;

   return 0;
}