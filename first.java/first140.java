// Access Control (Access Modifiers)


/* Access control in Java defines the visibility of classes, methods, and variables.

public → Accessible everywhere
private → Accessible only within the same class
protected → Accessible within the same package and subclasses
default (no modifier) → Accessible within the same package  */


class first141 {
    private String name = "John"; // Private variable

    protected void display() {
        System.out.println("Hello, " + name);
    }
}

public class first140 extends first141 {
    public static void main(String[] args) {
        first141 obj = new first141();
        obj.display(); // Output: Hello, John
    }
}
