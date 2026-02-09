// Comparator : -


import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
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

public class first51{
    public static void main(String[] args) {
        List<Person> people = new ArrayList<>();
        people.add(new Person("Alice", 30));
        people.add(new Person("Bob", 25));
        people.add(new Person("Charlie", 35));

        // Sort by name using a Comparator
        Collections.sort(people, new Comparator<Person>() {
            @Override
            public int compare(Person p1, Person p2) {
                return p1.name.compareTo(p2.name); // Sort by name
            }
        });

        System.out.println(people); // Output: [Alice (30), Bob (25), Charlie (35)]

        // Sort by age using a Comparator
        Collections.sort(people, new Comparator<Person>() {
            @Override
            public int compare(Person p1, Person p2) {
                return p1.age - p2.age; // Sort by age
            }
        });

        System.out.println(people); // Output: [Bob (25), Alice (30), Charlie (35)]
    }
}