// FUNCTION  
// DEFAULT ARGUMENTS 
// check  max between three numbers by using ?= return , : = otherwise return


#include <iostream>
using namespace std;

int max(int a ,int b ,int c)
{
    return a>b && a>c ? a:(b>c ? b : c );  // by using ? , : we can reduce lines of code in it means else part 
}
int main()
{
    cout<<max(12,34,11);

    return 0;
}