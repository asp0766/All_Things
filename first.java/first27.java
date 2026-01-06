// Final Keyword : - 


public class first27{

    // Final variable example
    public static void main(String[] args) {
        final int MAX_VALUE = 100; // Declaring a final variable
        System.out.println("Max Value: " + MAX_VALUE);
        
        // Uncommenting the next line will cause a compilation error
        // MAX_VALUE = 200; // Error: cannot assign a value to final variable MAX_VALUE

        // Final method example
        Child child = new Child();
        child.display(); // Calls the final method from Parent class

        // Final class example
        FinalClass finalClass = new FinalClass();
        finalClass.show();
    }
}

// Final method example
class Parent {
    final void display() { // Final method
        System.out.println("This is a final method in the Parent class.");
    }
}

class Child extends Parent {
    // Uncommenting the next method will cause a compilation error
    // void display() { // Error: cannot override final method
    //     System.out.println("Trying to override the final method.");
    // }
}

// Final class example
final class FinalClass {
    void show() {
        System.out.println("This is a final class.");
    }
}

// Uncommenting the next class will cause a compilation error
// class SubClass extends FinalClass { // Error: cannot subclass the final class
// }
