// HIERARCHIAL INHERITANCE


#include<iostream>
using namespace std;

class person
{
    public:
    string name;
    int age;
};

class student  : public person
{
    public:
    int rollno;
};

class teacher: public person
{
    public:
    string subject;
};

class TA: public student , public teacher
{

};

int main()
{
    TA s;
    s.name="rahul";
    s.age=23;
    s.rollno=37;
    s.subject="c++";
    cout<<"Name: "<<s.name<<endl;
    cout<<"Age: "<<s.age<<endl;
    cout<<"Roll no: "<<s.rollno<<endl;
    cout<<"subject is : "<<s.subject<<endl;


    return 0;
}