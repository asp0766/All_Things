// FRIEND AND STATIC MEMBERS INNER CLASSES


// STATIC MEMBERS 

// static data members are members of a class 
// omly one instance of static members is created and shared by all objects
// they can be accessed directly using class name 
// static members functions are functions of a class , they can be called using class name , without creating object of a class
// they can access only static data members of a class , they cannot access non-static members of a class 


#include <iostream>
using namespace std;

class test 
{
    private:
    int a;
    int b;

    public:
    static int count ;

    test()
    {
        a=10;
        b=10;
        count++;
    }
};

int test::count=0;   //:: = scope resolution , global variable  

int main()
{
    test t1;
    test t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    cout<<test::count;

    return 0;
}