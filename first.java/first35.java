// Polymorphism : - (Run Time Polymorphism)


class Animal {
    void sound() {
        System.out.println("Animal makes a sound");
    }
}

// Derived class Dog
class Dog extends Animal {
    @Override
    void sound() {
        System.out.println("Dog barks");
    }
}

// Derived class Cat
class Cat extends Animal {
    @Override
    void sound() {
        System.out.println("Cat meows");
    }
}

public class first35{
    public static void main(String[] args) {
        Animal myAnimal;  
        myAnimal = new Dog(); 
        myAnimal.sound();  

        myAnimal = new Cat();
        myAnimal.sound();
    }
}