//  19. Constants , Preprocessor Directives and Namespaces 

// Constant Qualifier



// Constant Variable
#include<iostream>
using namespace std;
int main()
{
    const int x = 10 ;
    x++;              // Not Allowed
    cout<<x;


    return 0;
}



// Constant Pointers
#include <iostream>
using namespace std;

int main() {
    int value = 42;
    const int *ptr = &value; // Pointer to a constant integer
    // *ptr = 100; // This will cause a compilation error

    cout << "Value: " << *ptr << endl;
    return 0; 
}



// Constant Member Functions
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass(int val) : value(val) {}

    int getValue() const { // Constant member function
        return value;
    }

private:
    int value;
};

int main() {
    MyClass obj(10);
    cout << "Value: " << obj.getValue() << endl;
    return 0;
}




// Constant References
#include <iostream>
using namespace std;

void printValue(const int& val) { // Constant reference
    cout << "Value: " << val << endl;
    // val = 20; // This will cause a compilation error
}

int main() {
    int num = 10;
    printValue(num);
    return 0;
}




// Constant Arrays
#include <iostream>
using namespace std;

int main() {
    const int arr[] = {1, 2, 3, 4, 5}; // Constant array
    // arr[0] = 10; // This will cause a compilation error

    for (const int& num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}



// Constant Expressions with constexpr
#include <iostream>
using namespace std;

constexpr int square(int x) { // Constant expression function
    return x * x;
}

int main() {
    constexpr int result = square(5); // Compile-time constant
    cout << "Square of 5 is: " << result << endl;
    return 0;
}