// FRIEND AND STATIC MEMBERS INNER CLASSES


// STATIC MEMBERS  by function 



#include <iostream>
using namespace std;

 class test
 {
    private:
    int a; 
    int b; 

    public:
    static int count;

    test()
    {
        a=10;
        b=10;
        count++;
    }


    static int getcount()
    {
        return count;
    }
 };

 int test::count=0;   // global variable

 int main()
 {
    cout<<test::getcount()<<endl;
    test t1; 
    cout<<t1.getcount();


    return 0;
 }