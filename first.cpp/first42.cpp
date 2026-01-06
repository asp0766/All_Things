// display digit of a number
// reverse a number by using while loop :::


#include <iostream>
using namespace std;
int main()
{
  int n,r;
  cout<<"enter n ";
  cin>>n;
  while(n>0)
  {
    r=n%10;              // ( modulus % )
    n=n/10;
    cout<<r<<endl;     // if we don't use endl here it's give us proper reverse number
  }

  return 0;

}