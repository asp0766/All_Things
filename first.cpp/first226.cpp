//  Lambda Expression  With Template :-


#include <iostream>
using namespace std; 

template <typename t >
void fun (t p)
{
    p();
}

int main()
{
    int a =10 ; 
    auto f = [&a](){cout<<a++<<endl;};

    fun(f);
    fun(f);
}