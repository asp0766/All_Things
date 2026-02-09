// Keywords : - 
/*
class → Defines a class.
new → Creates an object.
this → Refers to the current object.
super → Calls parent class methods.
final → Used for constants, methods, or classes.
static → Belongs to the class, not instances. 
*/

class Student {
    String name;
    static String college = "XYZ"; // Static variable

    // Constructor using 'this'
    Student(String name) {
        this.name = name;
    }

    void display() {
        System.out.println(name + " from " + college);
    }
}

public class first124{
    public static void main(String[] args) {
        Student s1 = new Student("Alice");
        s1.display();
    }
}

