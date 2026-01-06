// formula 

#include <iostream>
#include<math.h>                  // we can use cmath here instead of math.h
using namespace std;
int main()
{
    int a,b,c;
    float root1,root2;          //roots were taking in floating values because their values can come in decimal numbers
    cout<<"enter 3 values";
    cin>>a>>b>>c;
    root1=(-b+sqrt(b*b-4*a*c))/2*a;    //this is the formula of finding the quadratic equations
    root2=(-b-sqrt(b*b-4*a*c))/2*a;
    cout<<root1<<" "<<root2<<endl;
    return 0;
    
}