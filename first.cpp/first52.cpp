// array
// for each loop



#include <iostream>
using namespace std;
int main()
{
   int A[]={8,6,3,7,7,4};  // in we write here float then we will get integers also

   for(int x : A)    // we can use int and auto also
   {
    cout<<++x;      // if we write here instead of x , ++x then we will get 9741085 
   }

   return 0;
}