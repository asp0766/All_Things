// POLYMORPHISM
// polymorphism is the ability of take on different forms or behave in different forms or behave in different ways depending on the context in which they are used

#include <iostream>
using namespace std;

class student
{
public:
    string name;

    student()
    {
        cout << "non-parameterized\n";
    }

    student(string name)
    {
        this->name=name;
        cout<<"paramterized\n";
    }
};

int main()
{
    student s1;
    student s2("ASP");
    
    return 0;
}