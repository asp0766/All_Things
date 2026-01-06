// List : - 


#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> v = {2,4,5,6,7};
    v.push_back(29);
    v.push_back(45);

   list<int>::iterator itr;
    cout<<"using iterator"<<endl;
    for(itr=v.begin(); itr != v.end(); itr++)
    cout<<*itr<<endl;  // we can add ++ before * to increase the values

    cout<<"using for each loop"<<endl;
    for(int x:v)
    cout<<x<<endl;

}