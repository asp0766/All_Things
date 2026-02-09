// INHERITANCE


#include<iostream>
using namespace std;

class person
{
    public:
    string name;
    int age;

    person(string n , int a)
    {
        name= n;
        age =a ;
    }  
};

class student:public person
{
    // name , age , rollno
    public:
    int rollno;
    student(string n ,int a ,int no) : person(n,a), rollno(no) {}
    

};

int main()
{
    person p("asp",23);
    student s1("annu",12,677);
    cout<<p.name<<endl;
    cout<<p.age<<endl;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.rollno;


    return 0;
}