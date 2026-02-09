// switch case
// by using switch case display name of the day

#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter no of day";
    cin>>day;

    switch(day)
    {

    case 1:
    cout<<"monday\n";   // \n is for new line
    break;

    case 2:
    cout<<"tuesday\n";
     break; 

    case 3:
    cout<<"wendesday\n";
   break;

    case 4:
    cout<<"thursday\n";
    break;

    case 5:
    cout<<"friday\n";
    break;

    case 6:
    cout<<"saturday\n";
    break;

    case 7:
    cout<<"sunday\n";
    break;

    default : cout<<"invalid no";

    }

    return 0;
}