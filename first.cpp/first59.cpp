//array
// pattern of number using nested FOR loop :---


#include <iostream>
using namespace std;

int main ()
{
    int i, j, count = 1;
    for (i = 0; i < 4; i++)  // Loop for rows
    {
        for (j = 0; j <= i; j++)  // Print increasing numbers in each row
        {
            cout << count << " ";
            count++;
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
