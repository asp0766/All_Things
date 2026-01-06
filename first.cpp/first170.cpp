// INHERITANCE
// access Secifiers


#include<iostream>
using namespace std;

class base
{
    private: int a;
    protected: int b;
    public :  int c;

    void funbase()
    {
        a=10;
        b=5;
        c=15;
    }

    void setA(int value)
    {
        a=value;
    }

    int getA(){
        return a;
    }
};


class derived : public base 
{
    public:
    void funderived()
    {
    // a=10;
    b=5;
    c=15;
}
};


int main()
{
    base b;
    // b.a=10;
    // b.b=5;
    b.c=20;
    b.setA(10);
    cout<<"value of a : "<<b.getA()<<endl;

    return 0;
    
}