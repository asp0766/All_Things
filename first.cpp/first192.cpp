// INHERITANCE


// MULTIPLE INHERITANCE

#include<iostream>
using namespace std;
class person
{
    public:
    string name;
    int rollno;
};

class teacher
{
    public:
    string subject;
    int salary;
};

class TA: public person , public teacher
{

};


int main()
{
    TA t1;
    t1.name="asp";
    t1.subject="Math";
    t1.salary=50000;
    cout<<t1.subject<<endl;
    cout<<t1.salary<<endl;
    cout<<t1.name<<endl;

    return 0;
    
}