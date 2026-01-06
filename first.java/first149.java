// Annotations  : - 


class first148 {
    void show() {
        System.out.println("Parent class method");
    }
}

class Child extends first148 {
    @Override
    void show() {
        System.out.println("Overridden method in Child class");
    }
}

public class first149 {
    public static void main(String[] args) {
        Child obj = new Child();
        obj.show(); // Output: Overridden method in Child class
    }
}
