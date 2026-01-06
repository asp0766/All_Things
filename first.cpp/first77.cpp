// POINTER
// pointer arithmetic   p+2  and p-2

#include <iostream>
using namespace std;
int main()
{

    int a[5] = {2, 4, 6, 8, 10};
    int *p = a;
    cout << p << endl;
    cout << p + 2 << endl;
    cout << p << endl;
    cout << p - 2 << endl; /* its showing address of pointer as + it's increase bytes value in pointer and
                          in case of -- it's decrease bytes values as we can know that a single int take 4 bytes...
                           and we increase 2 and 8 bytes will be reduce and increase...  that's solve
                           if put * infront of p also *(p+2) then will be get exact value and anything that's available in
                           given  array   */

    return 0;
}