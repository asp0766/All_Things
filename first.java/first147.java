// Interfaces : -

interface first146 {
    void run(); // Abstract method
}

class Bike implements first146 {
    public void run() {
        System.out.println("Bike is running");
    }
}

public class first147 {
    public static void main(String[] args) {
        Bike obj = new Bike();
        obj.run(); // Output: Bike is running
    }
}
