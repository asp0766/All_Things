// Generics : - 

import java.util.*; // Importing the java.util package for using the classes and interfaces in it.

// Generic class
class Box<T> {
    private T item;

    public void setItem(T item) {
        this.item = item;
    }

    public T getItem() {
        return item;
    }
}

// Main class
public class first41{
    public static void main(String[] args) {
        // Using the generic class
        Box<Integer> integerBox = new Box<>();
        integerBox.setItem(123);
        System.out.println("Integer Value: " + integerBox.getItem());

        Box<String> stringBox = new Box<>();
        stringBox.setItem("Hello, Generics!");
        System.out.println("String Value: " + stringBox.getItem());

        // Using the generic method
        List<String> stringList = new ArrayList<>();
        stringList.add("Apple");
        stringList.add("Banana");
        stringList.add("Cherry");

        System.out.println("List of Fruits:");
        printList(stringList);
    }

    // Generic method
    public static <T> void printList(List<T> list) {
        for (T item : list) {
            System.out.println(item);
        }
    }
}


// Generics : -
// Generics means parameterized types. using generics, it is possible to create classes that work different data types. an entity suc has class , interface or method that operates on a parameterized type is generic entity.
