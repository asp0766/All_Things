#include<iostream>
using namespace std;

class hero 
{
    private:
    int health;

    public:
    int level;

    // make a constructor  , default constructor 
    hero()
    {
        cout<<"Constructor called "<<endl;
    }
};

int main()
{   

    // object created suceesfully 
    cout<<"Hi"<<endl;

    // static allocation
    hero h;
    cout<<"Hello"<<endl;

    // dynamically allocation
    hero *b = new hero();
   


    return 0; 
}