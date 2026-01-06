// Using Lambda Expressions with Comparator : -  END  OF THIS PLAYLIST WITH NOTES


import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Person {
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public String toString() {
        return name + " (" + age + ")";
    }
}

public class first52 {
    public static void main(String[] args) {
        List<Person> people = new ArrayList<>();
        people.add(new Person("Alice", 30));
        people.add(new Person("Bob", 25));
        people.add(new Person("Charlie", 35));

        // Sort by name using a lambda expression
        Collections.sort(people, (p1, p2) -> p1.name.compareTo(p2.name));
        System.out.println("Sorted by name: " + people); // Output: [Alice (30), Bob (25), Charlie (35)]

        // Sort by age using a lambda expression
        Collections.sort(people, (p1, p2) -> Integer.compare(p1.age, p2.age));
        System.out.println("Sorted by age: " + people); // Output: [Bob (25), Alice (30), Charlie (35)]
    }
}