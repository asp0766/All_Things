// Operator Overloading 


// operators can be overloaded on our classes. 
// we can define operator for our own classes 
// operators can be overloaded using members functions or friend functions 
// global functions can also access private and protected members of an object if they are declared as friend inside a class

#include<iostream>
using namespace std;

class complex 
{
    private:
    int real;
    int img;

    public:
    complex(int r=0 ,int i=0 )
    {
        real=r;
        img=i;
    }

    void display()
    {
        cout<<real<<"+i"<<img<<endl;
    }

    complex operator+(complex c1)
    {
        complex temp;
        temp.real=real+c1.real;
        temp.img=img+c1.img;
        return temp;
    }
};


int main()
{
    complex c1(5,3),c2(10,5),c3;
    c3=c1+c2;
    c3.display();
}