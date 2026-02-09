// display grades by using if else and if else program under if condition :::

#include <iostream>
using namespace std;
int main()
{
    int m1,m2,m3,total;
    float avg;           // because percentage can come in decimal numbers so we take float value here
    cout<<"enter marks of 3 subjects";
    cin>>m1>>m2>>m3;     // read the marks of three subjects
    total = m1+m2+m3;
    avg = total/3;       // average of three subjects
    if(avg >=60)
    cout<<"A"<<endl;

    else if (avg>=35 && avg>=60)   //here we use elif= else if condition
    cout<<"b"<<endl;

    else
    cout<<"c"<<endl;

    return 0;

}