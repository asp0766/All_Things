// finding speed



#include <iostream>
using namespace std;
int main()
{
    int u,v,a;
    float speed;
    cout<<"enter 3 numbers";
    cin>>u>>v>>a;
    speed=(v*v-u*u)/(2*a);
    cout<<"speed is "<<speed<<endl;
    return 0;
    
}