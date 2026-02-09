// Hybrid Inheritance 



#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class from Animal
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal is walking." << endl;
    }
};

// Another derived class from Animal
class Bird : public Animal {
public:
    void fly() {
        cout << "Bird is flying." << endl;
    }
};

// Class that inherits from both Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    void sound() {
        cout << "Bat is screeching." << endl;
    }

    // Function to access the eat method from Animal
    void eatFromAnimal() {
        Mammal::eat(); // Call eat from Animal via Mammal
    }

    void eatFromBird() {
        Bird::eat(); // Call eat from Animal via Bird (if needed)
    }
};

int main() {
    Bat bat;

    // Accessing functions from Mammal and Bird
    bat.eatFromAnimal(); // From Animal through Mammal
    bat.walk();          // From Mammal
    bat.fly();           // From Bird
    bat.sound();         // From Bat

    return 0;
}