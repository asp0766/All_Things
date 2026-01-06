// Abstract Classes : -


abstract class first144{
    abstract void start(); // Abstract method

    void show() { // Concrete method
        System.out.println("Vehicle is ready");
    }
}

class Car extends first144{
    void start() {
        System.out.println("Car starts with a key");
    }
}

public class first145 {
    public static void main(String[] args) {
        Car obj = new Car();
        obj.start(); // Output: Car starts with a key
        obj.show();  // Output: Vehicle is ready
    }
}
