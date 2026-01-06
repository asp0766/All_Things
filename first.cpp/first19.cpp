// nested if condition statements means = if statement ke andar another if else statement

#include <iostream>
using namespace std;
int main()
{ int a,b,c;   // here we already define integers a,b,c:
   cout<<"enter 3 nos";
   cin>>a>>b>>c;
  if(a>b && a>c)  // if here both conditions are true then a is maximum value here
  cout<<"a is max";
  else 
{
    if(b>c)
    cout<<"b is max";

    else{
        cout<<"c is max";

    }
}

return 0;
}

