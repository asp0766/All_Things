//  Video 17 : Java Comparators & Comparable : -


//  Comparable : - 2q   

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Person implements Comparable<Person> {
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public int compareTo(Person other) {
        return this.age - other.age; // Sort by age
    }

    @Override
    public String toString() {
        return name + " (" + age + ")";
    }
}

public class first50{
    public static void main(String[] args) {
        List<Person> people = new ArrayList<>();
        people.add(new Person("Alice", 30));
        people.add(new Person("Bob", 25));
        people.add(new Person("Charlie", 35));

        Collections.sort(people); // Sorts using the compareTo method
        System.out.println(people); // Output: [Bob (25), Alice (30), Charlie (35)]
    }
}
