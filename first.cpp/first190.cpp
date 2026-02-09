// Destructor



#include<iostream>
using namespace std;

class student 
{
    public:
    string name;
    float cgpa;

    student(string n, float per)
    {
        name=n;
        cgpa=per;
    }

    student():name(""), cgpa(0.0) {}

    ~student()
    {
        cout<<"i am going to delete \n";
        
    }
    

};

int main()
{
    student s1;
    s1.name="asp";
    s1.cgpa=6.7;
    cout<<s1.name<<endl<<s1.cgpa<<endl;
    
    
    return 0;
}