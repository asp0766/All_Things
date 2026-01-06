// Serialization 
// serialization is a process of string and retrieving state of an object
// class must have a default constructor 


#include <iostream>
#include <fstream>
using namespace std;

class student 
{
    private:
    string name;
    int roll;
    string branch;

    public:
    student() {}
    student(string n , int r ,string b )
    {
        name = n ; 
        roll = r ; 
        branch = b ;
    }

    friend ofstream & operator<<(ofstream &ofs , student &s) ;
    friend ifstream & operator>>(ifstream &ifs , student &s) ;
    friend ostream & operator<<(ostream &os , student &s) ;
};

ofstream & operator<<(ofstream &ofs , student &s)
{
    ofs << s.name << " " << s.roll << " " << s.branch ;
    return ofs;
}

ifstream & operator>>(ifstream &ifs , student &s)
{
    ifs >> s.name >> s.roll >> s.branch ;
    return ifs;
}

ostream & operator<<(ostream &os , student &s)
{
    os << s.name << " " << s.roll << " " << s.branch ;
    return os;
}

int main()
{
    ofstream ofs("test.txt");
    student s1("john", 10  , " cse ");
    ofs<<s1;
    ofs.close();
    student s2 ;
    ifstream ifs("test.txt");
    ifs>>s1;
    cout<<s1;


}
