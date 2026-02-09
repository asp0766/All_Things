// Inheritance  : - 


class Animal {
    void sound() {
        System.out.println("Animals make sounds");
    }
}

class Dog extends Animal {
    void sound() {
        System.out.println("Dog barks");
    }
}

public class first133{
    public static void main(String[] args) {
        Dog d = new Dog();
        d.sound();  // Output: Dog barks
    }
}
