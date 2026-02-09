// OOPs Tutorial In One Shot Apna College   Time = 2.04.22

#include <iostream>
using namespace std;

class teacher
{

private:
    int salary;




public:
    string name;
    string dept;
    string subject;


void setsalary(int s)
{
    salary=s;
}


int getsalary()
{
    return salary;
}



};

int main()
{
    teacher t1;
    t1.name = "asp";
    t1.dept = "maths";
    t1.subject = "algebra";
    t1.setsalary(30000);

    cout<<t1.getsalary()<<endl;

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;

    return 0;
}
