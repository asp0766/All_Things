// Forward List : - 

#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> v = {2,4,5,6,7};
    // v.push_back(29);    not allowed
    v.push_front(45);
    v.push_front(67);

    forward_list<int>::iterator itr;
    cout<<"using iterator"<<endl;
    for(itr=v.begin(); itr != v.end(); itr++)
    cout<<*itr<<endl;  // we can add ++ before * to increase the values

    cout<<"using for each loop"<<endl;
    for(int x:v)
    cout<<x<<endl;

}