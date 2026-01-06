//  Functional interface & Lambda Expression : - 



@FunctionalInterface
interface Greeting {
    void sayHello(String name);
}

public class first33{
    public static void main(String[] args) {
        // Implementing the functional interface using a lambda expression
        Greeting greeting = (name) -> System.out.println("Hello, " + name + "!");

        
        greeting.sayHello("Anurag");
        greeting.sayHello("ASP");
    }
}