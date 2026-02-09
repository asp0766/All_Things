//STRING 
// class string  SWAP function
#include <iostream> 
#include <string>
using namespace std;
int main()
{
    string str1 = "hello";
    string str2= "buddy";
    str1.swap(str2);
    cout<<str1<<" "<<str2<<endl;     // here we interchange both string hello replace by buddy and buddy replace by hello
    
    return 0;
}