// Static Variables



#include <stdio.h>

void function() {
    static int staticVar = 0; // Static local variable
    staticVar++;
    printf("Static Variable: %d\n", staticVar);
}

int main() {
    function(); // Output: Static Variable: 1
    function(); // Output: Static Variable: 2
    function(); // Output: Static Variable: 3
    return 0;
}