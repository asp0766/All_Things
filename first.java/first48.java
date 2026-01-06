// SortedMap Interface : -


import java.util.TreeMap;

public class first48 {
    public static void main(String[] args) {
        TreeMap<String, Integer> treeMap = new TreeMap<>();
        treeMap.put("Banana", 2);
        treeMap.put("Apple", 1);
        treeMap.put("Cherry", 3);
        System.out.println(treeMap); // Output: {Apple=1, Banana=2, Cherry=3}
    }
}