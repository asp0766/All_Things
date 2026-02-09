// 26 . All About Data Types  - End Of The Course Of Abdul Bari Drive Course


/*

1. Basic Data Types


a. Integer Types : 
int: Represents a whole number. Typically 4 bytes (32 bits) on most systems.

short: Represents a smaller integer. Typically 2 bytes (16 bits).

long: Represents a larger integer. Typically 4 bytes (32 bits) or more.

long long: Represents an even larger integer. Typically 8 bytes (64 bits).



b. Character Type :
char: Represents a single character. Typically 1 byte (8 bits). Can store ASCII characters.

wchar_t: Represents a wide character. Typically 2 or 4 bytes, used for Unicode characters.



c. Floating-Point Types :
float: Represents a single-precision floating-point number. Typically 4 bytes (32 bits).

double: Represents a double-precision floating-point number. Typically 8 bytes (64 bits).

long double: Represents an extended-precision floating-point number. Size can vary (often 8, 12, or 16 bytes).

2. Modifiers
Modifiers can be applied to the basic data types to change their size or sign:

Signed: Default for integer types. Can hold both positive and negative values.

Unsigned: Can only hold non-negative values, effectively doubling the maximum value.

Short: Reduces the size of the integer type.

Long: Increases the size of the integer type.
Examples: 
unsigned int u; // Non-negative integer
long long ll;   // Larger integer




3. Boolean Type
bool: Represents a boolean value, either true or false. Typically 1 byte.



4. Void Type
void: Represents the absence of type. Used in functions that do not return a value.



5. Derived Data Types
These are built from the basic data types:

a. Arrays
A collection of elements of the same type.
int arr[10]; // Array of 10 integers



b. Pointers
A variable that stores the address of another variable.
int* ptr; // Pointer to an integer



c. References
An alias for another variable.
int& ref = original; // Reference to an integer




d. Functions
Functions can also be considered as data types, as they can return values of specific types.
int add(int a, int b); // Function returning an integer




6. User -Defined Data Types
C++ allows the creation of complex data types using the following:

a. Structures (struct)
A collection of different data types grouped together.
struct Person {
    string name;
    int age;
};



b. Classes
Similar to structures but with added features like encapsulation, inheritance, and polymorphism.
class Car {
public:
    string model;
    int year;
};



c. Unions
A special data type that allows storing different data types in the same memory location.
union Data {
    int intValue;
    float floatValue;
    char charValue;
};




d. Enumerations (enum)
A user-defined type that consists of a set of named integral constants.
enum Color { Red, Green, Blue };




7. Type Modifiers
C++ also provides type modifiers that can be used with basic data types:

const: Indicates that the value cannot be changed after initialization.

volatile: Indicates that the value may be changed by external factors, preventing the compiler from optimizing it.



8. Type Aliases
C++ allows the creation of type aliases using typedef or using:
typedef unsigned long ulong; // Using typedef
using ulong = unsigned long;  // Using using




9. Type Inference
C++11 introduced the auto keyword, which allows the compiler to automatically deduce the type of a variable:
auto x = 5;

*/