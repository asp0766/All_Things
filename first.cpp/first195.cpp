// OOPs by love babbar one shot of 2 videos 


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
    hero ramesh;

    ramesh.health=90;
    ramesh.setlevel(68);
    

    cout<<"health is : "<<ramesh.health<<endl;
    cout<<"level is : "<<ramesh.getlevel()<<endl;


    return 0;

}