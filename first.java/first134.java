// Polymorphism : - Runtime 


class Parent {
    void show() {
        System.out.println("Parent class");
    }
}

class Child extends Parent {
    void show() {
        System.out.println("Child class");
    }
}

public class first134 {
    public static void main(String[] args) {
        Parent obj = new Child();
        obj.show();  // Output: Child class
    }
}
