//array
// print patterns by star 
// right triangle pattern

#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i>=j)
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


// center triangle pattern 

#include <iostream>
using namespace std;

int main() {
    int rows = 5; 

    for (int i = 1; i <= rows; ++i) {
      
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }

        
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }

        
        cout << endl;
    }

    return 0;
}
