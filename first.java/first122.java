// OOP 1 : Introduction & Concepts - Classes , Objects , Constructors , Keywords : -

// Classes & Objects : - 
class Car {
    String model;
    int year;
    
    void display() {
        System.out.println("Car Model: " + model + ", Year: " + year);
    }
}

public class first122{
    public static void main(String[] args) {
        Car obj = new Car(); // Creating an object
        obj.model = "Tesla";
        obj.year = 2023;
        obj.display();
    }
}











/*Key OOP Concepts in Java:

Class – Blueprint for objects.

Object – Instance of a class.

Constructor – Special method to initialize objects.

Encapsulation – Data hiding using private variables and public methods.

Abstraction – Hiding implementation details.

Inheritance – Acquiring properties of another class.

Polymorphism – Ability to take multiple forms (Method Overloading & Overriding).

*/
