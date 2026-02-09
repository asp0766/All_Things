// Map Interface : -


import java.util.HashMap;
import java.util.Map;

public class first44{
    public static void main(String[] args) {
        Map<String, Integer> map = new HashMap<>();
        map.put("Apple", 1);
        map.put("Banana", 2);
        map.put("Cherry", 3);
        System.out.println(map); // Output: {Apple=1, Banana=2, Cherry=3}
    }
}
