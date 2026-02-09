// Inheritance 


#include<iostream>
using namespace std;


class human
{
    public:
    int height;
    int weight;
    int age;


    public:
    int getage()
    {
        return this->age;
    }
    int setweight(int w)
    {
        return this->weight=w;
    }


};


class male:public human
{
    public:
    string color;

    void sleep()
    {
        cout<<"male is sleeping"<<endl;

    }
};


int main()
{
    male object1;
    cout<<object1.age<<endl;   // garbage value 
    cout<<object1.setweight(90)<<endl;
    

    cout<<object1.color<<endl;
    object1.sleep();     // function call


    return 0;
}


