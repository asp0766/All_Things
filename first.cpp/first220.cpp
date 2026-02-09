//  Set : - 


#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> v = {2,4,5,6,7};
    // v.push_back(29);    not allowed
    // v.push_front(45);      not allowed
    v.insert(29);
    v.insert(45);
      

    set<int>::iterator itr;
    cout<<"using iterator"<<endl;
    for(itr=v.begin(); itr != v.end(); itr++)
    cout<<*itr<<endl;  // we can add ++ before * to increase the values

    cout<<"using for each loop"<<endl;
    for(int x:v)
    cout<<x<<endl;

}