// Set Interface : -

import java.util.HashSet;
import java.util.Set;

public class first43{
    public static void main(String[] args) {
        Set<String> set = new HashSet<>();
        set.add("Apple");
        set.add("Banana");
        set.add("Apple"); // Duplicate, will not be added
        System.out.println(set); // Output: [Apple, Banana]
    }
}
