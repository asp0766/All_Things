// POLYMORPHISM


// Virtual Function

#include<iostream>
using namespace std;

class basiccar
{
    public:
    virtual void start()
    {
        cout<<"basic car started";
    }
};



class advancecar: public basiccar
{
    public:
    void start()
    {
        cout<<"advance car started"<<endl;
    }
};


int main()
{
    basiccar *p=new advancecar();
    p->start();

    return 0;
}