//  Static Keyword



#include<iostream>
#include<cstring>
using namespace std;

class hero 
{
    // properties
    private:
    int health;

    public:
    char *name;
    int level;
    static int timetocomplete;


    hero()
    {
        cout<<"simple constructor called"<<endl;
        name = new char[100];
        strcpy(name,"unknown");

    }

    // parameterized constructor
    hero(int health)
    {
        this->health=health;
    }

    hero(int health ,int level)
    {
        this->health=health;
        this->level=level;
    }

    // copy constructor
    hero(hero& temp)
    {
        char *ch= new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name=ch;


        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;

    }


    void print()
    {
        cout<<endl;
        cout<<"name is : "<<this->name<<endl;
        cout<<"health is : "<<this->health<<endl;
        cout<<"level is : "<<this->level<<endl;

    }


    int gethealth()
    {
        return health;
    }

    int getlevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health=h;
    }

    void setlevel(int l)
    {
        level=l;
    }

    void setname(char name[])
    {
        strcpy(this->name, name);
    }

    // destructor
    ~hero()
    {
        cout<<"destructor called"<<endl;
    }
};


int hero::timetocomplete=5;


int main()
{
    cout<<hero::timetocomplete<<endl;

    hero a;
    cout<<a.timetocomplete<<endl;

}