//  Lambda Expression :- 


#include<iostream>
using namespace std;

int main()
{
    int a = [] (int x ,int y )->int{return x+y;}(12,13);
    cout<<a;
}