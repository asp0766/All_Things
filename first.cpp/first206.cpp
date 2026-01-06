#include<iostream>
using namespace std;

class hero
{
    private:
    int health;

    public:
    int level;

    // Default constructor
    hero() 
    {
        cout << "Default constructor called" << endl;
        health = 0; // Initialize health to a default value
        level = 1; // Optionally initialize level to a default value
    }

    // Parameterized constructor
    hero(int health)
    {
        cout << "this->" << this << endl;
        this->health = health;
    }

    // Another parameterized constructor
    hero(int health, int level)
    {
        cout << "this->" << this << endl;
        this->health = health;
        this->level = level;
    }

    // Set health method
    void sethealth(int health)
    {
        this->health = health; // Correctly set the member variable
    }

    // Get health method
    int gethealth()
    {
        return health;
    }
};

int main()
{
    hero h; // Now this will call the default constructor
    h.sethealth(122); // Set health to 122
    cout << "health is: " << h.gethealth() << endl; // Output the health

    return 0; 
}