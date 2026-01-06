// INHERITANCE


// WAYS OF INHERITANCE

// a class can be inherited in following ways :
// publicly - all members of base will have some accessibility in derived class
// protectedly - all members of base will become protected in derived class 
// privately - all memebers of base will become private in derived class


#include<iostream>
using namespace std;

class parent
{
    private : int a;  
    protected : int b;
    public : int c;

    void funparent()
    {
        a=10;
        b=5;
        c=15;
    }
};


class child: private parent 
{
    private:

    protected:

    public:

    void funchild()
    {
        //a=10;
        b=5;
        c=15;
    }
};


class grandchild : public child
{
    public:
    void fungrandchild()
    {
        // a=10;
        // b=5;
        // c=20;
    }
};

int main()
{
//     child c;
//     c.a=10;
//     c.b=5;
//     c.c=20;


}