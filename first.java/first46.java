//   Deque Interface : -


import java.util.ArrayDeque;
import java.util.Deque;

public class first46 {
    public static void main(String[] args) {
        Deque<String> deque = new ArrayDeque<>();
        deque.addFirst("First");
        deque.addLast("Second");
        System.out.println(deque); // Output: [First, Second]
    }
}