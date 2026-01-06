// FRIEND AND STATIC MEMBERS INNER CLASSES


// STATIC MEMBERS  by function 

#include<iostream>
using namespace std;

class student 
{
    public:
    int roll;
    string name;
    static int  addno;

    student(string n)
    {
      addno++;
      roll=addno;
      name=n;
    }


    void display()
    {
        cout<<"name: "<<name<<endl<<"roll: "<<roll<<endl;
    }
};

int student::addno=0;


int main()
{
    student s1("john");
    student s2("peter");
    student s3("aryan");

    s1.display();
    s3.display();
    cout<<"number admission : "<<student::addno<<endl;
}