// else if ladder for nested if :-  this program find a day by using numbers
#include <iostream>
using namespace std;
int main()                                                                  
{                                   
    int day;
    cout<<"enter day number";
    cin>>day;
    if (day == 1)                     
    {                              // it's depend of  on my mind of using pink brackets 
        cout<<"mon"<<endl;        // means pink brackets is not complusory here
    }                             // we can write this code without using pink brackets
                                 
    else if (day ==2)
     {
        cout<<"tue"<<endl;
     }
     else if (day ==3)
     {
     cout<<"wen"<<endl;}
     else if (day==4)
     cout<<"thu";

     else if (day==5)

     {
        cout<<"fri"<<endl;

     }
     else if (day==6)
     {
         cout<<"sat"<<endl;

     }
     else if (day==7)
     {
        cout<<"sun"<<endl;;

     }

     else 
     {
        cout<<"invalid number";

     }

     return 0;
    
}