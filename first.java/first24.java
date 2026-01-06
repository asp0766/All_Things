// this keyword : -



public class first24 {
        String name;
        int age;
    
        // Constructor
        public first24(String name, int age) {
            // Using 'this' to refer to the instance variables
            this.name = name; // 'this.name' refers to the instance variable
            this.age = age;   // 'this.age' refers to the instance variable
        }
    
        // Method to display person's information
        public void displayInfo() {
            System.out.println("Name: " + name);
            System.out.println("Age: " + age);
        }
    
        public static void main(String[] args) {
            // Creating a new Person object
            first24 person1 = new first24("Alice", 25);
            
           
            person1.displayInfo();
        }
    }


// in java , this keyword is used to refer to the current object inside a method or a constructor.
// we mostly use this keyword to remove any Ambiguity in variable Names. we can also use this to invoke methods of the current class or to invoke a constructor of the current class

