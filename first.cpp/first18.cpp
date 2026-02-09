//compound conditional statements

#include <iostream>
using namespace std;
int main()
{



int age;
cout<<"enter age ";
cin>>age;
if (age>=12 && age<=30)       // && AND
{
      cout<<"young";

}

else{
    cout<<"older ";
}

if (age>=12 || age<=30)  // || OR
{
    cout<<"can";

}
else{
    cout<<"can't";
}




 return 0;


}