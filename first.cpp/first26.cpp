 // switch case 
 // by using switch case find day numbers 



#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter day no";
    cin>>day;

    switch(day)                 // if we want to write here int/chac then we will write case with ('int/chac')
    {
        case 1 :
        cout<<"mon";
        break;              // break is help us to execute only one case
                           
        case 2:             // if we don't use break command then next case will be automatically execute...
        cout<<"tue";
        break;

        case 3 :
        cout<<"wen";
        break;

        case 4:
        cout<<"thur";
        break;

        case 5:
        cout<<"fri";
        break;

        case 6:
        cout<<"sat";
        break;

        case 7:
        cout<<"sun";
        break;

        default : cout<<"invalid day no";

        return 0;
    }
}