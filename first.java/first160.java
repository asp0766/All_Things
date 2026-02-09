// Collections Framework : -


import java.util.*;

public class first160 {
    public static void main(String[] args) {
        List<String> list = new ArrayList<>();
        list.add("Apple");
        list.add("Banana");
        System.out.println(list); // Output: [Apple, Banana]

        Map<Integer, String> map = new HashMap<>();
        map.put(1, "One");
        map.put(2, "Two");
        System.out.println(map); // Output: {1=One, 2=Two}
    }
}