//  bitwise operator


// by using bitwise operator we will check is a number is odd or even 

#include<iostream>
using namespace std;

void OddOrEven( int num){
    if(!(num & 1)){
        cout<<"even\n";
    }
    else{
        cout<<"odd\n";
    }
}

int main()
{
    OddOrEven(5);
    OddOrEven(46);
    
}