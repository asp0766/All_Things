// exercise

#include <iostream>
using namespace std;
int main()
{
    float basic;
    float percentAllow;
    float percentDeduct;
    float netSalary;

    cout<<"enter basic salary";
    cin>>basic;
    cout<<"enter percent of allowance";
    cin>>percentAllow;
    cout<<"enter percent of deductions";
    cin>>percentDeduct;
     
     netSalary=basic+basic*percentAllow/100-basic*percentDeduct/100;
    
    cout<<"netSalary is "<<netSalary<<endl;
    return 0;

}