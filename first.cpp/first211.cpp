// Preprocessor Directives / Macros 



#include <iostream>
using namespace std;

#define pi 3.14
#ifndef pi                // ifndef = if not define
    #define pi 3  
#endif

#define max(x,y) (x>y?:y)
#define msg(x)  #x

int main()
{
    cout<<pi<<endl;
    cout<<max(10,20)<<endl;
    cout<<msg(Hello World)<<endl;
}


// they are instructions to complier 
// they are processed before compilation 
// they are used for defining symbolic constant 
// they are used for defining functions 
// they also support conditional definations