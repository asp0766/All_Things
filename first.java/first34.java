// Video 12 : - Java Memory , Polymorphism & Object Class : -


// Object Class : -

class Person {
    private String name;
    private int age;

    // Constructor
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Override toString() method from Object class
    @Override
    public String toString() {
        return "Person{name='" + name + "', age=" + age + "}";
    }

    // Override equals() method from Object class
    @Override
    public boolean equals(Object obj) {
        if (this == obj) 
        return true; 

        if (obj == null || getClass() != obj.getClass()) 
        return false; 
        
        Person person = (Person) obj; 
        return age == person.age && name.equals(person.name); 
    }

    // Override hashCode() method from Object class
    @Override
    public int hashCode() {
        return 31 * name.hashCode() + age; // Generate a hash code based on name and age
    }
}

public class first34{
    public static void main(String[] args) {
        Person person1 = new Person("Alice", 30);
        Person person2 = new Person("Bob", 25);
        Person person3 = new Person("Alice", 30);

        // Using toString() method
        System.out.println(person1); // Calls person1.toString()
        System.out.println(person2); // Calls person2.toString()

        // Using equals() method
        System.out.println("person1 equals person3: " + person1.equals(person3)); // true
        System.out.println("person1 equals person2: " + person1.equals(person2)); // false

        // Using hashCode() method
        System.out.println("person1 hashCode: " + person1.hashCode());
        System.out.println("person3 hashCode: " + person3.hashCode());
        System.out.println("person2 hashCode: " + person2.hashCode());
    }
}

