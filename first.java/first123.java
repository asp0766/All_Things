// Constructor : -


class Car {
    String model;
    
    // Constructor
    Car(String m) {
        model = m;
    }

    void show() {
        System.out.println("Car: " + model);
    }
}

public class first123{
    public static void main(String[] args) {
        Car obj = new Car("BMW"); // Calls constructor
        obj.show();
    }
}

