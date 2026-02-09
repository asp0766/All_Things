// BASE CLASS POINTER  DERIVED CLASS OBJECT


// Base class pointer can point on derived class object
// if derived class is having overrides functions they will not be called unless base class functions are declared as virtual
// derived class pointer cannot point on base class object


#include<iostream>
using namespace std;

class rectangle 
{
    public:
    void area()
    {
        cout<<"area of rectangle "<<endl;
    }
};

class cuboid:public rectangle
{
    public:
    void volume()
    {
        cout<<"cuboid volume"<<endl;
    }
};

int main()
{
    rectangle r;
    cuboid c;
    c.area();
    c.volume();

    rectangle *p= &c;
    p->area();


    

    return 0;

}
