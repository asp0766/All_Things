// Abstraction Using Interface : - 


interface Animal {
    void makeSound();
}

class Cat implements Animal {
    public void makeSound() {
        System.out.println("Meow Meow");
    }
}

public class first138{
    public static void main(String[] args) {
        Animal a = new Cat();
        a.makeSound();  // Output: Meow Meow
    }
}

