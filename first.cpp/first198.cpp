 // parameterized constructor



#include<iostream>
using namespace std;

class hero
{
    private:
    int health;

    public:
    int level;

    hero()
    {
        cout<<"default constructor called"<<endl;
        health=0;
    }

    // parameterized constructor
    hero(int health)
    {
        cout<<"this->"<<this<<endl;
        this->health=health;

    }

    hero(int health, int level)
    {

        cout<<" this->"<<this<<endl;
        this->health=health;
        cout<<"this->"<<this<<endl;
        this->level=level;
    }

    void sethealth(int health)
    {
        this->health=health;

    }

    int gethealth()
    {
        return health;
    }

    void print()
    {
        cout<<"level is : "<<this->level<<endl;
        cout<<"health is : "<<this->health<<endl;
    }

};

int main()
{
    hero h(34,1222);
    h.sethealth(45);
    h.print();

    // Copy constructor
    hero r(h);
   
    return 0;

}