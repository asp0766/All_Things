// Polymorphism 


// Compile Time Polymorphism 

// function overloading

#include<iostream>
using namespace std;


class a
{
    public:
    void sayhello()
    {
        cout<<"hello ASP a"<<endl;
    }

    void sayhello(string name )
    {
        cout<<"hello ASP"<<endl;
    }


};

int main()
{
    a obj;
    obj.sayhello();


    return 0;
}