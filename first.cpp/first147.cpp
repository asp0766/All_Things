// FUNCTION 
// static variable ::: 
/* --> they have local scope but remain in memory through out the execution of program
   --> they are created in code section 
   --> they are history sensitive */

#include <iostream>
using namespace std;
void fun()
{
    static int s=10;  // static function increases value whenever we print value that's called static 
    s++;
    cout<<s<<endl;
}

int main()
{
    fun();         // here we can see an example of static function 
    fun();
    

}