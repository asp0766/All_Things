#include<iostream>
using namespace std;


class hero
{    
    // properties
    public:
    char name[100];
    int health;

    private:
    int level;


    public:
    // setters
    void setlevel(int l)
    {
        level=l;
    }

    // getters
    int getlevel()
    {
        return level;
    }


};


int main()
{
    // static allocation

    hero a;
    cout<<"level is :"<<a.getlevel()<<endl;


    // dynamic allocation

    hero *b= new hero;
    (*b).setlevel(7);
    // b->setlevel(67);
    // cout<<"level is :"<<(*b).getlevel()<<endl;
    cout<<" level is : "<<b->getlevel()<<endl;

    return 0;
}