// Apna College
// Constructor

#include <iostream>
using namespace std;

class teacher
{
private:
    int salary;

    // public:
    // teacher()
    // {
    //     dept="Computer Science";
    // }

public:
    teacher(string n, string d, string s, int sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    string name;
    string dept;
    string subject;

    void setsalary(int s)
    {
        salary = s;
    }

    int getsalary()
    {
        return salary;
    }

    void mc()
    {
        cout<<"name : "<<name<<endl;
        cout<<"dept : "<<dept<<endl;
        cout<<"subject : "<<subject<<endl;
        cout<<"salary  : "<<salary<<endl;

    }
};

int main()
{
    teacher t1("ASP", "CSE", "PCM", 70000);
    t1.mc();

    teacher t2(t1);
    t2.mc();


}