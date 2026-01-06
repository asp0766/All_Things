//2D array
// multiply numbers between 2 differnt 2D arrays


#include <iostream>
using namespace std;
int main()
{
    int a[2][3]={{2,5,9},{7,3,6}};
    int b[2][3]={{6,3,9},{9,5,2}};
    int c[2][3];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            cout<<c[i][j];
           cout<<endl;

        }
        
    }
   

    return 0;
    }