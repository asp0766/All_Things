// FRIEND AND STATIC MEMBERS INNER CLASSES

// Friend Function And Classes 

// friend functions are global functions
// they can access member of a class upon their objects
// a class can be declared as friend on another class
// all the functions of friend class can access private and protected members of other class

#include<iostream>
using namespace std;

class your;     // declare it before of complie error

class my 
{
    private: int a; 
    protected: int b; 
    public: int c; 
    friend your ;
};

class your
{
    public:
    my m ;
    void fun()
    {
        m.a=10;
        m.b=10;
        m.c=10;
    }

    void display()
    {
        cout<<"a : "<<m.a<<" , b : "<<m.b<<" , c : "<<m.c<<endl;
    }
};

int main()
{
    your obj;
    obj.fun();
    obj.display();
    return 0;
}