// OOPs 


// write a class for student with
// 1. roll 
// 2. name 
// 3. marks in 3 subjects 
// functions for total marks 
// grade 
// and required methods




#include <iostream>
#include<string>
using namespace std;

class student 
{
    private:
    int roll;
    string name;
    int mathmarks;
    int phymarks;
    int chemmarks;

    public:
    student(int r, string n ,int  m, int p , int c)
    {
        roll=r;
        name=n;
        mathmarks=m;
        phymarks=p;
        chemmarks=c;
    }

    int total()
    {
        return mathmarks+phymarks+chemmarks;
    }

    char grade()
    {
        float average=total()/3;
        if(average>60)
        return 'a'; 
        else if(average>=40 && average<60)
        return 'b';
        else
        return 'c';
    }
};

int main()
{
    int roll;
    string name; 
    int m,p,c;
    cout<<"enter roll number : ";
    cin>>roll;
    cin.ignore();
    cout<<"enter name of the student :";
    getline(cin,name);
    cout<<"enter marks of three subjects :";
    cin>>m>>p>>c;

    student s(roll,name,m,p,c);
    cout<<"total marks :"<<s.total()<<endl;
    cout<<"grade of student : "<<s.grade()<<endl;
}
