// Collections Utility Class : -


import java.util.*;   // Importing the java.util package for using the Collections class.

public class first49 {
    public static void main(String[] args) {
        List<String> list = new ArrayList<>();
        list.add("Banana");
        list.add("Apple");
        list.add("Cherry");
        Collections.sort(list);
        System.out.println(list); // Output: [Apple, Banana, Cherry]
    }
}