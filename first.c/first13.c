// typecasting 



#include <stdio.h>

int main() {
    int i = 17;
    char c = 'c';  // ASCII value is 99
    float sum;

    sum = i + c;  // 'c' is implicitly converted to int
    printf("Value of sum: %f\n", sum);
}