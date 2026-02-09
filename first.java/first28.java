//   Video 10 :  ENCAPSULATION : -



public class first28 {
    public static void main(String[] args) {
    
        Person person = new Person();
        
        // Set values using setters
        person.setName("Alice");
        person.setAge(30);
        
        // Get values using getters
        System.out.println("Name: " + person.getName());
        System.out.println("Age: " + person.getAge());
        
        // Attempting to set an invalid age
        person.setAge(-5); // This will print an error message
    }
}

// Class representing a Person
class Person {
    // Private variables
    private String name;
    private int age;

    // Getter for name
    public String getName() {
        return name;
    }

    // Setter for name
    public void setName(String name) {
        this.name = name;
    }

    // Getter for age
    public int getAge() {
        return age;
    }

    // Setter for age with validation
    public void setAge(int age) {
        if (age >= 0) {
            this.age = age;
        } else {
            System.out.println("Error: Age cannot be negative.");
        }
    }
}