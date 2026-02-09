//write a program to offer discounts on total bill amount
// program should take total amount as input and calculate discount
// if bill amount<100 no discount
// bill amount >= 100 and less than 500 then 10% discount
// bill amount>= 500 then 20 % discount

#include <iostream>
using namespace std;
 int main()
 {
    float billamount;
    float discount=0.0;

    cout<<"enter bill amount";
    cin>>billamount;
    if(billamount>=500)
    discount=billamount*20/100;
    else if(billamount>=100 && billamount<500)
    discount=billamount*10/100;

    cout<<"bill amount is "<<billamount<<endl;
    cout<<"discount is "<<discount<<endl;
    cout<<"discounted amount is "<<billamount-discount<<endl;

    return 0;
 }