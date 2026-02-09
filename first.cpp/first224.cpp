//  Final Keyword  : - 



#include <iostream>
using namespace std;

class parent 
{
    virtual  void show () final  // helps to stop the function overriding in child class
    {

    }
};

class child: parent 
{
    void show()
    {

    }
};

int main()
{
    parent p;
    child c;
    return 0;
}